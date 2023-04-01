#include "MM32_SPI_I2S.h"

void MM32_SPI_Init(MM32_SPI_Pin* sck, MM32_SPI_Pin* miso, MM32_SPI_Pin* mosi, MM32_SPI_Pin* nss, MM32_SPI_ModeConfig mode, uint32_t baud)
{
    MM32_GPIO_AFPinInit(sck,AF_PUSHPULL);
    MM32_GPIO_AFPinInit(miso,INPUT_FLOATING);
    MM32_GPIO_AFPinInit(mosi,AF_PUSHPULL);
    MM32_GPIO_AFPinInit(nss,AF_PUSHPULL);

    extern unsigned int SystemCoreClock;

    SPIx_I2S_SPBRG(sck->periBase).B.SPBRG = SystemCoreClock / baud;
    
    SPIx_I2S_GCTL(sck->periBase).B.MODE = 1;
    SPIx_I2S_GCTL(sck->periBase).B.NSS = 1;
    SPIx_I2S_GCTL(sck->periBase).B.DW8_32 = 0;

    SPIx_I2S_CCTL(sck->periBase).B.CPHA = mode % 2;
    SPIx_I2S_CCTL(sck->periBase).B.CPOL = mode / 2;

    SPIx_I2S_GCTL(sck->periBase).B.TXEN = 1;
    SPIx_I2S_GCTL(sck->periBase).B.RXEN = 1;

    SPIx_I2S_GCTL(sck->periBase).B.SPIEN = 1;
}

void MM32_SPI_Write8(MM32_SPI_PortNum port, uint8_t data)
{
    while(SPIx_I2S_CSTAT(port).B.TXFULL);
    SPIx_I2S_TXREG(port).B.TXREG = data;
}

uint8_t MM32_SPI_Read8(MM32_SPI_PortNum port)
{
    while(SPIx_I2S_CSTAT(port).B.TXFULL);
    SPIx_I2S_TXREG(port).B.TXREG = 0xFF;
    while(SPIx_I2S_CSTAT(port).B.RXAVL == 0);
    return SPIx_I2S_RXREG(port).U & 0xFF;
}

void MM32_SPI_WriteData(MM32_SPI_PortNum port, uint8_t* pdata, uint32_t size)
{
    for(uint32_t i = 0; i < size; i++)
    {
        MM32_SPI_Write8(port, pdata[i]);
    }
}

void MM32_SPI_ReadData(MM32_SPI_PortNum port, uint8_t* pdata, uint32_t size)
{
    for(uint32_t i = 0; i < size; i++)
    {
        pdata[i] = MM32_SPI_Read8(port);
    }
}

void MM32_SPI_Exchange(MM32_SPI_PortNum port, uint8_t* ptdata, uint8_t* prdata, uint32_t size)
{
    for(uint32_t i = 0; i < size; i++)
    {
        while(SPIx_I2S_CSTAT(port).B.TXFULL);
        SPIx_I2S_TXREG(port).B.TXREG = ptdata[i];
        while(SPIx_I2S_CSTAT(port).B.RXAVL == 0);
        prdata[i] = SPIx_I2S_RXREG(port).U & 0xFF;
    }
}
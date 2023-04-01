#ifndef _MM32_SPI_I2S_H_
#define _MM32_SPI_I2S_H_

#include <MM32_Registers.h> 
#include <MM32_GPIO.h>
#include <MM32_SPI_PinMap.h>

typedef enum
{
    SPI_MODE0 = 0,
    SPI_MODE1,
    SPI_MODE2,
    SPI_MODE3
}MM32_SPI_ModeConfig;

#define	SPIx_I2S_TXREG(x)		(*(MM32_SPI1_I2S_TXREG*)(x+0x00))
#define	SPIx_I2S_RXREG(x)		(*(MM32_SPI1_I2S_RXREG*)(x+0x04))
#define	SPIx_I2S_CSTAT(x)		(*(MM32_SPI1_I2S_CSTAT*)(x+0x08))
#define	SPIx_I2S_INTSTAT(x)		(*(MM32_SPI1_I2S_INTSTAT*)(x+0x0C))
#define	SPIx_I2S_INTEN(x)		(*(MM32_SPI1_I2S_INTEN*)(x+0x10))
#define	SPIx_I2S_INTCLR(x)		(*(MM32_SPI1_I2S_INTCLR*)(x+0x14))
#define	SPIx_I2S_GCTL(x)		(*(MM32_SPI1_I2S_GCTL*)(x+0x18))
#define	SPIx_I2S_CCTL(x)		(*(MM32_SPI1_I2S_CCTL*)(x+0x1C))
#define	SPIx_I2S_SPBRG(x)		(*(MM32_SPI1_I2S_SPBRG*)(x+0x20))
#define	SPIx_I2S_RXDNR(x)		(*(MM32_SPI1_I2S_RXDNR*)(x+0x24))
#define	SPIx_I2S_NSSR(x)		(*(MM32_SPI1_I2S_NSSR*)(x+0x28))
#define	SPIx_I2S_EXTCTL(x)		(*(MM32_SPI1_I2S_EXTCTL*)(x+0x2C))
#define	SPIx_I2S_I2SCFGR(x)		(*(MM32_SPI1_I2S_I2SCFGR*)(x+0x30))

void MM32_SPI_Init(MM32_SPI_Pin* sck, MM32_SPI_Pin* miso, MM32_SPI_Pin* mosi, MM32_SPI_Pin* nss, MM32_SPI_ModeConfig mode, uint32_t baud);

void MM32_SPI_Write8(MM32_SPI_PortNum port, uint8_t data);

uint8_t MM32_SPI_Read8(MM32_SPI_PortNum port);

void MM32_SPI_WriteData(MM32_SPI_PortNum port, uint8_t* pdata, uint32_t size);

void MM32_SPI_ReadData(MM32_SPI_PortNum port, uint8_t* pdata, uint32_t size);

void MM32_SPI_Exchange(MM32_SPI_PortNum port, uint8_t* ptdata, uint8_t* prdata, uint32_t size);

#endif
#include "MM32_I2C.h"

void MM32_I2C_MasterInit(MM32_I2C_Pin* scl, MM32_I2C_Pin* sda, MM32_I2C_SpeedConfig speed)
{
    MM32_GPIO_AFPinInit(scl, AF_OPENDRAIN_PULLUP);
    MM32_GPIO_AFPinInit(sda, AF_OPENDRAIN_PULLUP);

    I2Cx_ENR(scl->periBase).B.ENABLE = 0;
    I2Cx_CR(scl->periBase).B.DISSLAVE = 1;
    I2Cx_CR(scl->periBase).B.RESTART = 1;
    I2Cx_CR(scl->periBase).B.MASTER10 = 0;
    if(speed == I2C_SPEED_RAPID)
    {
        I2Cx_CR(scl->periBase).B.SPEED = 2;
    }
    else
    {
        I2Cx_CR(scl->periBase).B.SPEED = speed;
    }
    I2Cx_CR(scl->periBase).B.MASTER = 1;
				
    I2Cx_IMR(scl->periBase).U   = 0u;
    I2Cx_RXTLR(scl->periBase).U = 0u;
    I2Cx_TXTLR(scl->periBase).U = 0u;
		
    I2Cx_ENR(scl->periBase).B.ENABLE = 1;
}

void MM32_I2C_MasterRead(MM32_I2C_PortNum port, uint8_t addr, uint8_t* ptdata, uint32_t tsize, uint8_t* prdata, uint32_t rsize)
{
    I2Cx_ENR(port).B.ENABLE = 1;
    I2Cx_TAR(port).B.ADDR = addr;
    
    for(uint32_t i = 0; i < tsize; i++)
    {
        while(I2Cx_SR(port).B.TFE == 0);
        I2Cx_DR(port).B.DAT = ptdata[i];
    }
    while(I2Cx_SR(port).B.TFE == 0);

    for(uint32_t i = 0; i < rsize; i++)
    {
        I2Cx_DR(port).B.CMD = 1;
        while(I2Cx_SR(port).B.RFNE == 0);
        prdata[i] = I2Cx_DR(port).B.DAT;
    }

    MM32_I2C_MasterStop(port);
}

void MM32_I2C_MasterWrite(MM32_I2C_PortNum port, uint8_t addr, uint8_t* pdata, uint32_t size)
{
    I2Cx_ENR(port).B.ENABLE = 1;
    I2Cx_TAR(port).B.ADDR = addr;

    for(uint32_t i = 0; i < size; i++)
    {				
        while(I2Cx_SR(port).B.TFE == 0);
        I2Cx_DR(port).B.DAT = pdata[i];
    }
    while(I2Cx_SR(port).B.TFE == 0);
    MM32_I2C_MasterStop(port);

}

void MM32_I2C_MasterStop(MM32_I2C_PortNum port)
{
    I2Cx_ENR(port).B.ABORT = 1;
    I2Cx_TX_ABRT(port);
    while(I2Cx_SR(port).B.ACTIV);
    I2Cx_ICR(port);
    I2Cx_TX_ABRT(port);
	I2Cx_ENR(port).B.ENABLE = 0;
}
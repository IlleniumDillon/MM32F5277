#ifndef _MM32_I2C_H_
#define _MM32_I2C_H_

#include <MM32_Registers.h>
#include <MM32_GPIO.h>
#include <MM32_I2C_PinMap.h>

typedef enum
{
    I2C_SPEED_DEFAULT = 1,
    I2C_SPEED_FAST = 2,
    I2C_SPEED_RAPID = 3
}MM32_I2C_SpeedConfig;

#define	I2Cx_CR(x)		(*(MM32_I2C1_CR*)(x+0x00))
#define	I2Cx_TAR(x)		(*(MM32_I2C1_TAR*)(x+0x04))
#define	I2Cx_SAR(x)		(*(MM32_I2C1_SAR*)(x+0x08))
#define	I2Cx_DR(x)		(*(MM32_I2C1_DR*)(x+0x10))
#define	I2Cx_SSHR(x)		(*(MM32_I2C1_SSHR*)(x+0x14))
#define	I2Cx_SSLR(x)		(*(MM32_I2C1_SSLR*)(x+0x18))
#define	I2Cx_FSHR(x)		(*(MM32_I2C1_FSHR*)(x+0x1C))
#define	I2Cx_FSLR(x)		(*(MM32_I2C1_FSLR*)(x+0x20))
#define	I2Cx_ISR(x)		(*(MM32_I2C1_ISR*)(x+0x2C))
#define	I2Cx_IMR(x)		(*(MM32_I2C1_IMR*)(x+0x30))
#define	I2Cx_RAWISR(x)		(*(MM32_I2C1_RAWISR*)(x+0x34))
#define	I2Cx_RXTLR(x)		(*(MM32_I2C1_RXTLR*)(x+0x38))
#define	I2Cx_TXTLR(x)		(*(MM32_I2C1_TXTLR*)(x+0x3C))
#define	I2Cx_ICR(x)		(*(MM32_I2C1_ICR*)(x+0x40))
#define	I2Cx_RX_UNDER(x)		(*(MM32_I2C1_RX_UNDER*)(x+0x44))
#define	I2Cx_RX_OVER(x)		(*(MM32_I2C1_RX_OVER*)(x+0x48))
#define	I2Cx_TX_OVER(x)		(*(MM32_I2C1_TX_OVER*)(x+0x4C))
#define	I2Cx_RD_REQ(x)		(*(MM32_I2C1_RD_REQ*)(x+0x50))
#define	I2Cx_TX_ABRT(x)		(*(MM32_I2C1_TX_ABRT*)(x+0x54))
#define	I2Cx_RX_DONE(x)		(*(MM32_I2C1_RX_DONE*)(x+0x58))
#define	I2Cx_ACTIV(x)		(*(MM32_I2C1_ACTIV*)(x+0x5C))
#define	I2Cx_STOP(x)		(*(MM32_I2C1_STOP*)(x+0x60))
#define	I2Cx_START(x)		(*(MM32_I2C1_START*)(x+0x64))
#define	I2Cx_GC(x)		(*(MM32_I2C1_GC*)(x+0x68))
#define	I2Cx_ENR(x)		(*(MM32_I2C1_ENR*)(x+0x6C))
#define	I2Cx_SR(x)		(*(MM32_I2C1_SR*)(x+0x70))
#define	I2Cx_TXFLR(x)		(*(MM32_I2C1_TXFLR*)(x+0x74))
#define	I2Cx_RXFLR(x)		(*(MM32_I2C1_RXFLR*)(x+0x78))
#define	I2Cx_HOLD(x)		(*(MM32_I2C1_HOLD*)(x+0x7C))
#define	I2Cx_TX_ABRT_SRC(x)		(*(MM32_I2C1_TX_ABRT_SRC*)(x+0x80))
#define	I2Cx_SLV_NACK(x)		(*(MM32_I2C1_SLV_NACK*)(x+0x84))
#define	I2Cx_DMA(x)		(*(MM32_I2C1_DMA*)(x+0x88))
#define	I2Cx_SETUP(x)		(*(MM32_I2C1_SETUP*)(x+0x94))
#define	I2Cx_GCR(x)		(*(MM32_I2C1_GCR*)(x+0x98))
#define	I2Cx_EN_SR(x)		(*(MM32_I2C1_EN_SR*)(x+0x9C))
#define	I2Cx_SPKLEN(x)		(*(MM32_I2C1_SPKLEN*)(x+0xA0))
#define	I2Cx_SCL_TMO(x)		(*(MM32_I2C1_SCL_TMO*)(x+0xAC))
#define	I2Cx_SDA_TMO(x)		(*(MM32_I2C1_SDA_TMO*)(x+0xB0))
#define	I2Cx_SCL_STUCK(x)		(*(MM32_I2C1_SCL_STUCK*)(x+0xB4))
#define	I2Cx_SMB_SEXT(x)		(*(MM32_I2C1_SMB_SEXT*)(x+0xBC))
#define	I2Cx_SMB_MEXT(x)		(*(MM32_I2C1_SMB_MEXT*)(x+0xC0))
#define	I2Cx_SMB_IDLE(x)		(*(MM32_I2C1_SMB_IDLE*)(x+0xC4))
#define	I2Cx_SMB_ISR(x)		(*(MM32_I2C1_SMB_ISR*)(x+0xC8))
#define	I2Cx_SMB_IMR(x)		(*(MM32_I2C1_SMB_IMR*)(x+0xCC))
#define	I2Cx_SMB_RAWISR(x)		(*(MM32_I2C1_SMB_RAWISR*)(x+0xD0))
#define	I2Cx_SMB_ICR(x)		(*(MM32_I2C1_SMB_ICR*)(x+0xD4))
#define	I2Cx_OPT_SAR(x)		(*(MM32_I2C1_OPT_SAR*)(x+0xD8))
#define	I2Cx_SMB_UDID_LSB(x)		(*(MM32_I2C1_SMB_UDID_LSB*)(x+0xDC))
#define	I2Cx_SMB_UDID_MSB0(x)		(*(MM32_I2C1_SMB_UDID_MSB0*)(x+0XE0))
#define	I2Cx_SMB_UDID_MSB1(x)		(*(MM32_I2C1_SMB_UDID_MSB1*)(x+0XE4))
#define	I2Cx_SMB_UDID_MSB2(x)		(*(MM32_I2C1_SMB_UDID_MSB2*)(x+0xE8))
#define	I2Cx_SLVMASK(x)		(*(MM32_I2C1_SLVMASK*)(x+0xEC))
#define	I2Cx_SLVRCVADDR(x)		(*(MM32_I2C1_SLVRCVADDR*)(x+0xF0))

void MM32_I2C_MasterInit(MM32_I2C_Pin* scl, MM32_I2C_Pin* sda, MM32_I2C_SpeedConfig speed);

void MM32_I2C_MasterRead(MM32_I2C_PortNum port, uint8_t addr, uint8_t* ptdata, uint32_t tsize, uint8_t* prdata, uint32_t rsize);

void MM32_I2C_MasterWrite(MM32_I2C_PortNum port, uint8_t addr, uint8_t* pdata, uint32_t size);

void MM32_I2C_MasterStop(MM32_I2C_PortNum port);

#endif
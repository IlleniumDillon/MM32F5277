#ifndef _MM32_I2C1REG_H_
#define _MM32_I2C1REG_H_

#include "MM32_I2C1Regdef.h"

//control register
#define	I2C1_CR		(*(MM32_I2C1_CR*)(0x40005400+0x00))

//target address register
#define	I2C1_TAR		(*(MM32_I2C1_TAR*)(0x40005400+0x04))

//slave address register
#define	I2C1_SAR		(*(MM32_I2C1_SAR*)(0x40005400+0x08))

//Data Command Register
#define	I2C1_DR		(*(MM32_I2C1_DR*)(0x40005400+0x10))

//Standard Mode Clock High Count Register
#define	I2C1_SSHR		(*(MM32_I2C1_SSHR*)(0x40005400+0x14))

//Standard Mode Clock Low Count Register
#define	I2C1_SSLR		(*(MM32_I2C1_SSLR*)(0x40005400+0x18))

//Fast/Super Fast Mode Clock High Count Register
#define	I2C1_FSHR		(*(MM32_I2C1_FSHR*)(0x40005400+0x1C))

//Fast/Super Fast Mode Clock Low Count Register
#define	I2C1_FSLR		(*(MM32_I2C1_FSLR*)(0x40005400+0x20))

//Interrupt Status Register
#define	I2C1_ISR		(*(MM32_I2C1_ISR*)(0x40005400+0x2C))

//interrupt mask register
#define	I2C1_IMR		(*(MM32_I2C1_IMR*)(0x40005400+0x30))

//RAW interrupt register
#define	I2C1_RAWISR		(*(MM32_I2C1_RAWISR*)(0x40005400+0x34))

//receive threshold register
#define	I2C1_RXTLR		(*(MM32_I2C1_RXTLR*)(0x40005400+0x38))

//Transmit Threshold Register
#define	I2C1_TXTLR		(*(MM32_I2C1_TXTLR*)(0x40005400+0x3C))

//Combined and Independent Interrupt Clear Registers
#define	I2C1_ICR		(*(MM32_I2C1_ICR*)(0x40005400+0x40))

//Clear the RX_UNDER interrupt register
#define	I2C1_RX_UNDER		(*(MM32_I2C1_RX_UNDER*)(0x40005400+0x44))

//Clear the RX_OVER interrupt register
#define	I2C1_RX_OVER		(*(MM32_I2C1_RX_OVER*)(0x40005400+0x48))

//Clear the TX_OVER interrupt register
#define	I2C1_TX_OVER		(*(MM32_I2C1_TX_OVER*)(0x40005400+0x4C))

//Clear the RD_REQ interrupt register
#define	I2C1_RD_REQ		(*(MM32_I2C1_RD_REQ*)(0x40005400+0x50))

//Clear the TX_ABRT interrupt register
#define	I2C1_TX_ABRT		(*(MM32_I2C1_TX_ABRT*)(0x40005400+0x54))

//Clear the RX_DONE interrupt register
#define	I2C1_RX_DONE		(*(MM32_I2C1_RX_DONE*)(0x40005400+0x58))

//Clear the ACTIVITY interrupt register
#define	I2C1_ACTIV		(*(MM32_I2C1_ACTIV*)(0x40005400+0x5C))

//Clear the STOP_DET interrupt register
#define	I2C1_STOP		(*(MM32_I2C1_STOP*)(0x40005400+0x60))

//Clear the START_DET interrupt register
#define	I2C1_START		(*(MM32_I2C1_START*)(0x40005400+0x64))

//Clear the GEN_CALL interrupt register
#define	I2C1_GC		(*(MM32_I2C1_GC*)(0x40005400+0x68))

//enable register
#define	I2C1_ENR		(*(MM32_I2C1_ENR*)(0x40005400+0x6C))

//status register
#define	I2C1_SR		(*(MM32_I2C1_SR*)(0x40005400+0x70))

//Transmit buffer level register
#define	I2C1_TXFLR		(*(MM32_I2C1_TXFLR*)(0x40005400+0x74))

//Receive buffer level register
#define	I2C1_RXFLR		(*(MM32_I2C1_RXFLR*)(0x40005400+0x78))

//SDA hold time register
#define	I2C1_HOLD		(*(MM32_I2C1_HOLD*)(0x40005400+0x7C))

//Transfer Abort Source Register
#define	I2C1_TX_ABRT_SRC		(*(MM32_I2C1_TX_ABRT_SRC*)(0x40005400+0x80))

//Slave Receive NACK Register
#define	I2C1_SLV_NACK		(*(MM32_I2C1_SLV_NACK*)(0x40005400+0x84))

//DMA Control Register
#define	I2C1_DMA		(*(MM32_I2C1_DMA*)(0x40005400+0x88))

//SDA setup time register
#define	I2C1_SETUP		(*(MM32_I2C1_SETUP*)(0x40005400+0x94))

//General Call ACK Register
#define	I2C1_GCR		(*(MM32_I2C1_GCR*)(0x40005400+0x98))

//ENABLE Status Register
#define	I2C1_EN_SR		(*(MM32_I2C1_EN_SR*)(0x40005400+0x9C))

//filter register
#define	I2C1_SPKLEN		(*(MM32_I2C1_SPKLEN*)(0x40005400+0xA0))

//SCL Low Timeout Register
#define	I2C1_SCL_TMO		(*(MM32_I2C1_SCL_TMO*)(0x40005400+0xAC))

//SDA Low Timeout Register
#define	I2C1_SDA_TMO		(*(MM32_I2C1_SDA_TMO*)(0x40005400+0xB0))

//Clear the SCL_STUCK interrupt register
#define	I2C1_SCL_STUCK		(*(MM32_I2C1_SCL_STUCK*)(0x40005400+0xB4))

//SMBus Slave Clock Stretching Timeout Register
#define	I2C1_SMB_SEXT		(*(MM32_I2C1_SMB_SEXT*)(0x40005400+0xBC))

//SMBus Master Clock Stretching Timeout Register
#define	I2C1_SMB_MEXT		(*(MM32_I2C1_SMB_MEXT*)(0x40005400+0xC0))

//SMBus Bus Idle Count Register
#define	I2C1_SMB_IDLE		(*(MM32_I2C1_SMB_IDLE*)(0x40005400+0xC4))

//SMBus Interrupt Status Register
#define	I2C1_SMB_ISR		(*(MM32_I2C1_SMB_ISR*)(0x40005400+0xC8))

//SMBus Interrupt Mask Register
#define	I2C1_SMB_IMR		(*(MM32_I2C1_SMB_IMR*)(0x40005400+0xCC))

//SMBus RAW Interrupt Register
#define	I2C1_SMB_RAWISR		(*(MM32_I2C1_SMB_RAWISR*)(0x40005400+0xD0))

//SMBus Combined and Independent Interrupt Clear Registers
#define	I2C1_SMB_ICR		(*(MM32_I2C1_SMB_ICR*)(0x40005400+0xD4))

//Optional Slave Address Register
#define	I2C1_OPT_SAR		(*(MM32_I2C1_OPT_SAR*)(0x40005400+0xD8))

//SMBus UDID LSB Register
#define	I2C1_SMB_UDID_LSB		(*(MM32_I2C1_SMB_UDID_LSB*)(0x40005400+0xDC))

//SMBus UDID MSB Register 0
#define	I2C1_SMB_UDID_MSB0		(*(MM32_I2C1_SMB_UDID_MSB0*)(0x40005400+0XE0))

//SMBus UDID MSB Register 1
#define	I2C1_SMB_UDID_MSB1		(*(MM32_I2C1_SMB_UDID_MSB1*)(0x40005400+0XE4))

//SMBus UDID MSB Register 2
#define	I2C1_SMB_UDID_MSB2		(*(MM32_I2C1_SMB_UDID_MSB2*)(0x40005400+0xE8))

//Slave Address Mask Register
#define	I2C1_SLVMASK		(*(MM32_I2C1_SLVMASK*)(0x40005400+0xEC))

//Slave Receive Address Register
#define	I2C1_SLVRCVADDR		(*(MM32_I2C1_SLVRCVADDR*)(0x40005400+0xF0))


#endif

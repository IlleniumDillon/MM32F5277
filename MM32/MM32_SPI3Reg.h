#ifndef _MM32_SPI3REG_H_
#define _MM32_SPI3REG_H_

#include "MM32_SPI3Regdef.h"

//transmit data register
#define	SPI3_I2S_TXREG		(*(MM32_SPI3_I2S_TXREG*)(0x40003C00+0x00))

//receive data register
#define	SPI3_I2S_RXREG		(*(MM32_SPI3_I2S_RXREG*)(0x40003C00+0x04))

//current status register
#define	SPI3_I2S_CSTAT		(*(MM32_SPI3_I2S_CSTAT*)(0x40003C00+0x08))

//Interrupt Status Register
#define	SPI3_I2S_INTSTAT		(*(MM32_SPI3_I2S_INTSTAT*)(0x40003C00+0x0C))

//Interrupt Enable Register
#define	SPI3_I2S_INTEN		(*(MM32_SPI3_I2S_INTEN*)(0x40003C00+0x10))

//interrupt clear register
#define	SPI3_I2S_INTCLR		(*(MM32_SPI3_I2S_INTCLR*)(0x40003C00+0x14))

//global control register
#define	SPI3_I2S_GCTL		(*(MM32_SPI3_I2S_GCTL*)(0x40003C00+0x18))

//General Control Register
#define	SPI3_I2S_CCTL		(*(MM32_SPI3_I2S_CCTL*)(0x40003C00+0x1C))

//baud rate generator
#define	SPI3_I2S_SPBRG		(*(MM32_SPI3_I2S_SPBRG*)(0x40003C00+0x20))

//Receive data count register
#define	SPI3_I2S_RXDNR		(*(MM32_SPI3_I2S_RXDNR*)(0x40003C00+0x24))

//Slave Chip Select Register
#define	SPI3_I2S_NSSR		(*(MM32_SPI3_I2S_NSSR*)(0x40003C00+0x28))

//data control register
#define	SPI3_I2S_EXTCTL		(*(MM32_SPI3_I2S_EXTCTL*)(0x40003C00+0x2C))

//I2S configuration register
#define	SPI3_I2S_I2SCFGR		(*(MM32_SPI3_I2S_I2SCFGR*)(0x40003C00+0x30))


#endif

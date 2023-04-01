#ifndef _MM32_QSPIREG_H_
#define _MM32_QSPIREG_H_

#include "MM32_QSPIRegdef.h"

//control register
#define	QSPI_CR		(*(MM32_QSPI_CR*)(0xA0001000+0x00))

//status register
#define	QSPI_SR		(*(MM32_QSPI_SR*)(0xA0001000+0x04))

//Interrupt DMA Enable Register
#define	QSPI_IDER		(*(MM32_QSPI_IDER*)(0xA0001000+0x28))

//Direct Mode Control Register
#define	QSPI_DMCR		(*(MM32_QSPI_DMCR*)(0xA0001000+0x08))

//Direct Mode Interactive Byte Register
#define	QSPI_DABR		(*(MM32_QSPI_DABR*)(0xA0001000+0x10))

//Indirect Mode Control Register
#define	QSPI_IMCR		(*(MM32_QSPI_IMCR*)(0xA0001000+0x0C))

//Indirect Mode Interactive Byte Register
#define	QSPI_IABR		(*(MM32_QSPI_IABR*)(0xA0001000+0x14))

//Indirect Mode Address Register
#define	QSPI_IADR		(*(MM32_QSPI_IADR*)(0xA0001000+0x18))

//Indirect Mode Data FIFO Register
#define	QSPI_IDFR		(*(MM32_QSPI_IDFR*)(0xA0001000+0x1C))

//Indirect Mode Data Length Register
#define	QSPI_IDLR		(*(MM32_QSPI_IDLR*)(0xA0001000+0x20))

//Indirect Mode Wait Count Register
#define	QSPI_IWCR		(*(MM32_QSPI_IWCR*)(0xA0001000+0x24))


#endif

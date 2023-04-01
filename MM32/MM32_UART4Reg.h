#ifndef _MM32_UART4REG_H_
#define _MM32_UART4REG_H_

#include "MM32_UART4Regdef.h"

//UART transmit data register
#define	UART4_TDR		(*(MM32_UART4_TDR*)(0x40004C00+0x00))

//UART receive data register
#define	UART4_RDR		(*(MM32_UART4_RDR*)(0x40004C00+0x04))

//UART current status register
#define	UART4_CSR		(*(MM32_UART4_CSR*)(0x40004C00+0x08))

//UART Interrupt Status Register
#define	UART4_ISR		(*(MM32_UART4_ISR*)(0x40004C00+0x0C))

//UART Interrupt Enable Register
#define	UART4_IER		(*(MM32_UART4_IER*)(0x40004C00+0x10))

//UART Interrupt Clear Register
#define	UART4_ICR		(*(MM32_UART4_ICR*)(0x40004C00+0x14))

//UART Global Control Register
#define	UART4_GCR		(*(MM32_UART4_GCR*)(0x40004C00+0x18))

//UART General Control Register
#define	UART4_CCR		(*(MM32_UART4_CCR*)(0x40004C00+0x1C))

//UART Baud Rate Register
#define	UART4_BRR		(*(MM32_UART4_BRR*)(0x40004C00+0x20))

//UART Fractional Baud Rate Register
#define	UART4_FRA		(*(MM32_UART4_FRA*)(0x40004C00+0x24))

//UART receive address register
#define	UART4_RXADDR		(*(MM32_UART4_RXADDR*)(0x40004C00+0x28))

//UART Receive Mask Register
#define	UART4_RXMASK		(*(MM32_UART4_RXMASK*)(0x40004C00+0x2C))

//UART SCR register
#define	UART4_SCR		(*(MM32_UART4_SCR*)(0x40004C00+0x30))

//UART IDLE Data Length Register
#define	UART4_IDLR		(*(MM32_UART4_IDLR*)(0x40004C00+0x34))

//UART ABRCR Auto-Baud Rate Control Register
#define	UART4_ABRCR		(*(MM32_UART4_ABRCR*)(0x40004C00+0x38))

//UART IRDA infrared function control register
#define	UART4_IRDA		(*(MM32_UART4_IRDA*)(0x40004C00+0x3C))


#endif

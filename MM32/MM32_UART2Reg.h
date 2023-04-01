#ifndef _MM32_UART2REG_H_
#define _MM32_UART2REG_H_

#include "MM32_UART2Regdef.h"

//UART transmit data register
#define	UART2_TDR		(*(MM32_UART2_TDR*)(0x40004400+0x00))

//UART receive data register
#define	UART2_RDR		(*(MM32_UART2_RDR*)(0x40004400+0x04))

//UART current status register
#define	UART2_CSR		(*(MM32_UART2_CSR*)(0x40004400+0x08))

//UART Interrupt Status Register
#define	UART2_ISR		(*(MM32_UART2_ISR*)(0x40004400+0x0C))

//UART Interrupt Enable Register
#define	UART2_IER		(*(MM32_UART2_IER*)(0x40004400+0x10))

//UART Interrupt Clear Register
#define	UART2_ICR		(*(MM32_UART2_ICR*)(0x40004400+0x14))

//UART Global Control Register
#define	UART2_GCR		(*(MM32_UART2_GCR*)(0x40004400+0x18))

//UART General Control Register
#define	UART2_CCR		(*(MM32_UART2_CCR*)(0x40004400+0x1C))

//UART Baud Rate Register
#define	UART2_BRR		(*(MM32_UART2_BRR*)(0x40004400+0x20))

//UART Fractional Baud Rate Register
#define	UART2_FRA		(*(MM32_UART2_FRA*)(0x40004400+0x24))

//UART receive address register
#define	UART2_RXADDR		(*(MM32_UART2_RXADDR*)(0x40004400+0x28))

//UART Receive Mask Register
#define	UART2_RXMASK		(*(MM32_UART2_RXMASK*)(0x40004400+0x2C))

//UART SCR register
#define	UART2_SCR		(*(MM32_UART2_SCR*)(0x40004400+0x30))

//UART IDLE Data Length Register
#define	UART2_IDLR		(*(MM32_UART2_IDLR*)(0x40004400+0x34))

//UART ABRCR Auto-Baud Rate Control Register
#define	UART2_ABRCR		(*(MM32_UART2_ABRCR*)(0x40004400+0x38))

//UART IRDA infrared function control register
#define	UART2_IRDA		(*(MM32_UART2_IRDA*)(0x40004400+0x3C))


#endif

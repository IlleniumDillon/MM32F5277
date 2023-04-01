#ifndef _MM32_UART7REG_H_
#define _MM32_UART7REG_H_

#include "MM32_UART7Regdef.h"

//UART transmit data register
#define	UART7_TDR		(*(MM32_UART7_TDR*)(0x40007800+0x00))

//UART receive data register
#define	UART7_RDR		(*(MM32_UART7_RDR*)(0x40007800+0x04))

//UART current status register
#define	UART7_CSR		(*(MM32_UART7_CSR*)(0x40007800+0x08))

//UART Interrupt Status Register
#define	UART7_ISR		(*(MM32_UART7_ISR*)(0x40007800+0x0C))

//UART Interrupt Enable Register
#define	UART7_IER		(*(MM32_UART7_IER*)(0x40007800+0x10))

//UART Interrupt Clear Register
#define	UART7_ICR		(*(MM32_UART7_ICR*)(0x40007800+0x14))

//UART Global Control Register
#define	UART7_GCR		(*(MM32_UART7_GCR*)(0x40007800+0x18))

//UART General Control Register
#define	UART7_CCR		(*(MM32_UART7_CCR*)(0x40007800+0x1C))

//UART Baud Rate Register
#define	UART7_BRR		(*(MM32_UART7_BRR*)(0x40007800+0x20))

//UART Fractional Baud Rate Register
#define	UART7_FRA		(*(MM32_UART7_FRA*)(0x40007800+0x24))

//UART receive address register
#define	UART7_RXADDR		(*(MM32_UART7_RXADDR*)(0x40007800+0x28))

//UART Receive Mask Register
#define	UART7_RXMASK		(*(MM32_UART7_RXMASK*)(0x40007800+0x2C))

//UART SCR register
#define	UART7_SCR		(*(MM32_UART7_SCR*)(0x40007800+0x30))

//UART IDLE Data Length Register
#define	UART7_IDLR		(*(MM32_UART7_IDLR*)(0x40007800+0x34))

//UART ABRCR Auto-Baud Rate Control Register
#define	UART7_ABRCR		(*(MM32_UART7_ABRCR*)(0x40007800+0x38))

//UART IRDA infrared function control register
#define	UART7_IRDA		(*(MM32_UART7_IRDA*)(0x40007800+0x3C))


#endif

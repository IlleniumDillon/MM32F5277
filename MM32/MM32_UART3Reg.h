#ifndef _MM32_UART3REG_H_
#define _MM32_UART3REG_H_

#include "MM32_UART3Regdef.h"

//UART transmit data register
#define	UART3_TDR		(*(MM32_UART3_TDR*)(0x40004800+0x00))

//UART receive data register
#define	UART3_RDR		(*(MM32_UART3_RDR*)(0x40004800+0x04))

//UART current status register
#define	UART3_CSR		(*(MM32_UART3_CSR*)(0x40004800+0x08))

//UART Interrupt Status Register
#define	UART3_ISR		(*(MM32_UART3_ISR*)(0x40004800+0x0C))

//UART Interrupt Enable Register
#define	UART3_IER		(*(MM32_UART3_IER*)(0x40004800+0x10))

//UART Interrupt Clear Register
#define	UART3_ICR		(*(MM32_UART3_ICR*)(0x40004800+0x14))

//UART Global Control Register
#define	UART3_GCR		(*(MM32_UART3_GCR*)(0x40004800+0x18))

//UART General Control Register
#define	UART3_CCR		(*(MM32_UART3_CCR*)(0x40004800+0x1C))

//UART Baud Rate Register
#define	UART3_BRR		(*(MM32_UART3_BRR*)(0x40004800+0x20))

//UART Fractional Baud Rate Register
#define	UART3_FRA		(*(MM32_UART3_FRA*)(0x40004800+0x24))

//UART receive address register
#define	UART3_RXADDR		(*(MM32_UART3_RXADDR*)(0x40004800+0x28))

//UART Receive Mask Register
#define	UART3_RXMASK		(*(MM32_UART3_RXMASK*)(0x40004800+0x2C))

//UART SCR register
#define	UART3_SCR		(*(MM32_UART3_SCR*)(0x40004800+0x30))

//UART IDLE Data Length Register
#define	UART3_IDLR		(*(MM32_UART3_IDLR*)(0x40004800+0x34))

//UART ABRCR Auto-Baud Rate Control Register
#define	UART3_ABRCR		(*(MM32_UART3_ABRCR*)(0x40004800+0x38))

//UART IRDA infrared function control register
#define	UART3_IRDA		(*(MM32_UART3_IRDA*)(0x40004800+0x3C))


#endif

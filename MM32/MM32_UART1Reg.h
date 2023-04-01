#ifndef _MM32_UART1REG_H_
#define _MM32_UART1REG_H_

#include "MM32_UART1Regdef.h"

//UART transmit data register
#define	UART1_TDR		(*(MM32_UART1_TDR*)(0x40013800+0x00))

//UART receive data register
#define	UART1_RDR		(*(MM32_UART1_RDR*)(0x40013800+0x04))

//UART current status register
#define	UART1_CSR		(*(MM32_UART1_CSR*)(0x40013800+0x08))

//UART Interrupt Status Register
#define	UART1_ISR		(*(MM32_UART1_ISR*)(0x40013800+0x0C))

//UART Interrupt Enable Register
#define	UART1_IER		(*(MM32_UART1_IER*)(0x40013800+0x10))

//UART Interrupt Clear Register
#define	UART1_ICR		(*(MM32_UART1_ICR*)(0x40013800+0x14))

//UART Global Control Register
#define	UART1_GCR		(*(MM32_UART1_GCR*)(0x40013800+0x18))

//UART General Control Register
#define	UART1_CCR		(*(MM32_UART1_CCR*)(0x40013800+0x1C))

//UART Baud Rate Register
#define	UART1_BRR		(*(MM32_UART1_BRR*)(0x40013800+0x20))

//UART Fractional Baud Rate Register
#define	UART1_FRA		(*(MM32_UART1_FRA*)(0x40013800+0x24))

//UART receive address register
#define	UART1_RXADDR		(*(MM32_UART1_RXADDR*)(0x40013800+0x28))

//UART Receive Mask Register
#define	UART1_RXMASK		(*(MM32_UART1_RXMASK*)(0x40013800+0x2C))

//UART SCR register
#define	UART1_SCR		(*(MM32_UART1_SCR*)(0x40013800+0x30))

//UART IDLE Data Length Register
#define	UART1_IDLR		(*(MM32_UART1_IDLR*)(0x40013800+0x34))

//UART ABRCR Auto-Baud Rate Control Register
#define	UART1_ABRCR		(*(MM32_UART1_ABRCR*)(0x40013800+0x38))

//UART IRDA infrared function control register
#define	UART1_IRDA		(*(MM32_UART1_IRDA*)(0x40013800+0x3C))


#endif

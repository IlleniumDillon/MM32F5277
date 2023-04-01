#ifndef _MM32_UART6REG_H_
#define _MM32_UART6REG_H_

#include "MM32_UART6Regdef.h"

//UART transmit data register
#define	UART6_TDR		(*(MM32_UART6_TDR*)(0x40013C00+0x00))

//UART receive data register
#define	UART6_RDR		(*(MM32_UART6_RDR*)(0x40013C00+0x04))

//UART current status register
#define	UART6_CSR		(*(MM32_UART6_CSR*)(0x40013C00+0x08))

//UART Interrupt Status Register
#define	UART6_ISR		(*(MM32_UART6_ISR*)(0x40013C00+0x0C))

//UART Interrupt Enable Register
#define	UART6_IER		(*(MM32_UART6_IER*)(0x40013C00+0x10))

//UART Interrupt Clear Register
#define	UART6_ICR		(*(MM32_UART6_ICR*)(0x40013C00+0x14))

//UART Global Control Register
#define	UART6_GCR		(*(MM32_UART6_GCR*)(0x40013C00+0x18))

//UART General Control Register
#define	UART6_CCR		(*(MM32_UART6_CCR*)(0x40013C00+0x1C))

//UART Baud Rate Register
#define	UART6_BRR		(*(MM32_UART6_BRR*)(0x40013C00+0x20))

//UART Fractional Baud Rate Register
#define	UART6_FRA		(*(MM32_UART6_FRA*)(0x40013C00+0x24))

//UART receive address register
#define	UART6_RXADDR		(*(MM32_UART6_RXADDR*)(0x40013C00+0x28))

//UART Receive Mask Register
#define	UART6_RXMASK		(*(MM32_UART6_RXMASK*)(0x40013C00+0x2C))

//UART SCR register
#define	UART6_SCR		(*(MM32_UART6_SCR*)(0x40013C00+0x30))

//UART IDLE Data Length Register
#define	UART6_IDLR		(*(MM32_UART6_IDLR*)(0x40013C00+0x34))

//UART ABRCR Auto-Baud Rate Control Register
#define	UART6_ABRCR		(*(MM32_UART6_ABRCR*)(0x40013C00+0x38))

//UART IRDA infrared function control register
#define	UART6_IRDA		(*(MM32_UART6_IRDA*)(0x40013C00+0x3C))


#endif

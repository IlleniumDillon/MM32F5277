#ifndef _MM32_UART5REG_H_
#define _MM32_UART5REG_H_

#include "MM32_UART5Regdef.h"

//UART transmit data register
#define	UART5_TDR		(*(MM32_UART5_TDR*)(0x40005000+0x00))

//UART receive data register
#define	UART5_RDR		(*(MM32_UART5_RDR*)(0x40005000+0x04))

//UART current status register
#define	UART5_CSR		(*(MM32_UART5_CSR*)(0x40005000+0x08))

//UART Interrupt Status Register
#define	UART5_ISR		(*(MM32_UART5_ISR*)(0x40005000+0x0C))

//UART Interrupt Enable Register
#define	UART5_IER		(*(MM32_UART5_IER*)(0x40005000+0x10))

//UART Interrupt Clear Register
#define	UART5_ICR		(*(MM32_UART5_ICR*)(0x40005000+0x14))

//UART Global Control Register
#define	UART5_GCR		(*(MM32_UART5_GCR*)(0x40005000+0x18))

//UART General Control Register
#define	UART5_CCR		(*(MM32_UART5_CCR*)(0x40005000+0x1C))

//UART Baud Rate Register
#define	UART5_BRR		(*(MM32_UART5_BRR*)(0x40005000+0x20))

//UART Fractional Baud Rate Register
#define	UART5_FRA		(*(MM32_UART5_FRA*)(0x40005000+0x24))

//UART receive address register
#define	UART5_RXADDR		(*(MM32_UART5_RXADDR*)(0x40005000+0x28))

//UART Receive Mask Register
#define	UART5_RXMASK		(*(MM32_UART5_RXMASK*)(0x40005000+0x2C))

//UART SCR register
#define	UART5_SCR		(*(MM32_UART5_SCR*)(0x40005000+0x30))

//UART IDLE Data Length Register
#define	UART5_IDLR		(*(MM32_UART5_IDLR*)(0x40005000+0x34))

//UART ABRCR Auto-Baud Rate Control Register
#define	UART5_ABRCR		(*(MM32_UART5_ABRCR*)(0x40005000+0x38))

//UART IRDA infrared function control register
#define	UART5_IRDA		(*(MM32_UART5_IRDA*)(0x40005000+0x3C))


#endif

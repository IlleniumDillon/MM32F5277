#ifndef _MM32_SYSCFGREG_H_
#define _MM32_SYSCFGREG_H_

#include "MM32_SYSCFGRegdef.h"

//SYSCFG Configuration Register
#define	SYSCFG_CFGR1		(*(MM32_SYSCFG_CFGR1*)(0x40010000+0x00))

//External Interrupt Configuration Register 1
#define	SYSCFG_EXTICR1		(*(MM32_SYSCFG_EXTICR1*)(0x40010000+0x08))

//External Interrupt Configuration Register 2
#define	SYSCFG_EXTICR2		(*(MM32_SYSCFG_EXTICR2*)(0x40010000+0x0C))

//External Interrupt Configuration Register 3
#define	SYSCFG_EXTICR3		(*(MM32_SYSCFG_EXTICR3*)(0x40010000+0x10))

//External Interrupt Configuration Register 4
#define	SYSCFG_EXTICR4		(*(MM32_SYSCFG_EXTICR4*)(0x40010000+0x14))

//SYSCFG Configuration Register 2
#define	SYSCFG_CFGR2		(*(MM32_SYSCFG_CFGR2*)(0x40010000+0x18))

//Power Detect Configuration Status Register
#define	SYSCFG_PDETCSR		(*(MM32_SYSCFG_PDETCSR*)(0x40010000+0x1C))

//VOSDLY configuration register
#define	SYSCFG_VOSDLY		(*(MM32_SYSCFG_VOSDLY*)(0x40010000+0x20))

//DAM remap register
#define	SYSCFG_DMARMP		(*(MM32_SYSCFG_DMARMP*)(0x40010000+0x24))

//Bus Priority Configuration Register
#define	SYSCFG_BUS_PRI		(*(MM32_SYSCFG_BUS_PRI*)(0x40010000+0x28))


#endif

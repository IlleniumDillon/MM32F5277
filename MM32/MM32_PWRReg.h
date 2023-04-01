#ifndef _MM32_PWRREG_H_
#define _MM32_PWRREG_H_

#include "MM32_PWRRegdef.h"

//Power Control Register 1
#define	PWR_CR1		(*(MM32_PWR_CR1*)(0x40007000+0x00))

//Power Control Status Register
#define	PWR_CSR		(*(MM32_PWR_CSR*)(0x40007000+0x04))

//Power Control Register 2
#define	PWR_CR2		(*(MM32_PWR_CR2*)(0x40007000+0x08))

//Power Control Register 3
#define	PWR_CR3		(*(MM32_PWR_CR3*)(0x40007000+0x0C))

//Power Control Register 4
#define	PWR_CR4		(*(MM32_PWR_CR4*)(0x40007000+0x10))

//Power Control Register 5
#define	PWR_CR5		(*(MM32_PWR_CR5*)(0x40007000+0x14))

//Power Control Register 6
#define	PWR_CR6		(*(MM32_PWR_CR6*)(0x40007000+0x18))

//Power Status Register
#define	PWR_SR		(*(MM32_PWR_SR*)(0x40007000+0x1C))

//Power Status Clear Register
#define	PWR_SCR		(*(MM32_PWR_SCR*)(0x40007000+0x20))

//Power Configuration Register
#define	PWR_CFGR		(*(MM32_PWR_CFGR*)(0x40007000+0x24))


#endif

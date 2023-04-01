#ifndef _MM32_GPIOBREG_H_
#define _MM32_GPIOBREG_H_

#include "MM32_GPIOBRegdef.h"

//Port Configuration Low Register
#define	GPIOB_CRL		(*(MM32_GPIOB_CRL*)(0x40040400+0x00))

//Port Configuration High Register
#define	GPIOB_CRH		(*(MM32_GPIOB_CRH*)(0x40040400+0x04))

//Port Input Data Register
#define	GPIOB_IDR		(*(MM32_GPIOB_IDR*)(0x40040400+0x08))

//PORT OUTPUT DATA REGISTER
#define	GPIOB_ODR		(*(MM32_GPIOB_ODR*)(0x40040400+0x0C))

//Port Set/Clear Register
#define	GPIOB_BSRR		(*(MM32_GPIOB_BSRR*)(0x40040400+0x10))

//Port Bit Clear Register
#define	GPIOB_BRR		(*(MM32_GPIOB_BRR*)(0x40040400+0x14))

//Port Configuration Lock Register
#define	GPIOB_LCKR		(*(MM32_GPIOB_LCKR*)(0x40040400+0x18))

//PORT OUTPUT OPEN DRAIN CONTROL REGISTER
#define	GPIOB_DCR		(*(MM32_GPIOB_DCR*)(0x40040400+0x1C))

//Port alternate function low-order register
#define	GPIOB_AFRL		(*(MM32_GPIOB_AFRL*)(0x40040400+0x20))

//Port alternate function high-order register
#define	GPIOB_AFRH		(*(MM32_GPIOB_AFRH*)(0x40040400+0x24))


#endif

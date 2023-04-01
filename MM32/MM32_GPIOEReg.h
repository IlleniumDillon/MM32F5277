#ifndef _MM32_GPIOEREG_H_
#define _MM32_GPIOEREG_H_

#include "MM32_GPIOERegdef.h"

//Port Configuration Low Register
#define	GPIOE_CRL		(*(MM32_GPIOE_CRL*)(0x40041000+0x00))

//Port Configuration High Register
#define	GPIOE_CRH		(*(MM32_GPIOE_CRH*)(0x40041000+0x04))

//Port Input Data Register
#define	GPIOE_IDR		(*(MM32_GPIOE_IDR*)(0x40041000+0x08))

//PORT OUTPUT DATA REGISTER
#define	GPIOE_ODR		(*(MM32_GPIOE_ODR*)(0x40041000+0x0C))

//Port Set/Clear Register
#define	GPIOE_BSRR		(*(MM32_GPIOE_BSRR*)(0x40041000+0x10))

//Port Bit Clear Register
#define	GPIOE_BRR		(*(MM32_GPIOE_BRR*)(0x40041000+0x14))

//Port Configuration Lock Register
#define	GPIOE_LCKR		(*(MM32_GPIOE_LCKR*)(0x40041000+0x18))

//PORT OUTPUT OPEN DRAIN CONTROL REGISTER
#define	GPIOE_DCR		(*(MM32_GPIOE_DCR*)(0x40041000+0x1C))

//Port alternate function low-order register
#define	GPIOE_AFRL		(*(MM32_GPIOE_AFRL*)(0x40041000+0x20))

//Port alternate function high-order register
#define	GPIOE_AFRH		(*(MM32_GPIOE_AFRH*)(0x40041000+0x24))


#endif

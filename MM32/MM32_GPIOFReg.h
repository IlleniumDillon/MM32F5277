#ifndef _MM32_GPIOFREG_H_
#define _MM32_GPIOFREG_H_

#include "MM32_GPIOFRegdef.h"

//Port Configuration Low Register
#define	GPIOF_CRL		(*(MM32_GPIOF_CRL*)(0x40041400+0x00))

//Port Configuration High Register
#define	GPIOF_CRH		(*(MM32_GPIOF_CRH*)(0x40041400+0x04))

//Port Input Data Register
#define	GPIOF_IDR		(*(MM32_GPIOF_IDR*)(0x40041400+0x08))

//PORT OUTPUT DATA REGISTER
#define	GPIOF_ODR		(*(MM32_GPIOF_ODR*)(0x40041400+0x0C))

//Port Set/Clear Register
#define	GPIOF_BSRR		(*(MM32_GPIOF_BSRR*)(0x40041400+0x10))

//Port Bit Clear Register
#define	GPIOF_BRR		(*(MM32_GPIOF_BRR*)(0x40041400+0x14))

//Port Configuration Lock Register
#define	GPIOF_LCKR		(*(MM32_GPIOF_LCKR*)(0x40041400+0x18))

//PORT OUTPUT OPEN DRAIN CONTROL REGISTER
#define	GPIOF_DCR		(*(MM32_GPIOF_DCR*)(0x40041400+0x1C))

//Port alternate function low-order register
#define	GPIOF_AFRL		(*(MM32_GPIOF_AFRL*)(0x40041400+0x20))

//Port alternate function high-order register
#define	GPIOF_AFRH		(*(MM32_GPIOF_AFRH*)(0x40041400+0x24))


#endif

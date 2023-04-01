#ifndef _MM32_GPIOHREG_H_
#define _MM32_GPIOHREG_H_

#include "MM32_GPIOHRegdef.h"

//Port Configuration Low Register
#define	GPIOH_CRL		(*(MM32_GPIOH_CRL*)(0x40041C00+0x00))

//Port Configuration High Register
#define	GPIOH_CRH		(*(MM32_GPIOH_CRH*)(0x40041C00+0x04))

//Port Input Data Register
#define	GPIOH_IDR		(*(MM32_GPIOH_IDR*)(0x40041C00+0x08))

//PORT OUTPUT DATA REGISTER
#define	GPIOH_ODR		(*(MM32_GPIOH_ODR*)(0x40041C00+0x0C))

//Port Set/Clear Register
#define	GPIOH_BSRR		(*(MM32_GPIOH_BSRR*)(0x40041C00+0x10))

//Port Bit Clear Register
#define	GPIOH_BRR		(*(MM32_GPIOH_BRR*)(0x40041C00+0x14))

//Port Configuration Lock Register
#define	GPIOH_LCKR		(*(MM32_GPIOH_LCKR*)(0x40041C00+0x18))

//PORT OUTPUT OPEN DRAIN CONTROL REGISTER
#define	GPIOH_DCR		(*(MM32_GPIOH_DCR*)(0x40041C00+0x1C))

//Port alternate function low-order register
#define	GPIOH_AFRL		(*(MM32_GPIOH_AFRL*)(0x40041C00+0x20))

//Port alternate function high-order register
#define	GPIOH_AFRH		(*(MM32_GPIOH_AFRH*)(0x40041C00+0x24))


#endif

#ifndef _MM32_GPIOIREG_H_
#define _MM32_GPIOIREG_H_

#include "MM32_GPIOIRegdef.h"

//Port Configuration Low Register
#define	GPIOI_CRL		(*(MM32_GPIOI_CRL*)(0x40042000+0x00))

//Port Configuration High Register
#define	GPIOI_CRH		(*(MM32_GPIOI_CRH*)(0x40042000+0x04))

//Port Input Data Register
#define	GPIOI_IDR		(*(MM32_GPIOI_IDR*)(0x40042000+0x08))

//PORT OUTPUT DATA REGISTER
#define	GPIOI_ODR		(*(MM32_GPIOI_ODR*)(0x40042000+0x0C))

//Port Set/Clear Register
#define	GPIOI_BSRR		(*(MM32_GPIOI_BSRR*)(0x40042000+0x10))

//Port Bit Clear Register
#define	GPIOI_BRR		(*(MM32_GPIOI_BRR*)(0x40042000+0x14))

//Port Configuration Lock Register
#define	GPIOI_LCKR		(*(MM32_GPIOI_LCKR*)(0x40042000+0x18))

//PORT OUTPUT OPEN DRAIN CONTROL REGISTER
#define	GPIOI_DCR		(*(MM32_GPIOI_DCR*)(0x40042000+0x1C))

//Port alternate function low-order register
#define	GPIOI_AFRL		(*(MM32_GPIOI_AFRL*)(0x40042000+0x20))

//Port alternate function high-order register
#define	GPIOI_AFRH		(*(MM32_GPIOI_AFRH*)(0x40042000+0x24))


#endif

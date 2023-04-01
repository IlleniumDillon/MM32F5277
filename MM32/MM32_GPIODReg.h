#ifndef _MM32_GPIODREG_H_
#define _MM32_GPIODREG_H_

#include "MM32_GPIODRegdef.h"

//Port Configuration Low Register
#define	GPIOD_CRL		(*(MM32_GPIOD_CRL*)(0x40040C00+0x00))

//Port Configuration High Register
#define	GPIOD_CRH		(*(MM32_GPIOD_CRH*)(0x40040C00+0x04))

//Port Input Data Register
#define	GPIOD_IDR		(*(MM32_GPIOD_IDR*)(0x40040C00+0x08))

//PORT OUTPUT DATA REGISTER
#define	GPIOD_ODR		(*(MM32_GPIOD_ODR*)(0x40040C00+0x0C))

//Port Set/Clear Register
#define	GPIOD_BSRR		(*(MM32_GPIOD_BSRR*)(0x40040C00+0x10))

//Port Bit Clear Register
#define	GPIOD_BRR		(*(MM32_GPIOD_BRR*)(0x40040C00+0x14))

//Port Configuration Lock Register
#define	GPIOD_LCKR		(*(MM32_GPIOD_LCKR*)(0x40040C00+0x18))

//PORT OUTPUT OPEN DRAIN CONTROL REGISTER
#define	GPIOD_DCR		(*(MM32_GPIOD_DCR*)(0x40040C00+0x1C))

//Port alternate function low-order register
#define	GPIOD_AFRL		(*(MM32_GPIOD_AFRL*)(0x40040C00+0x20))

//Port alternate function high-order register
#define	GPIOD_AFRH		(*(MM32_GPIOD_AFRH*)(0x40040C00+0x24))


#endif

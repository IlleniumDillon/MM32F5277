#ifndef _MM32_GPIOCREG_H_
#define _MM32_GPIOCREG_H_

#include "MM32_GPIOCRegdef.h"

//Port Configuration Low Register
#define	GPIOC_CRL		(*(MM32_GPIOC_CRL*)(0x40040800+0x00))

//Port Configuration High Register
#define	GPIOC_CRH		(*(MM32_GPIOC_CRH*)(0x40040800+0x04))

//Port Input Data Register
#define	GPIOC_IDR		(*(MM32_GPIOC_IDR*)(0x40040800+0x08))

//PORT OUTPUT DATA REGISTER
#define	GPIOC_ODR		(*(MM32_GPIOC_ODR*)(0x40040800+0x0C))

//Port Set/Clear Register
#define	GPIOC_BSRR		(*(MM32_GPIOC_BSRR*)(0x40040800+0x10))

//Port Bit Clear Register
#define	GPIOC_BRR		(*(MM32_GPIOC_BRR*)(0x40040800+0x14))

//Port Configuration Lock Register
#define	GPIOC_LCKR		(*(MM32_GPIOC_LCKR*)(0x40040800+0x18))

//PORT OUTPUT OPEN DRAIN CONTROL REGISTER
#define	GPIOC_DCR		(*(MM32_GPIOC_DCR*)(0x40040800+0x1C))

//Port alternate function low-order register
#define	GPIOC_AFRL		(*(MM32_GPIOC_AFRL*)(0x40040800+0x20))

//Port alternate function high-order register
#define	GPIOC_AFRH		(*(MM32_GPIOC_AFRH*)(0x40040800+0x24))


#endif

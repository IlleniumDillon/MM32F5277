#ifndef _MM32_GPIOAREG_H_
#define _MM32_GPIOAREG_H_

#include "MM32_GPIOARegdef.h"

//Port Configuration Low Register
#define	GPIOA_CRL		(*(MM32_GPIOA_CRL*)(0x40040000+0x00))

//Port Configuration High Register
#define	GPIOA_CRH		(*(MM32_GPIOA_CRH*)(0x40040000+0x04))

//Port Input Data Register
#define	GPIOA_IDR		(*(MM32_GPIOA_IDR*)(0x40040000+0x08))

//PORT OUTPUT DATA REGISTER
#define	GPIOA_ODR		(*(MM32_GPIOA_ODR*)(0x40040000+0x0C))

//Port Set/Clear Register
#define	GPIOA_BSRR		(*(MM32_GPIOA_BSRR*)(0x40040000+0x10))

//Port Bit Clear Register
#define	GPIOA_BRR		(*(MM32_GPIOA_BRR*)(0x40040000+0x14))

//Port Configuration Lock Register
#define	GPIOA_LCKR		(*(MM32_GPIOA_LCKR*)(0x40040000+0x18))

//PORT OUTPUT OPEN DRAIN CONTROL REGISTER
#define	GPIOA_DCR		(*(MM32_GPIOA_DCR*)(0x40040000+0x1C))

//Port alternate function low-order register
#define	GPIOA_AFRL		(*(MM32_GPIOA_AFRL*)(0x40040000+0x20))

//Port alternate function high-order register
#define	GPIOA_AFRH		(*(MM32_GPIOA_AFRH*)(0x40040000+0x24))


#endif

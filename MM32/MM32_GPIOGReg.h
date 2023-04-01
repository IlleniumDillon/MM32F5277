#ifndef _MM32_GPIOGREG_H_
#define _MM32_GPIOGREG_H_

#include "MM32_GPIOGRegdef.h"

//Port Configuration Low Register
#define	GPIOG_CRL		(*(MM32_GPIOG_CRL*)(0x40041800+0x00))

//Port Configuration High Register
#define	GPIOG_CRH		(*(MM32_GPIOG_CRH*)(0x40041800+0x04))

//Port Input Data Register
#define	GPIOG_IDR		(*(MM32_GPIOG_IDR*)(0x40041800+0x08))

//PORT OUTPUT DATA REGISTER
#define	GPIOG_ODR		(*(MM32_GPIOG_ODR*)(0x40041800+0x0C))

//Port Set/Clear Register
#define	GPIOG_BSRR		(*(MM32_GPIOG_BSRR*)(0x40041800+0x10))

//Port Bit Clear Register
#define	GPIOG_BRR		(*(MM32_GPIOG_BRR*)(0x40041800+0x14))

//Port Configuration Lock Register
#define	GPIOG_LCKR		(*(MM32_GPIOG_LCKR*)(0x40041800+0x18))

//PORT OUTPUT OPEN DRAIN CONTROL REGISTER
#define	GPIOG_DCR		(*(MM32_GPIOG_DCR*)(0x40041800+0x1C))

//Port alternate function low-order register
#define	GPIOG_AFRL		(*(MM32_GPIOG_AFRL*)(0x40041800+0x20))

//Port alternate function high-order register
#define	GPIOG_AFRH		(*(MM32_GPIOG_AFRH*)(0x40041800+0x24))


#endif

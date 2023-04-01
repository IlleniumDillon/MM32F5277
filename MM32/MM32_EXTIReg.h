#ifndef _MM32_EXTIREG_H_
#define _MM32_EXTIREG_H_

#include "MM32_EXTIRegdef.h"

//interrupt mask register
#define	EXTI_IMR		(*(MM32_EXTI_IMR*)(0x40010400+0x00))

//event mask register
#define	EXTI_EMR		(*(MM32_EXTI_EMR*)(0x40010400+0x04))

//Rising edge trigger select register
#define	EXTI_RTSR		(*(MM32_EXTI_RTSR*)(0x40010400+0x08))

//Falling edge trigger select register
#define	EXTI_FTSR		(*(MM32_EXTI_FTSR*)(0x40010400+0x0C))

//Software Interrupt Event Register
#define	EXTI_SWIER		(*(MM32_EXTI_SWIER*)(0x40010400+0x10))

//pending register
#define	EXTI_PR		(*(MM32_EXTI_PR*)(0x40010400+0x14))


#endif

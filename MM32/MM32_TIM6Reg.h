#ifndef _MM32_TIM6REG_H_
#define _MM32_TIM6REG_H_

#include "MM32_TIM6Regdef.h"

//Control Register 1
#define	TIM6_CR1		(*(MM32_TIM6_CR1*)(0x40001000+0x00))

//DMA/Interrupt Enable Register
#define	TIM6_DIER		(*(MM32_TIM6_DIER*)(0x40001000+0x0C))

//status register
#define	TIM6_SR		(*(MM32_TIM6_SR*)(0x40001000+0x10))

//event generation register
#define	TIM6_EGR		(*(MM32_TIM6_EGR*)(0x40001000+0x14))

//counter
#define	TIM6_CNT		(*(MM32_TIM6_CNT*)(0x40001000+0x24))

//Prescaler
#define	TIM6_PSC		(*(MM32_TIM6_PSC*)(0x40001000+0x28))

//autoload register
#define	TIM6_ARR		(*(MM32_TIM6_ARR*)(0x40001000+0x2C))


#endif

#ifndef _MM32_TIM7REG_H_
#define _MM32_TIM7REG_H_

#include "MM32_TIM7Regdef.h"

//Control Register 1
#define	TIM7_CR1		(*(MM32_TIM7_CR1*)(0x40001400+0x00))

//DMA/Interrupt Enable Register
#define	TIM7_DIER		(*(MM32_TIM7_DIER*)(0x40001400+0x0C))

//status register
#define	TIM7_SR		(*(MM32_TIM7_SR*)(0x40001400+0x10))

//event generation register
#define	TIM7_EGR		(*(MM32_TIM7_EGR*)(0x40001400+0x14))

//counter
#define	TIM7_CNT		(*(MM32_TIM7_CNT*)(0x40001400+0x24))

//Prescaler
#define	TIM7_PSC		(*(MM32_TIM7_PSC*)(0x40001400+0x28))

//autoload register
#define	TIM7_ARR		(*(MM32_TIM7_ARR*)(0x40001400+0x2C))


#endif

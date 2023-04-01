#ifndef _MM32_TIM2REG_H_
#define _MM32_TIM2REG_H_

#include "MM32_TIM2Regdef.h"

//Control Register 1
#define	TIM2_CR1		(*(MM32_TIM2_CR1*)(0x40000000+0x00))

//Control Register 2
#define	TIM2_CR2		(*(MM32_TIM2_CR2*)(0x40000000+0x04))

//Slave Mode Control Register
#define	TIM2_SMCR		(*(MM32_TIM2_SMCR*)(0x40000000+0x08))

//DMA/Interrupt Enable Register
#define	TIM2_DIER		(*(MM32_TIM2_DIER*)(0x40000000+0x0C))

//status register
#define	TIM2_SR		(*(MM32_TIM2_SR*)(0x40000000+0x10))

//event generation register
#define	TIM2_EGR		(*(MM32_TIM2_EGR*)(0x40000000+0x14))

//Capture/Compare Mode Register 1
#define	TIM2_CCMR1_Output		(*(MM32_TIM2_CCMR1_Output*)(0x40000000+0x18))

//Capture/Compare Mode Register 1
#define	TIM2_CCMR1_Input		(*(MM32_TIM2_CCMR1_Input*)(0x40000000+0x18))

//Capture/Compare Mode Register 2
#define	TIM2_CCMR2_Output		(*(MM32_TIM2_CCMR2_Output*)(0x40000000+0x1C))

//Capture/Compare Mode Register 2
#define	TIM2_CCMR2_Input		(*(MM32_TIM2_CCMR2_Input*)(0x40000000+0x1C))

//Capture/Compare Enable Register
#define	TIM2_CCER		(*(MM32_TIM2_CCER*)(0x40000000+0x20))

//counter
#define	TIM2_CNT		(*(MM32_TIM2_CNT*)(0x40000000+0x24))

//Prescaler
#define	TIM2_PSC		(*(MM32_TIM2_PSC*)(0x40000000+0x28))

//autoload register
#define	TIM2_ARR		(*(MM32_TIM2_ARR*)(0x40000000+0x2C))

//Capture/Compare Register 1
#define	TIM2_CCR1		(*(MM32_TIM2_CCR1*)(0x40000000+0x34))

//Capture/Compare Register 1
#define	TIM2_CCR2		(*(MM32_TIM2_CCR2*)(0x40000000+0x38))

//Capture/Compare Register 1
#define	TIM2_CCR3		(*(MM32_TIM2_CCR3*)(0x40000000+0x3C))

//Capture/Compare Register 1
#define	TIM2_CCR4		(*(MM32_TIM2_CCR4*)(0x40000000+0x40))

//DMA Control Register
#define	TIM2_DCR		(*(MM32_TIM2_DCR*)(0x40000000+0x48))

//DMA address for continuous mode
#define	TIM2_DMAR		(*(MM32_TIM2_DMAR*)(0x40000000+0x4C))

//TIMERx option register
#define	TIM2_OR		(*(MM32_TIM2_OR*)(0x40000000+0x50))


#endif

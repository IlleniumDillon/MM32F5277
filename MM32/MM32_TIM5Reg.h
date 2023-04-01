#ifndef _MM32_TIM5REG_H_
#define _MM32_TIM5REG_H_

#include "MM32_TIM5Regdef.h"

//Control Register 1
#define	TIM5_CR1		(*(MM32_TIM5_CR1*)(0x40000C00+0x00))

//Control Register 2
#define	TIM5_CR2		(*(MM32_TIM5_CR2*)(0x40000C00+0x04))

//Slave Mode Control Register
#define	TIM5_SMCR		(*(MM32_TIM5_SMCR*)(0x40000C00+0x08))

//DMA/Interrupt Enable Register
#define	TIM5_DIER		(*(MM32_TIM5_DIER*)(0x40000C00+0x0C))

//status register
#define	TIM5_SR		(*(MM32_TIM5_SR*)(0x40000C00+0x10))

//event generation register
#define	TIM5_EGR		(*(MM32_TIM5_EGR*)(0x40000C00+0x14))

//Capture/Compare Mode Register 1
#define	TIM5_CCMR1_Output		(*(MM32_TIM5_CCMR1_Output*)(0x40000C00+0x18))

//Capture/Compare Mode Register 1
#define	TIM5_CCMR1_Input		(*(MM32_TIM5_CCMR1_Input*)(0x40000C00+0x18))

//Capture/Compare Mode Register 2
#define	TIM5_CCMR2_Output		(*(MM32_TIM5_CCMR2_Output*)(0x40000C00+0x1C))

//Capture/Compare Mode Register 2
#define	TIM5_CCMR2_Input		(*(MM32_TIM5_CCMR2_Input*)(0x40000C00+0x1C))

//Capture/Compare Enable Register
#define	TIM5_CCER		(*(MM32_TIM5_CCER*)(0x40000C00+0x20))

//counter
#define	TIM5_CNT		(*(MM32_TIM5_CNT*)(0x40000C00+0x24))

//Prescaler
#define	TIM5_PSC		(*(MM32_TIM5_PSC*)(0x40000C00+0x28))

//autoload register
#define	TIM5_ARR		(*(MM32_TIM5_ARR*)(0x40000C00+0x2C))

//Capture/Compare Register 1
#define	TIM5_CCR1		(*(MM32_TIM5_CCR1*)(0x40000C00+0x34))

//Capture/Compare Register 1
#define	TIM5_CCR2		(*(MM32_TIM5_CCR2*)(0x40000C00+0x38))

//Capture/Compare Register 1
#define	TIM5_CCR3		(*(MM32_TIM5_CCR3*)(0x40000C00+0x3C))

//Capture/Compare Register 1
#define	TIM5_CCR4		(*(MM32_TIM5_CCR4*)(0x40000C00+0x40))

//DMA Control Register
#define	TIM5_DCR		(*(MM32_TIM5_DCR*)(0x40000C00+0x48))

//DMA address for continuous mode
#define	TIM5_DMAR		(*(MM32_TIM5_DMAR*)(0x40000C00+0x4C))

//TIMERx option register
#define	TIM5_OR		(*(MM32_TIM5_OR*)(0x40000C00+0x50))


#endif

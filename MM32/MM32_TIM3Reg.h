#ifndef _MM32_TIM3REG_H_
#define _MM32_TIM3REG_H_

#include "MM32_TIM3Regdef.h"

//Control Register 1
#define	TIM3_CR1		(*(MM32_TIM3_CR1*)(0x40000400+0x00))

//Control Register 2
#define	TIM3_CR2		(*(MM32_TIM3_CR2*)(0x40000400+0x04))

//Slave Mode Control Register
#define	TIM3_SMCR		(*(MM32_TIM3_SMCR*)(0x40000400+0x08))

//DMA/Interrupt Enable Register
#define	TIM3_DIER		(*(MM32_TIM3_DIER*)(0x40000400+0x0C))

//status register
#define	TIM3_SR		(*(MM32_TIM3_SR*)(0x40000400+0x10))

//event generation register
#define	TIM3_EGR		(*(MM32_TIM3_EGR*)(0x40000400+0x14))

//Capture/Compare Mode Register 1
#define	TIM3_CCMR1_Output		(*(MM32_TIM3_CCMR1_Output*)(0x40000400+0x18))

//Capture/Compare Mode Register 1
#define	TIM3_CCMR1_Input		(*(MM32_TIM3_CCMR1_Input*)(0x40000400+0x18))

//Capture/Compare Mode Register 2
#define	TIM3_CCMR2_Output		(*(MM32_TIM3_CCMR2_Output*)(0x40000400+0x1C))

//Capture/Compare Mode Register 2
#define	TIM3_CCMR2_Input		(*(MM32_TIM3_CCMR2_Input*)(0x40000400+0x1C))

//Capture/Compare Enable Register
#define	TIM3_CCER		(*(MM32_TIM3_CCER*)(0x40000400+0x20))

//counter
#define	TIM3_CNT		(*(MM32_TIM3_CNT*)(0x40000400+0x24))

//Prescaler
#define	TIM3_PSC		(*(MM32_TIM3_PSC*)(0x40000400+0x28))

//autoload register
#define	TIM3_ARR		(*(MM32_TIM3_ARR*)(0x40000400+0x2C))

//Capture/Compare Register 1
#define	TIM3_CCR1		(*(MM32_TIM3_CCR1*)(0x40000400+0x34))

//Capture/Compare Register 1
#define	TIM3_CCR2		(*(MM32_TIM3_CCR2*)(0x40000400+0x38))

//Capture/Compare Register 1
#define	TIM3_CCR3		(*(MM32_TIM3_CCR3*)(0x40000400+0x3C))

//Capture/Compare Register 1
#define	TIM3_CCR4		(*(MM32_TIM3_CCR4*)(0x40000400+0x40))

//DMA Control Register
#define	TIM3_DCR		(*(MM32_TIM3_DCR*)(0x40000400+0x48))

//DMA address for continuous mode
#define	TIM3_DMAR		(*(MM32_TIM3_DMAR*)(0x40000400+0x4C))


#endif

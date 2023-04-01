#ifndef _MM32_TIM4REG_H_
#define _MM32_TIM4REG_H_

#include "MM32_TIM4Regdef.h"

//Control Register 1
#define	TIM4_CR1		(*(MM32_TIM4_CR1*)(0x40000800+0x00))

//Control Register 2
#define	TIM4_CR2		(*(MM32_TIM4_CR2*)(0x40000800+0x04))

//Slave Mode Control Register
#define	TIM4_SMCR		(*(MM32_TIM4_SMCR*)(0x40000800+0x08))

//DMA/Interrupt Enable Register
#define	TIM4_DIER		(*(MM32_TIM4_DIER*)(0x40000800+0x0C))

//status register
#define	TIM4_SR		(*(MM32_TIM4_SR*)(0x40000800+0x10))

//event generation register
#define	TIM4_EGR		(*(MM32_TIM4_EGR*)(0x40000800+0x14))

//Capture/Compare Mode Register 1
#define	TIM4_CCMR1_Output		(*(MM32_TIM4_CCMR1_Output*)(0x40000800+0x18))

//Capture/Compare Mode Register 1
#define	TIM4_CCMR1_Input		(*(MM32_TIM4_CCMR1_Input*)(0x40000800+0x18))

//Capture/Compare Mode Register 2
#define	TIM4_CCMR2_Output		(*(MM32_TIM4_CCMR2_Output*)(0x40000800+0x1C))

//Capture/Compare Mode Register 2
#define	TIM4_CCMR2_Input		(*(MM32_TIM4_CCMR2_Input*)(0x40000800+0x1C))

//Capture/Compare Enable Register
#define	TIM4_CCER		(*(MM32_TIM4_CCER*)(0x40000800+0x20))

//counter
#define	TIM4_CNT		(*(MM32_TIM4_CNT*)(0x40000800+0x24))

//Prescaler
#define	TIM4_PSC		(*(MM32_TIM4_PSC*)(0x40000800+0x28))

//autoload register
#define	TIM4_ARR		(*(MM32_TIM4_ARR*)(0x40000800+0x2C))

//Capture/Compare Register 1
#define	TIM4_CCR1		(*(MM32_TIM4_CCR1*)(0x40000800+0x34))

//Capture/Compare Register 1
#define	TIM4_CCR2		(*(MM32_TIM4_CCR2*)(0x40000800+0x38))

//Capture/Compare Register 1
#define	TIM4_CCR3		(*(MM32_TIM4_CCR3*)(0x40000800+0x3C))

//Capture/Compare Register 1
#define	TIM4_CCR4		(*(MM32_TIM4_CCR4*)(0x40000800+0x40))

//DMA Control Register
#define	TIM4_DCR		(*(MM32_TIM4_DCR*)(0x40000800+0x48))

//DMA address for continuous mode
#define	TIM4_DMAR		(*(MM32_TIM4_DMAR*)(0x40000800+0x4C))


#endif

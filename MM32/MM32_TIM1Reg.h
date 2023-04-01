#ifndef _MM32_TIM1REG_H_
#define _MM32_TIM1REG_H_

#include "MM32_TIM1Regdef.h"

//Control Register 1
#define	TIM1_CR1		(*(MM32_TIM1_CR1*)(0x40012C00+0x00))

//Control Register 2
#define	TIM1_CR2		(*(MM32_TIM1_CR2*)(0x40012C00+0x04))

//Slave Mode Control Register
#define	TIM1_SMCR		(*(MM32_TIM1_SMCR*)(0x40012C00+0x08))

//DMA/Interrupt Enable Register
#define	TIM1_DIER		(*(MM32_TIM1_DIER*)(0x40012C00+0x0C))

//status register
#define	TIM1_SR		(*(MM32_TIM1_SR*)(0x40012C00+0x10))

//event generation register
#define	TIM1_EGR		(*(MM32_TIM1_EGR*)(0x40012C00+0x14))

//Capture/Compare Mode Register 1
#define	TIM1_CCMR1_Output		(*(MM32_TIM1_CCMR1_Output*)(0x40012C00+0x18))

//Capture/Compare Mode Register 2
#define	TIM1_CCMR1_Input		(*(MM32_TIM1_CCMR1_Input*)(0x40012C00+0x18))

//Capture/Compare Mode Register 1
#define	TIM1_CCMR2_Output		(*(MM32_TIM1_CCMR2_Output*)(0x40012C00+0x1C))

//Capture/Compare Mode Register 2
#define	TIM1_CCMR2_Input		(*(MM32_TIM1_CCMR2_Input*)(0x40012C00+0x1C))

//Capture/Compare Enable Register
#define	TIM1_CCER		(*(MM32_TIM1_CCER*)(0x40012C00+0x20))

//counter
#define	TIM1_CNT		(*(MM32_TIM1_CNT*)(0x40012C00+0x24))

//Prescaler
#define	TIM1_PSC		(*(MM32_TIM1_PSC*)(0x40012C00+0x28))

//autoload register
#define	TIM1_ARR		(*(MM32_TIM1_ARR*)(0x40012C00+0x2C))

//Repeat count register
#define	TIM1_RCR		(*(MM32_TIM1_RCR*)(0x40012C00+0x30))

//Capture/Compare Register 1
#define	TIM1_CCR1		(*(MM32_TIM1_CCR1*)(0x40012C00+0x34))

//Capture/Compare Register 1
#define	TIM1_CCR2		(*(MM32_TIM1_CCR2*)(0x40012C00+0x38))

//Capture/Compare Register 1
#define	TIM1_CCR3		(*(MM32_TIM1_CCR3*)(0x40012C00+0x3C))

//Capture/Compare Register 1
#define	TIM1_CCR4		(*(MM32_TIM1_CCR4*)(0x40012C00+0x40))

//Brake and Deadband Registers
#define	TIM1_BDTR		(*(MM32_TIM1_BDTR*)(0x40012C00+0x44))

//DMA Control Register
#define	TIM1_DCR		(*(MM32_TIM1_DCR*)(0x40012C00+0x48))

//DMA address for continuous mode
#define	TIM1_DMAR		(*(MM32_TIM1_DMAR*)(0x40012C00+0x4C))

//Capture/Compare Mode Register 3
#define	TIM1_CCMR3		(*(MM32_TIM1_CCMR3*)(0x40012C00+0x54))

//Capture/Compare Register 5
#define	TIM1_CCR5		(*(MM32_TIM1_CCR5*)(0x40012C00+0x58))

//PWM phase shift/DMA repeat update request enable register
#define	TIM1_PDER		(*(MM32_TIM1_PDER*)(0x40012C00+0x5C))

//PWM Phase Shift Down Count Capture/Compare Register
#define	TIM1_CCR1FALL		(*(MM32_TIM1_CCR1FALL*)(0x40012C00+0x60))

//PWM Phase Shift Down Count Capture/Compare Register
#define	TIM1_CCR2FALL		(*(MM32_TIM1_CCR2FALL*)(0x40012C00+0x64))

//PWM Phase Shift Down Count Capture/Compare Register
#define	TIM1_CCR3FALL		(*(MM32_TIM1_CCR3FALL*)(0x40012C00+0x68))

//PWM Phase Shift Down Count Capture/Compare Register
#define	TIM1_CCR4FALL		(*(MM32_TIM1_CCR4FALL*)(0x40012C00+0x6C))

//PWM Phase Shift Down Count Capture/Compare Register
#define	TIM1_CCR5FALL		(*(MM32_TIM1_CCR5FALL*)(0x40012C00+0x70))

//brake input filter register
#define	TIM1_BKINF		(*(MM32_TIM1_BKINF*)(0x40012C00+0x74))


#endif

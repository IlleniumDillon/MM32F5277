#ifndef _MM32_TIM8REG_H_
#define _MM32_TIM8REG_H_

#include "MM32_TIM8Regdef.h"

//Control Register 1
#define	TIM8_CR1		(*(MM32_TIM8_CR1*)(0x40013400+0x00))

//Control Register 2
#define	TIM8_CR2		(*(MM32_TIM8_CR2*)(0x40013400+0x04))

//Slave Mode Control Register
#define	TIM8_SMCR		(*(MM32_TIM8_SMCR*)(0x40013400+0x08))

//DMA/Interrupt Enable Register
#define	TIM8_DIER		(*(MM32_TIM8_DIER*)(0x40013400+0x0C))

//status register
#define	TIM8_SR		(*(MM32_TIM8_SR*)(0x40013400+0x10))

//event generation register
#define	TIM8_EGR		(*(MM32_TIM8_EGR*)(0x40013400+0x14))

//Capture/Compare Mode Register 1
#define	TIM8_CCMR1_Output		(*(MM32_TIM8_CCMR1_Output*)(0x40013400+0x18))

//Capture/Compare Mode Register 2
#define	TIM8_CCMR1_Input		(*(MM32_TIM8_CCMR1_Input*)(0x40013400+0x18))

//Capture/Compare Mode Register 1
#define	TIM8_CCMR2_Output		(*(MM32_TIM8_CCMR2_Output*)(0x40013400+0x1C))

//Capture/Compare Mode Register 2
#define	TIM8_CCMR2_Input		(*(MM32_TIM8_CCMR2_Input*)(0x40013400+0x1C))

//Capture/Compare Enable Register
#define	TIM8_CCER		(*(MM32_TIM8_CCER*)(0x40013400+0x20))

//counter
#define	TIM8_CNT		(*(MM32_TIM8_CNT*)(0x40013400+0x24))

//Prescaler
#define	TIM8_PSC		(*(MM32_TIM8_PSC*)(0x40013400+0x28))

//autoload register
#define	TIM8_ARR		(*(MM32_TIM8_ARR*)(0x40013400+0x2C))

//Repeat count register
#define	TIM8_RCR		(*(MM32_TIM8_RCR*)(0x40013400+0x30))

//Capture/Compare Register 1
#define	TIM8_CCR1		(*(MM32_TIM8_CCR1*)(0x40013400+0x34))

//Capture/Compare Register 1
#define	TIM8_CCR2		(*(MM32_TIM8_CCR2*)(0x40013400+0x38))

//Capture/Compare Register 1
#define	TIM8_CCR3		(*(MM32_TIM8_CCR3*)(0x40013400+0x3C))

//Capture/Compare Register 1
#define	TIM8_CCR4		(*(MM32_TIM8_CCR4*)(0x40013400+0x40))

//Brake and Deadband Registers
#define	TIM8_BDTR		(*(MM32_TIM8_BDTR*)(0x40013400+0x44))

//DMA Control Register
#define	TIM8_DCR		(*(MM32_TIM8_DCR*)(0x40013400+0x48))

//DMA address for continuous mode
#define	TIM8_DMAR		(*(MM32_TIM8_DMAR*)(0x40013400+0x4C))

//Capture/Compare Mode Register 3
#define	TIM8_CCMR3		(*(MM32_TIM8_CCMR3*)(0x40013400+0x54))

//Capture/Compare Register 5
#define	TIM8_CCR5		(*(MM32_TIM8_CCR5*)(0x40013400+0x58))

//PWM phase shift/DMA repeat update request enable register
#define	TIM8_PDER		(*(MM32_TIM8_PDER*)(0x40013400+0x5C))

//PWM Phase Shift Down Count Capture/Compare Register
#define	TIM8_CCR1FALL		(*(MM32_TIM8_CCR1FALL*)(0x40013400+0x60))

//PWM Phase Shift Down Count Capture/Compare Register
#define	TIM8_CCR2FALL		(*(MM32_TIM8_CCR2FALL*)(0x40013400+0x64))

//PWM Phase Shift Down Count Capture/Compare Register
#define	TIM8_CCR3FALL		(*(MM32_TIM8_CCR3FALL*)(0x40013400+0x68))

//PWM Phase Shift Down Count Capture/Compare Register
#define	TIM8_CCR4FALL		(*(MM32_TIM8_CCR4FALL*)(0x40013400+0x6C))

//PWM Phase Shift Down Count Capture/Compare Register
#define	TIM8_CCR5FALL		(*(MM32_TIM8_CCR5FALL*)(0x40013400+0x70))

//brake input filter register
#define	TIM8_BKINF		(*(MM32_TIM8_BKINF*)(0x40013400+0x74))


#endif

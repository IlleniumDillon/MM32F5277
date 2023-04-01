#ifndef _MM32_TIM_H_
#define _MM32_TIM_H_

#include <MM32_Registers.h>
#include <MM32_GPIO.h>
#include <MM32_TIM_PinMap.h>

#include <common.h>

#define	TIMx_CR1(x)		(*(MM32_TIM1_CR1*)(x+0x00))
#define	TIMx_CR2(x)		(*(MM32_TIM1_CR2*)(x+0x04))
#define	TIMx_SMCR(x)		(*(MM32_TIM1_SMCR*)(x+0x08))
#define	TIMx_DIER(x)		(*(MM32_TIM1_DIER*)(x+0x0C))
#define	TIMx_SR(x)		(*(MM32_TIM1_SR*)(x+0x10))
#define	TIMx_EGR(x)		(*(MM32_TIM1_EGR*)(x+0x14))
#define	TIMx_CCMR1_Output(x)		(*(MM32_TIM1_CCMR1_Output*)(x+0x18))
#define	TIMx_CCMR1_Input(x)		(*(MM32_TIM1_CCMR1_Input*)(x+0x18))
#define	TIMx_CCMR2_Output(x)		(*(MM32_TIM1_CCMR2_Output*)(x+0x1C))
#define	TIMx_CCMR2_Input(x)		(*(MM32_TIM1_CCMR2_Input*)(x+0x1C))
#define	TIMx_CCER(x)		(*(MM32_TIM1_CCER*)(x+0x20))
#define	TIMx_CNT(x)		(*(MM32_TIM1_CNT*)(x+0x24))
#define	TIMx_PSC(x)		(*(MM32_TIM1_PSC*)(x+0x28))
#define	TIMx_ARR(x)		(*(MM32_TIM1_ARR*)(x+0x2C))
#define	TIMx_RCR(x)		(*(MM32_TIM1_RCR*)(x+0x30))
#define	TIMx_CCR1(x)		(*(MM32_TIM1_CCR1*)(x+0x34))
#define	TIMx_CCR2(x)		(*(MM32_TIM1_CCR2*)(x+0x38))
#define	TIMx_CCR3(x)		(*(MM32_TIM1_CCR3*)(x+0x3C))
#define	TIMx_CCR4(x)		(*(MM32_TIM1_CCR4*)(x+0x40))
#define	TIMx_BDTR(x)		(*(MM32_TIM1_BDTR*)(x+0x44))
#define	TIMx_DCR(x)		(*(MM32_TIM1_DCR*)(x+0x48))
#define	TIMx_DMAR(x)		(*(MM32_TIM1_DMAR*)(x+0x4C))
#define	TIMx_OR(x)		(*(MM32_TIM2_OR*)(x+0x50))
#define	TIMx_CCMR3(x)		(*(MM32_TIM1_CCMR3*)(x+0x54))
#define	TIMx_CCR5(x)		(*(MM32_TIM1_CCR5*)(x+0x58))
#define	TIMx_PDER(x)		(*(MM32_TIM1_PDER*)(x+0x5C))
#define	TIMx_CCR1FALL(x)		(*(MM32_TIM1_CCR1FALL*)(x+0x60))
#define	TIMx_CCR2FALL(x)		(*(MM32_TIM1_CCR2FALL*)(x+0x64))
#define	TIMx_CCR3FALL(x)		(*(MM32_TIM1_CCR3FALL*)(x+0x68))
#define	TIMx_CCR4FALL(x)		(*(MM32_TIM1_CCR4FALL*)(x+0x6C))
#define	TIMx_CCR5FALL(x)		(*(MM32_TIM1_CCR5FALL*)(x+0x70))
#define	TIMx_BKINF(x)		(*(MM32_TIM1_BKINF*)(x+0x74))

#define TIMx_CCRy(x,y)      (*(MM32_TIM1_CCR1*)(x+0x34+0x04*(y)))

#define MM32_TIM_Enable(x)  TIMx_CR1(x).B.CEN = 1;
#define MM32_TIM_Disable(x)  TIMx_CR1(x).B.CEN = 0;

#define MM32_TIM_PWMOutEnable(x)
#define MM32_TIM_PWMOutDisable(x)

void MM32_TIM_InitTimerTask(MM32_TIM_PortNum port, float freq);

void MM32_TIM_InitPWMOutPin(MM32_TIM_Pin* pin, float freq);

void MM32_TIM_SetPWMDuty(MM32_TIM_Pin* pin, float duty);

void MM32_TIM_InitCaptureInPin(MM32_TIM_Pin* pin);

void MM32_TIM_GetCapture(MM32_TIM_Pin* pin, float* freq, float* duty);

#endif
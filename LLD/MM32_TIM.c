#include "MM32_TIM.h"

void MM32_TIM_InitTimerTask(MM32_TIM_PortNum port, float freq)
{
    TIMx_CR1(port).B.ARPE = 1;
    TIMx_DIER(port).B.UIE = 1;

    extern unsigned int SystemCoreClock;

    uint32_t arr = SystemCoreClock / freq;
    uint32_t psr = 1;
    while(arr > 32767)
    {
        arr = arr >> 1;
        psr = psr << 1;
    }

    TIMx_PSC(port).B.PSC = (uint16_t)psr-1;
    TIMx_ARR(port).B.ARR = (uint16_t)arr;

    // switch (port)
    // {
    // case TIM6:
    //     NVIC_EnableIRQ(TIM6_IRQn);
    //     break;
    // case TIM7:
    //     NVIC_EnableIRQ(TIM7_IRQn);
    //     break;
    // default:
    //     break;
    // }
}

void MM32_TIM_InitPWMOutPin(MM32_TIM_Pin* pin, float freq)
{
    MM32_GPIO_AFPin p = {.periBase = pin->periBase, .port = pin->port, .pin = pin->pin, .af = pin->af};
    MM32_GPIO_AFPinInit(&p, AF_PUSHPULL);

    TIMx_CR1(pin->periBase).B.CEN = 0;

    TIMx_CR1(pin->periBase).B.ARPE = 1;
    TIMx_CR1(pin->periBase).B.CMS = 0;
    TIMx_CR1(pin->periBase).B.DIR = 0;
    TIMx_CR1(pin->periBase).B.OPM = 0;

    extern unsigned int SystemCoreClock;

    uint32_t arr = SystemCoreClock / freq;
    uint32_t psr = 1;
    while(arr > 32767)
    {
        arr = arr >> 1;
        psr = psr << 1;
    }

    TIMx_PSC(pin->periBase).B.PSC = (uint16_t)psr-1;
    TIMx_ARR(pin->periBase).B.ARR = (uint16_t)arr;

    switch(pin->chNum)
    {
        case TIM_CH1:
        {
            TIMx_CCMR1_Output(pin->periBase).B.CC1S = 0;
            TIMx_CCMR1_Output(pin->periBase).B.OC1PE = 1;
            TIMx_CCMR1_Output(pin->periBase).B.OC1M = 6;
            TIMx_CCER(pin->periBase).B.CC1E = 1;
            break;
        }
        case TIM_CH2:
        {
            TIMx_CCMR1_Output(pin->periBase).B.CC2S = 0;
            TIMx_CCMR1_Output(pin->periBase).B.OC2PE = 1;
            TIMx_CCMR1_Output(pin->periBase).B.OC2M = 6;
            TIMx_CCER(pin->periBase).B.CC2E = 1;
            break;
        }
        case TIM_CH3:
        {
            TIMx_CCMR2_Output(pin->periBase).B.CC3S = 0;
            TIMx_CCMR2_Output(pin->periBase).B.OC3PE = 1;
            TIMx_CCMR2_Output(pin->periBase).B.OC3M = 6;
            TIMx_CCER(pin->periBase).B.CC3E = 1;
            break;
        }
        case TIM_CH4:
        {
            TIMx_CCMR2_Output(pin->periBase).B.CC4S = 0;
            TIMx_CCMR2_Output(pin->periBase).B.OC4PE = 1;
            TIMx_CCMR2_Output(pin->periBase).B.OC4M = 6;
            TIMx_CCER(pin->periBase).B.CC4E = 1;
            break;
        }
        case TIM_CH1N:
        {
            TIMx_CCMR1_Output(pin->periBase).B.CC1S = 0;
            TIMx_CCMR1_Output(pin->periBase).B.OC1PE = 1;
            TIMx_CCMR1_Output(pin->periBase).B.OC1M = 6;
            TIMx_CCER(pin->periBase).B.CC1NE = 1;
            break;
        }
        case TIM_CH2N:
        {
            TIMx_CCMR1_Output(pin->periBase).B.CC2S = 0;
            TIMx_CCMR1_Output(pin->periBase).B.OC2PE = 1;
            TIMx_CCMR1_Output(pin->periBase).B.OC2M = 6;
            TIMx_CCER(pin->periBase).B.CC2NE = 1;
            break;
        }
        case TIM_CH3N:
        {
            TIMx_CCMR2_Output(pin->periBase).B.CC3S = 0;
            TIMx_CCMR2_Output(pin->periBase).B.OC3PE = 1;
            TIMx_CCMR2_Output(pin->periBase).B.OC3M = 6;
            TIMx_CCER(pin->periBase).B.CC3NE = 1;
            break;
        }
        case TIM_CH4N:
        {
            TIMx_CCMR2_Output(pin->periBase).B.CC4S = 0;
            TIMx_CCMR2_Output(pin->periBase).B.OC4PE = 1;
            TIMx_CCMR2_Output(pin->periBase).B.OC4M = 6;
            TIMx_CCER(pin->periBase).B.CC4NE = 1;
            break;
        }
        default:
            break;
    }
    TIMx_BDTR(pin->periBase).B.MOE = 1;
    TIMx_CR1(pin->periBase).B.CEN = 1;
}

void MM32_TIM_SetPWMDuty(MM32_TIM_Pin* pin, float duty)
{
    TIMx_CCRy(pin->periBase, pin->chNum%4).U = (uint16_t)(TIMx_ARR(pin->periBase).B.ARR * duty);
}

void MM32_TIM_InitCaptureInPin(MM32_TIM_Pin* pin)
{
    MM32_GPIO_AFPin p = {.periBase = pin->periBase, .port = pin->port, .pin = pin->pin, .af = pin->af};
    MM32_GPIO_AFPinInit(&p, INPUT_FLOATING);

    TIMx_CR1(pin->periBase).B.CEN = 0;

    TIMx_ARR(pin->periBase).B.ARR = 0xFFFF;

    TIMx_CR1(pin->periBase).B.DIR = 0;
    TIMx_CCMR1_Input(pin->periBase).B.CC1S = 1;
    TIMx_CCER(pin->periBase).B.CC1P = 0;

    TIMx_CCMR1_Input(pin->periBase).B.CC2S = 2;
    TIMx_CCER(pin->periBase).B.CC1P = 1;

    TIMx_SMCR(pin->periBase).B.TS = 5;
    TIMx_SMCR(pin->periBase).B.SMS = 4;

    TIMx_CCER(pin->periBase).B.CC1E = 1;
    TIMx_CCER(pin->periBase).B.CC2E = 1;

    TIMx_CR1(pin->periBase).B.CEN = 1;
}

void MM32_TIM_GetCapture(MM32_TIM_Pin* pin, float* freq, float* duty)
{
    extern unsigned int SystemCoreClock;

    *freq = (float)SystemCoreClock / (float)(TIMx_CCR1(pin->periBase).B.CCR);
    *duty = 1-(float)(TIMx_CCR2(pin->periBase).B.CCR) / (float)(TIMx_CCR1(pin->periBase).B.CCR);
}
#include "MM32_EXTI.h"

void MM32_EXTI_PinInit(MM32_GPIO_Pin* pin, MM32_EXTI_EdgeConfig edge)
{
    EXTI_IMR.B.IMR = EXTI_IMR.B.IMR | 1 << pin->pin;
    EXTI_EMR.B.EMR = EXTI_EMR.B.EMR | 1 << pin->pin;
    EXTI_RTSR.B.TR = EXTI_RTSR.B.TR | (edge&0x01) << pin->pin;
    EXTI_FTSR.B.TR = EXTI_FTSR.B.TR | (edge>>1) << pin->pin;

    switch(pin->pin/4)
    {
    case 0:
        SYSCFG_EXTICR1.U |=(((pin->port - GPIOA)/0X400)<<(pin->pin % 4));
        break;
    case 1:
        SYSCFG_EXTICR2.U |=(((pin->port - GPIOA)/0X400)<<(pin->pin % 4));
        break;
    case 2:
        SYSCFG_EXTICR3.U |=(((pin->port - GPIOA)/0X400)<<(pin->pin % 4));
        break;
    case 3:
        SYSCFG_EXTICR4.U |=(((pin->port - GPIOA)/0X400)<<(pin->pin % 4));
        break;
    }

    MM32_GPIO_GeneralPinInit(pin,INPUT_FLOATING);
}
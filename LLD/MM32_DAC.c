#include "MM32_DAC.h"

void MM32_DAC_Init(MM32_DAC_Pin* pin)
{
    MM32_GPIO_GeneralPinInit(pin,INPUT_ANALOG);

    DAC_CR.B.OE_EN1 = 1;
    DAC_CR.B.EN1 = 1;
    DAC_CR.B.OE2_EN = 1;
    DAC_CR.B.EN2 = 1;
}

void MM32_DAC_SetChannel1Value(uint16_t value)
{
    DAC_DHR12R1.B.DACC1DHR = value;
}

void MM32_DAC_SetChannel2Value(uint16_t value)
{
    DAC_DHR12R2.B.DACC2DHR = value;
}

void MM32_DAC_SetDualValue(uint16_t ch1Value, uint16_t ch2Value)
{
    DAC_DHR12RD.U = ch1Value | ch2Value << 16;
}
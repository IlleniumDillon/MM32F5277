#include "MM32_ADC.h"

void MM32_ADC_OneShotInit(MM32_ADC_Pin* pin)
{
    MM32_GPIO_Pin p = {.port = pin->port, .pin = pin->pin};
    MM32_GPIO_GeneralPinInit(&p,INPUT_ANALOG);

    ADCx_ADCFG(pin->periBase).B.ADEN = 1;

    ADCx_ADCR(pin->periBase).B.ADMD = 0;
    ADCx_ADCHS(pin->periBase).U |= (0x1 << pin->chNum);

    ADCx_ANY_CR(pin->periBase).B.ADCAL = 1;
    while(ADCx_ADSTA_EXT(pin->periBase).B.EOCALIF == 0);
    ADCx_ADSTA_EXT(pin->periBase).B.EOCALIF = 1;
}

uint16_t MM32_ADC_OneShotGetValue(MM32_ADC_Pin* pin)
{
    ADCx_ADCR(pin->periBase).B.ADST = 1;
    /*while(ADCx_ADSTA_EXT(pin->periBase).B.EOCIF == 0);
    ADCx_ADSTA_EXT(pin->periBase).B.EOCIF = 1;*/
    while(ADCx_ADDATA(pin->periBase).B.VALID == 0);
    return ADCx_ADDATA(pin->periBase).B.DATA;
}

void MM32_ADC_ScanWithDmaInit(MM32_ADC_Pin* pin)
{
    MM32_GPIO_Pin p = {.port = pin->port, .pin = pin->pin};
    MM32_GPIO_GeneralPinInit(&p,INPUT_ANALOG);

    ADCx_ADCFG(pin->periBase).B.ADEN = 1;

    ADCx_ADCR(pin->periBase).B.ADMD = 2;
    ADCx_ADCR(pin->periBase).B.DMAEN = 1;
    ADCx_ADCHS(pin->periBase).U |= (0x1 << pin->chNum);

    ADCx_ANY_CR(pin->periBase).B.ADCAL = 1;
    while(ADCx_ADSTA_EXT(pin->periBase).B.EOCALIF == 0);
    ADCx_ADSTA_EXT(pin->periBase).B.EOCALIF = 1;
}

void MM32_ADC_ScanStart(MM32_ADC_Pin* pin)
{
    ADCx_ADCR(pin->periBase).B.ADST = 1;
}

void MM32_ADC_ScanStop(MM32_ADC_Pin* pin)
{
    ADCx_ADCR(pin->periBase).B.ADST = 0;
}
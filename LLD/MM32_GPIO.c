#include "MM32_GPIO.h"

void MM32_GPIO_GeneralPinInit(MM32_GPIO_Pin* pin, MM32_GPIO_PinConfig config)
{
    //解释配置枚举为寄存器值
    uint32_t mask;
    uint8_t dcr = config >> 5;
    uint8_t cnf = (config >> 3) & 0x03;
    uint8_t mode = (config >> 1) & 0x03;
    uint8_t odr = config & 0x01;

    //设置引脚配置
    if(pin->pin < 8)
    {
        mask = ~(0x3 << (4 * pin->pin));
        mask &= GPIOX_CRL(pin->port).U;
        GPIOX_CRL(pin->port).U = mask | (mode << (4 * pin->pin));

        mask = ~(0x3 << (4 * pin->pin + 2));
        mask &= GPIOX_CRL(pin->port).U;
        GPIOX_CRL(pin->port).U = mask | (cnf << (4 * pin->pin + 2));
    }
    else
    {
        mask = ~(0x3 << (4 * (pin->pin % 8)));
        mask &= GPIOX_CRH(pin->port).U;
        GPIOX_CRH(pin->port).U = mask | (mode << (4 * (pin->pin % 8)));

        mask = ~(0x3 << (4 * (pin->pin % 8) + 2));
        mask &= GPIOX_CRH(pin->port).U;
        GPIOX_CRH(pin->port).U = mask | (cnf << (4 * (pin->pin % 8) + 2));
    }
    mask = ~(0x3 << (2 * pin->pin));
    mask &= GPIOX_DCR(pin->port).U;
    GPIOX_DCR(pin->port).U = mask | (dcr << (2 * pin->pin));

    mask = ~(0x1 << (pin->pin));
    mask &= GPIOX_ODR(pin->port).B.ODRY;
    GPIOX_ODR(pin->port).B.ODRY = mask | (odr << (pin->pin));
}

void MM32_GPIO_AFPinInit(MM32_GPIO_AFPin* pin, MM32_GPIO_PinConfig config)
{
    MM32_GPIO_Pin gpin = {.pin = pin->pin, .port = pin->port};
    MM32_GPIO_GeneralPinInit(&gpin,config);
    uint32_t mask;
    //配置复用功能
    if(pin->pin < 8)
    {
        mask = ~(0xF << (4 * pin->pin));
        mask &= GPIOX_AFRL(pin->port).U;
        GPIOX_AFRL(pin->port).U = mask | (pin->af << (4 * pin->pin));
    }
    else
    {
        mask = ~(0xF << (4 * (pin->pin % 8)));
        mask &= GPIOX_AFRH(pin->port).U;
        GPIOX_AFRH(pin->port).U = mask | (pin->af << (4 * (pin->pin % 8)));
    }
}

void MM32_GPIO_SetPinData(MM32_GPIO_Pin* pin, uint8_t state)
{
    state ? 
    (GPIOX_BSRR(pin->port).B.BSy = 0x1 << pin->pin) :
    (GPIOX_BSRR(pin->port).B.BRy = 0x1 << pin->pin);
}

uint8_t MM32_GPIO_ReadPin(MM32_GPIO_Pin* pin)
{
    return (GPIOX_IDR(pin->port).B.IDRY >> pin->pin) & 0x1;
}

void MM32_GPIO_TooglePin(MM32_GPIO_Pin* pin)
{
    (GPIOX_ODR(pin->port).B.ODRY >> pin->pin) & 0x1 ?
    (GPIOX_BSRR(pin->port).B.BRy = 0x1 << pin->pin) :
    (GPIOX_BSRR(pin->port).B.BSy = 0x1 << pin->pin);
}
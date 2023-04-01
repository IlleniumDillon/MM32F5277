/*
 * @Author: IlleniumDillon 147900130@qq.com
 * @Date: 2023-03-02 13:46:14
 * @LastEditors: IlleniumDillon 147900130@qq.com
 * @LastEditTime: 2023-03-12 12:55:14
 * @FilePath: \buildd:\ARMFPGA\MM32F5277_Keil\PinMap\MM32_PinMapType.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef _MM32_PINMAPTYPE_H_
#define _MM32_PINMAPTYPE_H_

#include <stdint.h>

typedef enum
{
    GPIOA = 0x40040000,
    GPIOB = 0x40040400,
    GPIOC = 0x40040800,
    GPIOD = 0x40040C00,
    GPIOE = 0x40041000,
    GPIOF = 0x40041400,
    GPIOG = 0x40041800,
    GPIOH = 0x40041C00,
    GPIOI = 0x40042000
}MM32_GPIO_PortNum;

typedef enum
{
    UART1 = 0x40013800,
    UART2 = 0x40004400,
    UART3 = 0x40004800,
    UART4 = 0x40004C00,
    UART5 = 0x40005000,
    UART6 = 0x40013C00,
    UART7 = 0x40007800
}MM32_UART_PortNum;

typedef enum
{
    I2C1 = 0x40005400,
    I2C2 = 0x40005800
}MM32_I2C_PortNum;

typedef enum
{
    SPI1 = 0x40013000,
    SPI2 = 0x40003800,
    SPI3 = 0x40003C00,
}MM32_SPI_PortNum;

typedef enum
{
    ADC1 = 0x40012400,
    ADC2 = 0x40012800
}MM32_ADC_PortNum;

typedef enum
{
    TIM1 = 0x40012C00,
    TIM2 = 0x40000000,
    TIM3 = 0x40000400,
    TIM4 = 0x40000800,
    TIM5 = 0x40000C00,
    TIM6 = 0x40001000,
    TIM7 = 0x40001400,
    TIM8 = 0x40013400
}MM32_TIM_PortNum;

typedef enum
{
    TIM_CH1,
    TIM_CH2,
    TIM_CH3,
    TIM_CH4,
    TIM_CH1N,
    TIM_CH2N,
    TIM_CH3N,
    TIM_CH4N,
    TIM_BKIN,
    TIM_ETR
}MM32_TIM_Channel;

typedef enum
{
    CAN1 = 0x4000C000,
    CAN2 = 0x40018000,
}MM32_CAN_Channel;

typedef enum
{
    P00 = 0, P01 = 1, P02 = 2, P03 = 3,
    P04 = 4, P05 = 5, P06 = 6, P07 = 7,
    P08 = 8, P09 = 9, P10 = 10, P11 = 11,
    P12 = 12, P13 = 13, P14 = 14, P15 = 15
}MM32_GPIO_PinNum;

typedef enum
{
    AF00 = 0, AF01 = 1, AF02 = 2, AF03 = 3,
    AF04 = 4, AF05 = 5, AF06 = 6, AF07 = 7,
    AF08 = 8, AF09 = 9, AF10 = 10, AF11 = 11,
    AF12 = 12, AF13 = 13, AF14 = 14, AF15 = 15
}MM32_GPIO_AfNum;

typedef const struct
{
    MM32_GPIO_PortNum port;
    MM32_GPIO_PinNum pin;
}MM32_GPIO_Pin;

typedef const struct
{
    unsigned int periBase;
    MM32_GPIO_PortNum port;
    MM32_GPIO_PinNum pin;
    MM32_GPIO_AfNum af;
}MM32_GPIO_AFPin;

typedef const struct
{
    unsigned int periBase;
    MM32_GPIO_PortNum port;
    MM32_GPIO_PinNum pin;
    uint8_t chNum;
}MM32_ADC_Pin;

typedef const struct
{
    unsigned int periBase;
    MM32_GPIO_PortNum port;
    MM32_GPIO_PinNum pin;
    MM32_GPIO_AfNum af;
    MM32_TIM_Channel chNum;
}MM32_TIM_Pin;

#endif
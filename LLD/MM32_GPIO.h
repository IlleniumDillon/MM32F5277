#ifndef _MM32_GPIO_H_
#define _MM32_GPIO_H_

#include <MM32_Registers.h>
#include <MM32_PinMap.h>

/**
 * @brief 引脚配置枚举
 */
typedef enum
{
    /*
        0 | DCR[6:5] | CNF[4:3] | MODE[2:1]  | ODR[0]
    */
    INPUT_FLOATING = 8,             //浮空输入
    INPUT_PULLUP = 17,              //上拉输入
    INPUT_PULLDOWN = 16,            //下拉输入
    INPUT_ANALOG = 0,               //模拟输入

    OUTPUT_OPENDRAIN_FLOATING = 14, //浮空开漏输出
    OUTPUT_OPENDRAIN_PULLUP = 110,  //上拉开漏输出
    OUTPUT_OPENDRAIN_PULLDOWN = 46, //下拉开漏输出

    OUTPUT_PUSHPULL = 6,            //推挽输出

    AF_OPENDRAIN_FLOATING = 30,     //复用功能引脚浮空开漏输出
    AF_OPENDRAIN_PULLUP = 126,      //复用功能引脚上拉开漏输出
    AF_OPENDRAIN_PULLDOWN = 62,     //复用功能引脚下拉开漏输出

    AF_PUSHPULL = 22,               //复用功能引脚推挽输出
}MM32_GPIO_PinConfig;

/**
 * @brief 
 * 
 */
#define GPIOX_CRL(x) (*(MM32_GPIOA_CRL*)((x)+0x00))
#define GPIOX_CRH(x) (*(MM32_GPIOA_CRH*)((x)+0x04))
#define GPIOX_IDR(x) (*(MM32_GPIOA_IDR*)((x)+0x08))
#define GPIOX_ODR(x) (*(MM32_GPIOA_ODR*)((x)+0x0C))
#define GPIOX_BSRR(x) (*(MM32_GPIOA_BSRR*)((x)+0x10))
#define GPIOX_BRR(x) (*(MM32_GPIOA_BRR*)((x)+0x14))
#define GPIOX_LCKR(x) (*(MM32_GPIOA_LCKR*)((x)+0x18))
#define GPIOX_DCR(x) (*(MM32_GPIOA_DCR*)((x)+0x1C))
#define GPIOX_AFRL(x) (*(MM32_GPIOA_AFRL*)((x)+0x20))
#define GPIOX_AFRH(x) (*(MM32_GPIOA_AFRH*)((x)+0x24))

/**
 * @brief 
 * 
 * @param pin 
 * @param config 
 */
void MM32_GPIO_GeneralPinInit(MM32_GPIO_Pin* pin, MM32_GPIO_PinConfig config);

/**
 * @brief 
 * 
 * @param pin 
 * @param config 
 */
void MM32_GPIO_AFPinInit(MM32_GPIO_AFPin* pin, MM32_GPIO_PinConfig config);

/**
 * @brief 
 * 
 * @param pin 
 * @param state 
 */
void MM32_GPIO_SetPinData(MM32_GPIO_Pin* pin, uint8_t state);

/**
 * @brief 
 * 
 * @param pin 
 * @return uint8_t 
 */
uint8_t MM32_GPIO_ReadPin(MM32_GPIO_Pin* pin);

/**
 * @brief 
 * 
 * @param pin 
 */
void MM32_GPIO_TooglePin(MM32_GPIO_Pin* pin);

#endif
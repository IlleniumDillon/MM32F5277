/*
 * @Author: IlleniumDillon 147900130@qq.com
 * @Date: 2023-03-02 13:13:07
 * @LastEditors: IlleniumDillon 147900130@qq.com
 * @LastEditTime: 2023-03-15 18:23:59
 * @FilePath: \buildd:\ARMFPGA\MM32F5277_Keil\LLD\MM32_EXTI.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef _MM32_EXTI_H_
#define _MM32_EXTI_H_

#include <MM32_Registers.h>
#include <common.h>
#include <MM32_GPIO.h>

typedef enum
{
    EXTI_NONE = 0,
    EXTI_RISING = 1,
    EXTI_FALLINT = 2,
    EXTI_BOTH = 3,
}MM32_EXTI_EdgeConfig;

void MM32_EXTI_PinInit(MM32_GPIO_Pin* pin, MM32_EXTI_EdgeConfig edge);

#endif
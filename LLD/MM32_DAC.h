/*
 * @Author: IlleniumDillon 147900130@qq.com
 * @Date: 2023-03-02 13:23:57
 * @LastEditors: IlleniumDillon 147900130@qq.com
 * @LastEditTime: 2023-03-20 20:50:08
 * @FilePath: \buildd:\ARMFPGA\MM32F5277_Keil\LLD\MM32_DAC.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef _MM32_DAC_H_
#define _MM32_DAC_H_

#include <MM32_Registers.h>
#include <MM32_GPIO.h>
#include <MM32_DAC_PinMap.h>

void MM32_DAC_Init(MM32_DAC_Pin* pin);

void MM32_DAC_SetChannel1Value(uint16_t value);

void MM32_DAC_SetChannel2Value(uint16_t value);

void MM32_DAC_SetDualValue(uint16_t ch1Value, uint16_t ch2Value);

#endif
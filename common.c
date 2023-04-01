/*
 * @Author: IlleniumDillon 147900130@qq.com
 * @Date: 2023-03-02 12:41:56
 * @LastEditors: IlleniumDillon 147900130@qq.com
 * @LastEditTime: 2023-03-15 18:58:27
 * @FilePath: \buildd:\ARMFPGA\MM32F5277_Keil\common.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "common.h"

#include <MM32_Registers.h>

unsigned int SystemCoreClock = 120000000; 

void __SystickDelay(uint32_t ticks)
{
    SysTick->LOAD = ticks;
    SysTick->VAL = 0x00;
    SysTick->CTRL = SysTick_CTRL_ENABLE_Msk | SysTick_CTRL_CLKSOURCE_Msk;
    while(!(SysTick->CTRL&(0x01<<16)));
    SysTick->CTRL &= ~SysTick_CTRL_ENABLE_Msk;
    SysTick->VAL = 0x00;
}

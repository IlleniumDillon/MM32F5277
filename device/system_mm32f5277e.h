/*
 * @Author: IlleniumDillon 147900130@qq.com
 * @Date: 2023-02-28 19:32:23
 * @LastEditors: IlleniumDillon 147900130@qq.com
 * @LastEditTime: 2023-03-15 19:01:09
 * @FilePath: \buildd:\ARMFPGA\MM32F5277_Keil\device\system_mm32f5277e.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */

#ifndef __SYSTEM_MM32F5277E_H__
#define __SYSTEM_MM32F5277E_H__

/* define the CP10 & CP11 full access to the FP Extension. */
#define SCB_CPACR_CP10_MASK ( 0x03 << 20u)
#define SCB_CPACR_CP11_MASK (0x03 << 22u)

void SystemInit(void);

void DefaultClockInit(void);

void HighSpeedClockInit(void);

void RealTimeClockInit(void);

void EnablePeripherals(void);

void NVICInit(void);

#endif /* __SYSTEM_MM32F5277E_H__ */

/*
 * @Author: IlleniumDillon 147900130@qq.com
 * @Date: 2023-03-04 15:53:58
 * @LastEditors: IlleniumDillon 147900130@qq.com
 * @LastEditTime: 2023-03-04 16:10:28
 * @FilePath: \buildd:\ARMFPGA\MM32F5277_Keil\PinMap\MM32_MDS_PinMap.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
 
#ifndef _MM32_MDS_PINMAP_H_
#define _MM32_MDS_PINMAP_H_

#include <MM32_PinMapType.h>

typedef MM32_GPIO_AFPin MM32_MDS_Pin;

extern MM32_MDS_Pin MDS_IN1_PA7;
extern MM32_MDS_Pin MDS_OUT2_PA13;
extern MM32_MDS_Pin MDS_IN3_PA14;

extern MM32_MDS_Pin MDS_OUT3_PB7;
extern MM32_MDS_Pin MDS_OUT1_PB11;
extern MM32_MDS_Pin MDS_IN2_PB14;

extern MM32_MDS_Pin MDS_IN0_PC13;

extern MM32_MDS_Pin MDS_OUT0_PI0;

#endif
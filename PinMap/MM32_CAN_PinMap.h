/*
 * @Author: IlleniumDillon 147900130@qq.com
 * @Date: 2023-03-16 10:10:17
 * @LastEditors: IlleniumDillon 147900130@qq.com
 * @LastEditTime: 2023-03-16 10:21:23
 * @FilePath: \buildd:\ARMFPGA\MM32F5277_Keil\PinMap\MM32_CAN_PinMap.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
 
#ifndef _MM32_CAN_PINMAP_H_
#define _MM32_CAN_PINMAP_H_

#include <MM32_PinMapType.h>

typedef MM32_GPIO_AFPin MM32_CAN_Pin;

extern MM32_CAN_Pin CAN1_RX_PA11;
extern MM32_CAN_Pin CAN1_TX_PA12;

extern MM32_CAN_Pin CAN2_RX_PB5;
extern MM32_CAN_Pin CAN2_TX_PB6;
extern MM32_CAN_Pin CAN1_RX_PB8;
extern MM32_CAN_Pin CAN1_TX_PB9;
extern MM32_CAN_Pin CAN2_RX_PB12;
extern MM32_CAN_Pin CAN2_TX_PB13;

extern MM32_CAN_Pin CAN1_RX_PD0;
extern MM32_CAN_Pin CAN1_TX_PD1;

extern MM32_CAN_Pin CAN1_RX_PI0;
extern MM32_CAN_Pin CAN1_TX_PI1;

#endif
/*
 * @Author: IlleniumDillon 147900130@qq.com
 * @Date: 2023-03-16 10:10:17
 * @LastEditors: IlleniumDillon 147900130@qq.com
 * @LastEditTime: 2023-03-16 10:18:34
 * @FilePath: \buildd:\ARMFPGA\MM32F5277_Keil\PinMap\MM32_CAN_PinMap.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "MM32_CAN_PinMap.h"

MM32_CAN_Pin CAN1_RX_PA11   = {.periBase = CAN1, .port = GPIOA, .pin = P11, .af = AF09};
MM32_CAN_Pin CAN1_TX_PA12   = {.periBase = CAN1, .port = GPIOA, .pin = P12, .af = AF09};

MM32_CAN_Pin CAN2_RX_PB5    = {.periBase = CAN2, .port = GPIOB, .pin = P05, .af = AF09};
MM32_CAN_Pin CAN2_TX_PB6    = {.periBase = CAN2, .port = GPIOB, .pin = P06, .af = AF09};
MM32_CAN_Pin CAN1_RX_PB8    = {.periBase = CAN1, .port = GPIOB, .pin = P08, .af = AF09};
MM32_CAN_Pin CAN1_TX_PB9    = {.periBase = CAN1, .port = GPIOB, .pin = P09, .af = AF09};
MM32_CAN_Pin CAN2_RX_PB12   = {.periBase = CAN2, .port = GPIOB, .pin = P12, .af = AF09};
MM32_CAN_Pin CAN2_TX_PB13   = {.periBase = CAN2, .port = GPIOB, .pin = P13, .af = AF09};

MM32_CAN_Pin CAN1_RX_PD0    = {.periBase = CAN1, .port = GPIOD, .pin = P00, .af = AF09};
MM32_CAN_Pin CAN1_TX_PD1    = {.periBase = CAN1, .port = GPIOD, .pin = P01, .af = AF09};

MM32_CAN_Pin CAN1_RX_PI0    = {.periBase = CAN1, .port = GPIOI, .pin = P00, .af = AF09};
MM32_CAN_Pin CAN1_TX_PI1    = {.periBase = CAN1, .port = GPIOI, .pin = P01, .af = AF09};
/*
 * @Author: IlleniumDillon 147900130@qq.com
 * @Date: 2023-03-15 23:21:53
 * @LastEditors: IlleniumDillon 147900130@qq.com
 * @LastEditTime: 2023-03-15 23:33:48
 * @FilePath: \buildd:\ARMFPGA\MM32F5277_Keil\PinMap\MM32_ENET_PinMap.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "MM32_ENET_PinMap.h"

MM32_ENET_Pin ENET_CRS_PA0      = {.periBase = 0, .port = GPIOA, .pin = P00, .af = AF11};
MM32_ENET_Pin ENET_RX_CLK_PA1   = {.periBase = 0, .port = GPIOA, .pin = P01, .af = AF11};
MM32_ENET_Pin ENET_MDIO_PA2     = {.periBase = 0, .port = GPIOA, .pin = P02, .af = AF11};
MM32_ENET_Pin ENET_COL_PA3      = {.periBase = 0, .port = GPIOA, .pin = P03, .af = AF11};
MM32_ENET_Pin ENET_RX_DV_PA7    = {.periBase = 0, .port = GPIOA, .pin = P07, .af = AF11};
MM32_ENET_Pin ENET_TX_CLK_PA13  = {.periBase = 0, .port = GPIOA, .pin = P13, .af = AF11};
MM32_ENET_Pin ENET_RX_CLK_PA15  = {.periBase = 0, .port = GPIOA, .pin = P15, .af = AF11};

MM32_ENET_Pin ENET_RXD2_PB0     = {.periBase = 0, .port = GPIOB, .pin = P00, .af = AF11};
MM32_ENET_Pin ENET_RXD3_PB1     = {.periBase = 0, .port = GPIOB, .pin = P01, .af = AF11};
MM32_ENET_Pin ENET_RX_CLK_PB2   = {.periBase = 0, .port = GPIOB, .pin = P02, .af = AF11};
MM32_ENET_Pin ENET_PPS_OUT_PB5  = {.periBase = 0, .port = GPIOB, .pin = P05, .af = AF11};
MM32_ENET_Pin ENET_TXD3_PB8     = {.periBase = 0, .port = GPIOB, .pin = P08, .af = AF11};
MM32_ENET_Pin ENET_RX_ER_PB10   = {.periBase = 0, .port = GPIOB, .pin = P10, .af = AF11};
MM32_ENET_Pin ENET_TX_EN_PB11   = {.periBase = 0, .port = GPIOB, .pin = P11, .af = AF11};
MM32_ENET_Pin ENET_TXD0_PB12    = {.periBase = 0, .port = GPIOB, .pin = P12, .af = AF11};
MM32_ENET_Pin ENET_TXD1_PB13    = {.periBase = 0, .port = GPIOB, .pin = P13, .af = AF11};
MM32_ENET_Pin ENET_TX_CLK_PB14  = {.periBase = 0, .port = GPIOB, .pin = P14, .af = AF11};

MM32_ENET_Pin ENET_MDC_PC1      = {.periBase = 0, .port = GPIOC, .pin = P01, .af = AF11};
MM32_ENET_Pin ENET_TXD2_PC2     = {.periBase = 0, .port = GPIOC, .pin = P02, .af = AF11};
MM32_ENET_Pin ENET_TX_CLK_PC3   = {.periBase = 0, .port = GPIOC, .pin = P03, .af = AF11};
MM32_ENET_Pin ENET_RXD0_CP4     = {.periBase = 0, .port = GPIOC, .pin = P04, .af = AF11};
MM32_ENET_Pin ENET_RXD1_PC5     = {.periBase = 0, .port = GPIOC, .pin = P05, .af = AF11};

MM32_ENET_Pin RNRT_TXD3_PE2     = {.periBase = 0, .port = GPIOE, .pin = P02, .af = AF11};

MM32_ENET_Pin ENET_PPS_OUT_PG8  = {.periBase = 0, .port = GPIOG, .pin = P08, .af = AF11};
MM32_ENET_Pin ENET_TXEN_PG11    = {.periBase = 0, .port = GPIOG, .pin = P11, .af = AF11};
MM32_ENET_Pin ENET_TXD0_PG13    = {.periBase = 0, .port = GPIOG, .pin = P13, .af = AF11};
MM32_ENET_Pin ENET_TXD1_PG14    = {.periBase = 0, .port = GPIOG, .pin = P14, .af = AF11};

MM32_ENET_Pin ENET_CRS_PH2      = {.periBase = 0, .port = GPIOH, .pin = P02, .af = AF11};
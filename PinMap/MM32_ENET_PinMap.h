/*
 * @Author: IlleniumDillon 147900130@qq.com
 * @Date: 2023-03-15 23:21:53
 * @LastEditors: IlleniumDillon 147900130@qq.com
 * @LastEditTime: 2023-03-15 23:35:55
 * @FilePath: \buildd:\ARMFPGA\MM32F5277_Keil\PinMap\MM32_ENET_PinMap.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
 
#ifndef _MM32_ENET_PINMAP_H_
#define _MM32_ENET_PINMAP_H_

#include <MM32_PinMapType.h>

typedef MM32_GPIO_AFPin MM32_ENET_Pin;

extern MM32_ENET_Pin ENET_CRS_PA0;
extern MM32_ENET_Pin ENET_RX_CLK_PA1;
extern MM32_ENET_Pin ENET_MDIO_PA2;
extern MM32_ENET_Pin ENET_COL_PA3;
extern MM32_ENET_Pin ENET_RX_DV_PA7;
extern MM32_ENET_Pin ENET_TX_CLK_PA13;
extern MM32_ENET_Pin ENET_RX_CLK_PA15;

extern MM32_ENET_Pin ENET_RXD2_PB0;
extern MM32_ENET_Pin ENET_RXD3_PB1;
extern MM32_ENET_Pin ENET_RX_CLK_PB2;
extern MM32_ENET_Pin ENET_PPS_OUT_PB5;
extern MM32_ENET_Pin ENET_TXD3_PB8;
extern MM32_ENET_Pin ENET_RX_ER_PB10;
extern MM32_ENET_Pin ENET_TX_EN_PB11;
extern MM32_ENET_Pin ENET_TXD0_PB12;
extern MM32_ENET_Pin ENET_TXD1_PB13;
extern MM32_ENET_Pin ENET_TX_CLK_PB14;

extern MM32_ENET_Pin ENET_MDC_PC1;
extern MM32_ENET_Pin ENET_TXD2_PC2;
extern MM32_ENET_Pin ENET_TX_CLK_PC3;
extern MM32_ENET_Pin ENET_RXD0_CP4;
extern MM32_ENET_Pin ENET_RXD1_PC5;

extern MM32_ENET_Pin RNRT_TXD3_PE2;

extern MM32_ENET_Pin ENET_PPS_OUT_PG8;
extern MM32_ENET_Pin ENET_TXEN_PG11;
extern MM32_ENET_Pin ENET_TXD0_PG13;
extern MM32_ENET_Pin ENET_TXD1_PG14;

extern MM32_ENET_Pin ENET_CRS_PH2;

#endif
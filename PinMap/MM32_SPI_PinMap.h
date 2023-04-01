/*
 * @Author: IlleniumDillon 147900130@qq.com
 * @Date: 2023-03-05 16:16:19
 * @LastEditors: IlleniumDillon 147900130@qq.com
 * @LastEditTime: 2023-03-05 16:49:28
 * @FilePath: \buildd:\ARMFPGA\MM32F5277_Keil\PinMap\MM32_SPI_PinMap.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */

#ifndef _MM32_SPI_PINMAP_H_
#define _MM32_SPI_PINMAP_H_

#include <MM32_PinMapType.h>

typedef MM32_GPIO_AFPin MM32_SPI_Pin;

extern MM32_SPI_Pin SPI1_NSS_PA4;
extern MM32_SPI_Pin SPI1_SCK_PA5;
extern MM32_SPI_Pin SPI1_MISO_PA6;
extern MM32_SPI_Pin SPI1_MOSI_PA7;
extern MM32_SPI_Pin SPI1_NSS_PA15;

extern MM32_SPI_Pin SPI1_SCK_PB3;
extern MM32_SPI_Pin SPI1_MISO_PB4;
extern MM32_SPI_Pin SPI1_MOSI_PB5;
extern MM32_SPI_Pin SPI1_NSS_PB6;

extern MM32_SPI_Pin SPI1_NSS_PE11;
extern MM32_SPI_Pin SPI1_SCK_PE12;
extern MM32_SPI_Pin SPI1_MISO_PE13;
extern MM32_SPI_Pin SPI1_MOSI_PE14;

extern MM32_SPI_Pin SPI1_NSS_PF6;
extern MM32_SPI_Pin SPI1_SCK_PF7;
extern MM32_SPI_Pin SPI1_MISO_PF8;
extern MM32_SPI_Pin SPI1_MOSI_PF9;
extern MM32_SPI_Pin SPI1_MOSI_PF11;

extern MM32_SPI_Pin SPI2_NSS_PB9;
extern MM32_SPI_Pin SPI2_SCK_PB10;
extern MM32_SPI_Pin SPI2_NSS_PB12;
extern MM32_SPI_Pin SPI2_SCK_PB13;
extern MM32_SPI_Pin SPI2_MISO_PB14;
extern MM32_SPI_Pin SPI2_MOSI_PB15;

extern MM32_SPI_Pin SPI2_MISO_PC2;
extern MM32_SPI_Pin SPI2_MOSI_PC3;
extern MM32_SPI_Pin SPI2_MISO_PC6;

extern MM32_SPI_Pin SPI2_SCK_PD3;

extern MM32_SPI_Pin SPI2_SCK_PE2;
extern MM32_SPI_Pin SPI2_NSS_PE3;
extern MM32_SPI_Pin SPI2_NSS_PE4;
extern MM32_SPI_Pin SPI2_MISO_PE5;
extern MM32_SPI_Pin SPI2_MOSI_PE6;

extern MM32_SPI_Pin SPI2_NSS_PF0;
extern MM32_SPI_Pin SPI2_SCK_PF1;

extern MM32_SPI_Pin SPI2_NSS_PG8;
extern MM32_SPI_Pin SPI2_MISO_PG12;
extern MM32_SPI_Pin SPI2_SCK_PG13;
extern MM32_SPI_Pin SPI2_MOSI_PG14;

extern MM32_SPI_Pin SPI3_NSS_PA4;
extern MM32_SPI_Pin SPI3_NSS_PA15;

extern MM32_SPI_Pin SPI3_SCK_PB3;
extern MM32_SPI_Pin SPI3_MISO_PB4;
extern MM32_SPI_Pin SPI3_MOSI_PB5;
extern MM32_SPI_Pin SPI3_NSS_PB6;

extern MM32_SPI_Pin SPI3_MISO_PC7;
extern MM32_SPI_Pin SPI3_MISO_PC7;
extern MM32_SPI_Pin SPI3_SCK_PC10;
extern MM32_SPI_Pin SPI3_MISO_PC11;
extern MM32_SPI_Pin SPI3_MOSI_PC12;

extern MM32_SPI_Pin SPI3_SCK_PD4;
extern MM32_SPI_Pin SPI3_MISO_PD5;
extern MM32_SPI_Pin SPI3_MOSI_PD6;
extern MM32_SPI_Pin SPI3_NSS_PD7;
extern MM32_SPI_Pin SPI3_SCK_PD12;
extern MM32_SPI_Pin SPI3_MISO_PD13;
extern MM32_SPI_Pin SPI3_MOSI_PD14;
extern MM32_SPI_Pin SPI3_NSS_PD15;

#endif
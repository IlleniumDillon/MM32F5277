/*
 * @Author: IlleniumDillon 147900130@qq.com
 * @Date: 2023-03-04 16:42:01
 * @LastEditors: IlleniumDillon 147900130@qq.com
 * @LastEditTime: 2023-03-04 18:13:25
 * @FilePath: \buildd:\ARMFPGA\MM32F5277_Keil\PinMap\MM32_I2C_PinMap.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
 
#ifndef _MM32_I2C_PINMAP_H_
#define _MM32_I2C_PINMAP_H_

#include <MM32_PinMapType.h>

typedef MM32_GPIO_AFPin MM32_I2C_Pin;

extern MM32_I2C_Pin I2C1_SCL_PA8;
extern MM32_I2C_Pin I2C1_SCL_PA9;
extern MM32_I2C_Pin I2C1_SDA_PA10;
extern MM32_I2C_Pin I2C1_SMBA_PA11;
extern MM32_I2C_Pin I2C1_SMBA_PA13;
extern MM32_I2C_Pin I2C1_SDA_PA14;
extern MM32_I2C_Pin I2C1_SCL_PA15;

extern MM32_I2C_Pin I2C1_SMBA_PB5;
extern MM32_I2C_Pin I2C1_SCL_PB6;
extern MM32_I2C_Pin I2C1_SDA_PB7;
extern MM32_I2C_Pin I2C1_SCL_PB8;
extern MM32_I2C_Pin I2C1_SDA_PB9;

extern MM32_I2C_Pin I2C1_SCL_PC0;
extern MM32_I2C_Pin I2C1_SDA_PC1;
extern MM32_I2C_Pin I2C1_SCL_PC6;
extern MM32_I2C_Pin I2C1_SDA_PC7;

extern MM32_I2C_Pin I2C1_SCL_PD10;
extern MM32_I2C_Pin I2C1_SDA_PD11;
extern MM32_I2C_Pin I2C1_SMBA_PD12;

extern MM32_I2C_Pin I2C1_SMBA_PI1;

extern MM32_I2C_Pin I2C2_SCL_PB10;
extern MM32_I2C_Pin I2C2_SDA_PB11;
extern MM32_I2C_Pin I2C2_SMBA_PB12;

extern MM32_I2C_Pin I2C2_SCL_PC2;
extern MM32_I2C_Pin I2C2_SDA_PC3;
extern MM32_I2C_Pin I2C2_SCL_PC8;
extern MM32_I2C_Pin I2C2_SDA_PC9;

extern MM32_I2C_Pin I2C2_SMBA_PE4;
extern MM32_I2C_Pin I2C2_SCL_PE5;
extern MM32_I2C_Pin I2C2_SDA_PE6;

extern MM32_I2C_Pin I2C2_SDA_PF0;
extern MM32_I2C_Pin I2C2_SCL_PF1;
extern MM32_I2C_Pin I2C2_SMBA_PF2;

#endif
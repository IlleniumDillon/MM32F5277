/*
 * @Author: IlleniumDillon 147900130@qq.com
 * @Date: 2023-03-19 17:46:54
 * @LastEditors: IlleniumDillon 147900130@qq.com
 * @LastEditTime: 2023-03-27 17:58:44
 * @FilePath: \buildd:\ARMFPGA\MM32F5277_Keil\CTRL\CTRL.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef _CTRL_H_
#define _CTRL_H_

#include <MM32_TIM.h>
#include <MM32_ADC.h>
#include <MM32_DAC.h>

#include <CTRL_host.h>
#include <CTRL_para.h>
#include <eTag.h>
#include <eShell.h>

#include <tf.h>

#define CTRL_PERIOD (0.0001)
#define CTRL_FREQ   (1/CTRL_PERIOD)

void CTRL_PinInit(void);

void CTRL_Init(char argc, char *argv);

void CTRL_Reset(void);

void CTRL_Start(char argc, char *argv);

void CTRL_Stop(char argc, char *argv);

void CTRL_Update(void);

#endif
/*
 * @Author: IlleniumDillon 147900130@qq.com
 * @Date: 2023-02-28 19:30:18
 * @LastEditors: IlleniumDillon 147900130@qq.com
 * @LastEditTime: 2023-03-27 17:34:12
 * @FilePath: \buildd:\ARMFPGA\MM32F5277_Keil\main.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
/*
 * Copyright 2022 MindMotion Microelectronics Co., Ltd.
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <stdint.h>
#include <stdio.h>

#include <common.h>

#include <MM32_Registers.h>

#include <MM32_RCC.h>
#include <MM32_GPIO.h>
#include <MM32_UART.h>
#include <MM32_CRC_POLY.h>
#include <MM32_CORDIC.h>
#include <MM32_MDS.h>
#include <MM32_I2C.h>
#include <MM32_SPI_I2S.h>
#include <MM32_ADC.h>
#include <MM32_DAC.h>
#include <MM32_TIM.h>
#include <MM32_DMA.h>
#include <MM32_FSMC.h>
//#include <mm32f5277e.h>

#include <eTag.h>
#include <eShell.h>
#include <eParameter.h>

#include <CTRL.h>

const char tag[] = "main";

int main(void)
{	
	eTag_init();
	eTag_start();
	shell_start();
	ePara_Init();
	
	__enable_irq;
	CTRL_PinInit();
	CTRL_Init(NULL,NULL);
	CTRL_Start(NULL,NULL);
	while(1)
	{
		shell_run();
	}
}

/* EOF. */

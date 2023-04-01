/*
 * @Author: IlleniumDillon 147900130@qq.com
 * @Date: 2023-03-01 16:48:17
 * @LastEditors: IlleniumDillon 147900130@qq.com
 * @LastEditTime: 2023-03-02 10:58:31
 * @FilePath: \buildd:\ARMFPGA\MM32F5277_Keil\LLD\MM32_RCC.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef _MM32_RCC_H_
#define _MM32_RCC_H_

#include <MM32_Registers.h>

/**
 * @brief reset peripherals
 */
#define MM32_RCC_ResetGPIOA (RCC_AHB1RSTR.B.GPIOA = 1)
#define MM32_RCC_ResetGPIOB (RCC_AHB1RSTR.B.GPIOB = 1)
#define MM32_RCC_ResetGPIOC (RCC_AHB1RSTR.B.GPIOC = 1)
#define MM32_RCC_ResetGPIOD (RCC_AHB1RSTR.B.GPIOD = 1)
#define MM32_RCC_ResetGPIOE (RCC_AHB1RSTR.B.GPIOE = 1)
#define MM32_RCC_ResetGPIOF (RCC_AHB1RSTR.B.GPIOF = 1)
#define MM32_RCC_ResetGPIOG (RCC_AHB1RSTR.B.GPIOG = 1)
#define MM32_RCC_ResetGPIOH (RCC_AHB1RSTR.B.GPIOH = 1)
#define MM32_RCC_ResetGPIOI (RCC_AHB1RSTR.B.GPIOI = 1)
#define MM32_RCC_ResetCRC (RCC_AHB1RSTR.B.CRC = 1)
#define MM32_RCC_ResetCORDIC (RCC_AHB1RSTR.B.CORDIC = 1)
#define MM32_RCC_ResetENET (RCC_AHB1RSTR.B.ENET = 1)
#define MM32_RCC_ResetDMA1 (RCC_AHB1RSTR.B.DMA1 = 1)
#define MM32_RCC_ResetDMA2 (RCC_AHB1RSTR.B.DMA2 = 1)
#define MM32_RCC_ResetUSB (RCC_AHB1RSTR.B.USBFS = 1)
#define MM32_RCC_ResetFSMC (RCC_AHB1RSTR.B.FSMC = 1)
#define MM32_RCC_ResetQSPI (RCC_AHB1RSTR.B.QSPI = 1)

#define MM32_RCC_ResetTIM1 (RCC_APB2RSTR.B.TIM1 = 1)
#define MM32_RCC_ResetTIM8 (RCC_APB2RSTR.B.TIM8 = 1)
#define MM32_RCC_ResetUART1 (RCC_APB2RSTR.B.UART1 = 1)
#define MM32_RCC_ResetUART6 (RCC_APB2RSTR.B.UART6 = 1)
#define MM32_RCC_ResetADC1 (RCC_APB2RSTR.B.ADC1 = 1)
#define MM32_RCC_ResetADC2 (RCC_APB2RSTR.B.ADC2 = 1)
#define MM32_RCC_ResetSPI1 (RCC_APB2RSTR.B.SPI1 = 1)
#define MM32_RCC_ResetSYSCFG (RCC_APB2RSTR.B.SYSCFG = 1)
#define MM32_RCC_ResetCOMP (RCC_APB2RSTR.B.COMP = 1)
#define MM32_RCC_ResetFLEXCAN2 (RCC_APB2RSTR.B.FLEXCAN2 = 1)
#define MM32_RCC_ResetMDS (RCC_APB2RSTR.B.MINDSWITCH = 1)
#define MM32_RCC_ResetLPTIM (RCC_APB2RSTR.B.LPTIM = 1)
#define MM32_RCC_ResetLPUART (RCC_APB2RSTR.B.LPUART = 1)

#define MM32_RCC_ResetTIM2 (RCC_APB1RSTR.B.TIM2 = 1)
#define MM32_RCC_ResetTIM3 (RCC_APB1RSTR.B.TIM3 = 1)
#define MM32_RCC_ResetTIM4 (RCC_APB1RSTR.B.TIM4 = 1)
#define MM32_RCC_ResetTIM5 (RCC_APB1RSTR.B.TIM5 = 1)
#define MM32_RCC_ResetTIM6 (RCC_APB1RSTR.B.TIM6 = 1)
#define MM32_RCC_ResetTIM7 (RCC_APB1RSTR.B.TIM7 = 1)
#define MM32_RCC_ResetWWDG (RCC_APB1RSTR.B.WWDG = 1)
#define MM32_RCC_ResetSPI2 (RCC_APB1RSTR.B.SPI2 = 1)
#define MM32_RCC_ResetSPI3 (RCC_APB1RSTR.B.SPI3 = 1)
#define MM32_RCC_ResetUART2 (RCC_APB1RSTR.B.UART2 = 1)
#define MM32_RCC_ResetUART3 (RCC_APB1RSTR.B.UART3 = 1)
#define MM32_RCC_ResetUART4 (RCC_APB1RSTR.B.UART4 = 1)
#define MM32_RCC_ResetUART5 (RCC_APB1RSTR.B.UART5 = 1)
#define MM32_RCC_ResetI2C1 (RCC_APB1RSTR.B.I2C1 = 1)
#define MM32_RCC_ResetI2C2 (RCC_APB1RSTR.B.I2C2 = 1)
#define MM32_RCC_ResetCRS (RCC_APB1RSTR.B.CRS = 1)
#define MM32_RCC_ResetFLEXCAN1 (RCC_APB1RSTR.B.FLEXCAN1 = 1)
#define MM32_RCC_ResetDBG (RCC_APB1RSTR.B.DBG = 1)
#define MM32_RCC_ResetBKP (RCC_APB1RSTR.B.BKP = 1)
#define MM32_RCC_ResetPWR (RCC_APB1RSTR.B.PWR = 1)
#define MM32_RCC_ResetDAC (RCC_APB1RSTR.B.DAC = 1)
#define MM32_RCC_ResetUART7 (RCC_APB1RSTR.B.UART7 = 1)


/**
 * @brief enable / disable peripherals
 */
#define MM32_RCC_EnableGPIOA(x) (RCC_AHB1ENR.B.GPIOA = x)
#define MM32_RCC_EnableGPIOB(x) (RCC_AHB1ENR.B.GPIOB = x)
#define MM32_RCC_EnableGPIOC(x) (RCC_AHB1ENR.B.GPIOC = x)
#define MM32_RCC_EnableGPIOD(x) (RCC_AHB1ENR.B.GPIOD = x)
#define MM32_RCC_EnableGPIOE(x) (RCC_AHB1ENR.B.GPIOE = x)
#define MM32_RCC_EnableGPIOF(x) (RCC_AHB1ENR.B.GPIOF = x)
#define MM32_RCC_EnableGPIOG(x) (RCC_AHB1ENR.B.GPIOG = x)
#define MM32_RCC_EnableGPIOH(x) (RCC_AHB1ENR.B.GPIOH = x)
#define MM32_RCC_EnableGPIOI(x) (RCC_AHB1ENR.B.GPIOI = x)
#define MM32_RCC_EnableCRC(x) (RCC_AHB1ENR.B.CRC = x)
#define MM32_RCC_EnableFLASH(x) (RCC_AHB1ENR.B.FLASH = x)
#define MM32_RCC_EnableSRAM(x) (RCC_AHB1ENR.B.SRAM = x)
#define MM32_RCC_EnableCORDIC(x) (RCC_AHB1ENR.B.CORDIC = x)
#define MM32_RCC_EnableITCM(x) (RCC_AHB1ENR.B.ITCM = x)
#define MM32_RCC_EnableDTCM(x) (RCC_AHB1ENR.B.DTCM = x)
#define MM32_RCC_EnableENET(x) (RCC_AHB1ENR.B.ENET = x)
#define MM32_RCC_EnableDMA1(x) (RCC_AHB1ENR.B.DMA1 = x)
#define MM32_RCC_EnableDMA2(x) (RCC_AHB1ENR.B.DMA2 = x)
#define MM32_RCC_EnableUSB(x) (RCC_AHB1ENR.B.USBOTGFS = x)
#define MM32_RCC_EnableFSMC(x) (RCC_AHB1ENR.B.FSMC = x)
#define MM32_RCC_EnableQSPI(x) (RCC_AHB1ENR.B.QSPI = x)

#define MM32_RCC_EnableTIM1(x) (RCC_APB2ENR.B.TIM1 = x)
#define MM32_RCC_EnableTIM8(x) (RCC_APB2ENR.B.TIM8 = x)
#define MM32_RCC_EnableUART1(x) (RCC_APB2ENR.B.UART1 = x)
#define MM32_RCC_EnableUART6(x) (RCC_APB2ENR.B.UART6 = x)
#define MM32_RCC_EnableADC1(x) (RCC_APB2ENR.B.ADC1 = x)
#define MM32_RCC_EnableADC2(x) (RCC_APB2ENR.B.ADC2 = x)
#define MM32_RCC_EnableSPI1(x) (RCC_APB2ENR.B.SPI1 = x)
#define MM32_RCC_EnableSYSCFG(x) (RCC_APB2ENR.B.SYSCFG = x)
#define MM32_RCC_EnableCOMP(x) (RCC_APB2ENR.B.COMP = x)
#define MM32_RCC_EnableFLEXCAN2(x) (RCC_APB2ENR.B.FLEXCAN2 = x)
#define MM32_RCC_EnableMDS(x) (RCC_APB2ENR.B.MINDSWITCH = x)
#define MM32_RCC_EnableLPTIM(x) (RCC_APB2ENR.B.LPTIM = x)
#define MM32_RCC_EnableLPUART(x) (RCC_APB2ENR.B.LPUART = x)

#define MM32_RCC_EnableTIM2(x) (RCC_APB1ENR.B.TIM2 = x)
#define MM32_RCC_EnableTIM3(x) (RCC_APB1ENR.B.TIM3 = x)
#define MM32_RCC_EnableTIM4(x) (RCC_APB1ENR.B.TIM4 = x)
#define MM32_RCC_EnableTIM5(x) (RCC_APB1ENR.B.TIM5 = x)
#define MM32_RCC_EnableTIM6(x) (RCC_APB1ENR.B.TIM6 = x)
#define MM32_RCC_EnableTIM7(x) (RCC_APB1ENR.B.TIM7 = x)
#define MM32_RCC_EnableWWDG(x) (RCC_APB1ENR.B.WWDG = x)
#define MM32_RCC_EnableSPI2(x) (RCC_APB1ENR.B.SPI2 = x)
#define MM32_RCC_EnableSPI3(x) (RCC_APB1ENR.B.SPI3 = x)
#define MM32_RCC_EnableUART2(x) (RCC_APB1ENR.B.UART2 = x)
#define MM32_RCC_EnableUART3(x) (RCC_APB1ENR.B.UART3 = x)
#define MM32_RCC_EnableUART4(x) (RCC_APB1ENR.B.UART4 = x)
#define MM32_RCC_EnableUART5(x) (RCC_APB1ENR.B.UART5 = x)
#define MM32_RCC_EnableI2C1(x) (RCC_APB1ENR.B.I2C1 = x)
#define MM32_RCC_EnableI2C2(x) (RCC_APB1ENR.B.I2C2 = x)
#define MM32_RCC_EnableCRS(x) (RCC_APB1ENR.B.CRS = x)
#define MM32_RCC_EnableFLEXCAN1(x) (RCC_APB1ENR.B.FLEXCAN1 = x)
#define MM32_RCC_EnableBKP(x) (RCC_APB1ENR.B.BKP = x)
#define MM32_RCC_EnablePWR_DBG(x) (RCC_APB1ENR.B.PWR_DBG = x)
#define MM32_RCC_EnableDAC(x) (RCC_APB1ENR.B.DAC = x)
#define MM32_RCC_EnableUART7(x) (RCC_APB1ENR.B.UART7 = x)

/**
 * @brief ADC clock config
 * @note PRECAL
 *       时钟分频配置（频率范围 187.5k~1.5M）
 *       PCLK2/（PRECAL+2），要求 PRECAL 为偶数，使占空比 50%。
 * @note PRE
 *       预分频（频率范围 15M~48M）
 *       由软件置 1 或清 0 来确定 ADC 时钟频率。
 *       PCLK2/（PRE+2），要求 PRE 为偶数，使占空比 50%。
 */
#define MM32_RCC_SetADC1PRECAL(x)  (RCC_ADC1CFGR.B.PRECAL = x)
#define MM32_RCC_SetADC1PRE(x)  (RCC_ADC1CFGR.B.PRE = x)
#define MM32_RCC_SetADC2PRECAL(x)  (RCC_ADC2CFGR.B.PRECAL = x)
#define MM32_RCC_SetADC2PRE(x)  (RCC_ADC2CFGR.B.PRE = x)

/**
 * @brief DAC clock config
 * @note DAC 预分频
 *       PCLK1/2*（n+1） 分频后作为 DAC 时钟。
 */
#define MM32_RCC_SetDACPRE(x) (RCC_DACCFGR.B.PRE = x)

/**
 * @brief TPIU clock config
 * @note TPIU 预分频
 *       00：不分频
 *       01：2 分频
 *       10：3 分频
 *       11：4 分频
 */
#define MM32_RCC_SetTPIUPRE(x) (RCC_TPIUCFGR.B.PRE = x)

#endif

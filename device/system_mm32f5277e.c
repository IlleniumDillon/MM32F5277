/*
 * @Author: IlleniumDillon 147900130@qq.com
 * @Date: 2023-02-28 19:32:23
 * @LastEditors: IlleniumDillon 147900130@qq.com
 * @LastEditTime: 2023-03-27 17:34:23
 * @FilePath: \buildd:\ARMFPGA\MM32F5277_Keil\device\system_mm32f5277e.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "common.h"
#include "system_mm32f5277e.h"
#include "MM32_Registers.h"
#include "MM32_RCC.h"

#if defined (__VTOR_PRESENT) && (__VTOR_PRESENT == 1U)
  extern uint32_t __VECTOR_TABLE;
#endif

void SystemInit(void)
{

#if defined (__FPU_PRESENT ) && (__FPU_PRESENT == 1U)
  #if defined(__FPU_USED) && (__FPU_USED == 1u)
    SCB->CPACR |= (SCB_CPACR_CP10_MASK | SCB_CPACR_CP11_MASK); /* set CP10, CP11 Full Access */
  #endif
#endif /* __FPU_PRESENT */

#if defined (__ICACHE_PRESENT )&& (__ICACHE_PRESENT == 1U)
#ifndef ICACHE_DISABLED
  if (SCB->CLIDR & SCB_CLIDR_IC_Msk)
  {
    SCB_EnableICache();
  }
#endif /* DCACHE_DISABLED */

#endif /* __ICACHE_PRESENT */
#if defined (__DCACHE_PRESENT) && (__DCACHE_PRESENT == 1U)
#ifndef DCACHE_DISABLED
  if (SCB->CLIDR & SCB_CLIDR_IC_Msk)
  {
    SCB_EnableDCache();
  }
#endif /* DCACHE_DISABLED */
#endif /* __DCACHE_PRESENT */

  HighSpeedClockInit();
  EnablePeripherals();
  RealTimeClockInit();
  NVICInit();
}

void DefaultClockInit(void)
{
  RCC_CR.B.HSION = 1;
	while(RCC_CR.B.HSIRDY!=1);
	RCC_CFGR.B.SW = 0;
	while(RCC_CFGR.B.SWS!=0);
	
	RCC_CR.U = 1;
	
	RCC_CIR.U = RCC_CIR.U;
	RCC_CIR.U = 0;
	
	//RealTimeClockInit();
}

void HighSpeedClockInit(void)
{
  DefaultClockInit();
	RCC_APB1ENR.B.PWR_DBG = 1;
	PWR_CR1.B.VOS = 3;
	
	RCC_CR.B.HSEON = 1;
	while(RCC_CR.B.HSERDY!=1);
	
	RCC_PLL1CFGR.B.PLL1SRC = 1;
	RCC_PLL1CFGR.B.PLL1XTPRE = 0;
	RCC_PLL1CFGR.B.PLL1MUL = 29;
	RCC_PLL1CFGR.B.PLL1DIV = 1;
	RCC_PLL1CFGR.B.PLL1_LDS = 1;
	RCC_PLL1CFGR.B.PLL1_ICTRL = 3;
	RCC_CR.B.PLL1ON = 1;
	while(RCC_CR.B.PLL1RDY!=1);//120M
	
	RCC_AHB1ENR.B.FLASH = 1;
	FLASH_ACR.B.LATENCY = 4;
	
	RCC_CFGR.B.SW = 2;
	while(RCC_CFGR.B.SWS!=2);	

	RCC_PLL2CFGR.B.PLL2_DIV = 1;
	RCC_PLL2CFGR.B.PLL2_ICTRL = 3;
	RCC_PLL2CFGR.B.PLL2_LDS = 1;
	RCC_PLL2CFGR.B.PLL2_MUL = 23;
	RCC_PLL2CFGR.B.PLL2_PDIV = 0;
	RCC_PLL2CFGR.B.PLL2SRC = 1;
	RCC_CR.B.PLL2ON = 1;
	while(RCC_CR.B.PLL2RDY!=1);//96M

	RCC_CFGR.B.ADC1CLKSEL = 1;
	RCC_CFGR.B.ADC2CLKSEL = 1;
	RCC_CFGR.B.USBCLKSEL = 1;
	RCC_CFGR.B.USBPRE = 1;

	RCC_ADC1CFGR.B.PRE = 0;
	RCC_ADC1CFGR.B.PRE_CAL = 62;
	RCC_ADC2CFGR.B.PRE = 0;
	RCC_ADC2CFGR.B.PRE_CAL = 62;

	RCC_DACCFGR.B.PRE = 59;
}

void RealTimeClockInit(void)
{
  RCC_BDCR.B.DBP = 1;
  RCC_BDCR.B.LSEON = 1;
  while(RCC_BDCR.B.LSERDY!=1);
  RCC_BDCR.B.RTCSEL = 1;
	RCC_BDCR.B.RTCEN = 1;

  while(RTC_CRL.B.RTOFF != 1);
  RTC_CRL.B.CNF = 1;
  RTC_PRLH.B.PRL = 0;
  RTC_PRLL.B.PRL = 31;
	RTC_CRL.B.CNF = 0;
//	while(RTC_CRL.B.RTOFF != 1);
//  delayms(50);
//	RTC_CRL.B.CNF = 1;
//  delayms(50);
//  RTC_CNTH.B.CNT = 0;
//  delayms(50);
//  RTC_CNTL.B.CNT = 0;
//  delayms(50);
//  RTC_CRL.B.CNF = 0;

  
}

void EnablePeripherals(void)
{
  MM32_RCC_EnableGPIOA(1);
  MM32_RCC_EnableGPIOB(1);
  MM32_RCC_EnableGPIOC(1);
  MM32_RCC_EnableGPIOD(1);
  MM32_RCC_EnableGPIOE(1);
  MM32_RCC_EnableGPIOF(1);
  MM32_RCC_EnableGPIOG(1);
  MM32_RCC_EnableGPIOH(1);
  MM32_RCC_EnableGPIOI(1);
  MM32_RCC_EnableCRC(1);
  MM32_RCC_EnableFLASH(1);
  MM32_RCC_EnableSRAM(1);
  MM32_RCC_EnableCORDIC(1);
  MM32_RCC_EnableITCM(1);
  MM32_RCC_EnableDTCM(1);
  MM32_RCC_EnableENET(1);
  MM32_RCC_EnableDMA1(1);
  MM32_RCC_EnableDMA2(1);
  MM32_RCC_EnableUSB(1);
  MM32_RCC_EnableFSMC(1);
  MM32_RCC_EnableQSPI(1);

  MM32_RCC_EnableTIM1(1);
  MM32_RCC_EnableTIM8(1);
  MM32_RCC_EnableUART1(1);
  MM32_RCC_EnableUART6(1);
  MM32_RCC_EnableADC1(1);
  MM32_RCC_EnableADC2(1);
  MM32_RCC_EnableSPI1(1);
  MM32_RCC_EnableSYSCFG(1);
  MM32_RCC_EnableCOMP(1);
  MM32_RCC_EnableFLEXCAN2(1);
  MM32_RCC_EnableMDS(1);
  MM32_RCC_EnableLPTIM(1);
  MM32_RCC_EnableLPUART(1);

  MM32_RCC_EnableTIM2(1);
  MM32_RCC_EnableTIM3(1);
  MM32_RCC_EnableTIM4(1);
  MM32_RCC_EnableTIM5(1);
  MM32_RCC_EnableTIM6(1);
  MM32_RCC_EnableTIM7(1);
  MM32_RCC_EnableWWDG(1);
  MM32_RCC_EnableSPI2(1);
  MM32_RCC_EnableSPI3(1);
  MM32_RCC_EnableUART2(1);
  MM32_RCC_EnableUART3(1);
  MM32_RCC_EnableUART4(1);
  MM32_RCC_EnableUART5(1);
  MM32_RCC_EnableI2C1(1);
  MM32_RCC_EnableI2C2(1);
  MM32_RCC_EnableCRS(1);
  MM32_RCC_EnableFLEXCAN1(1);
  MM32_RCC_EnableBKP(1);
  MM32_RCC_EnablePWR_DBG(1);
  MM32_RCC_EnableDAC(1);
  MM32_RCC_EnableUART7(1);
}

void NVICInit(void)
{
  __disable_irq;
	NVIC_SetPriority(TIM6_IRQn,0);
  NVIC_EnableIRQ(TIM6_IRQn);
	NVIC_SetPriority(UART2_IRQn,1);
  NVIC_EnableIRQ(UART2_IRQn);
	NVIC_SetPriority(TIM7_IRQn,2);
	NVIC_EnableIRQ(TIM7_IRQn);
}

/* EOF. */

#ifndef _MM32_RCCREGDEF_H_
#define _MM32_RCCREGDEF_H_

#include "MM32_RegTypedef.h"
//clock control register
typedef struct
{
	Strict_32Bit HSION			:1;
	Strict_32Bit HSIRDY			:1;
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit HSE_LPF_BYP			:1;
	Strict_32Bit HSE_LPF_SEL			:1;
	Strict_32Bit HSE_DEGLITCH_BYP			:1;
	Strict_32Bit HSE_DEGLITCH_SEL			:1;
	Strict_32Bit HSE_OUTPUTSEL			:1;
	Strict_32Bit HSE_DR			:2;
	Strict_32Bit HSIDIV			:3;
	Strict_32Bit _reserved_1			:2;
	Strict_32Bit HSEON			:1;
	Strict_32Bit HSERDY			:1;
	Strict_32Bit HSEBYP			:1;
	Strict_32Bit CSSON			:1;
	Strict_32Bit _reserved_2			:1;
	Strict_32Bit HSE_AACSEL			:1;
	Strict_32Bit HSE_IB			:2;
	Strict_32Bit PLL1ON			:1;
	Strict_32Bit PLL1RDY			:1;
	Strict_32Bit _reserved_3			:2;
	Strict_32Bit PLL2ON			:1;
	Strict_32Bit PLL2RDY			:1;
	Strict_32Bit _reserved_4			:2;
}MM32_RCC_CRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_RCC_CRBits B;
}MM32_RCC_CR;

//Clock Configuration Register
typedef struct
{
	Strict_32Bit SW			:2;
	Strict_32Bit SWS			:2;
	Strict_32Bit HPRE			:4;
	Strict_32Bit PPRE1			:3;
	Strict_32Bit PPRE2			:3;
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit ADC1CLKSEL			:1;
	Strict_32Bit ADC2CLKSEL			:1;
	Strict_32Bit _reserved_1			:1;
	Strict_32Bit USBCLKSEL			:1;
	Strict_32Bit _reserved_2			:2;
	Strict_32Bit USBPRE			:2;
	Strict_32Bit MCO			:4;
	Strict_32Bit _reserved_3			:4;
}MM32_RCC_CFGRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_RCC_CFGRBits B;
}MM32_RCC_CFGR;

//clock interrupt register
typedef struct
{
	Strict_32Bit LSIRDYF			:1;
	Strict_32Bit LSERDYF			:1;
	Strict_32Bit HSIRDYF			:1;
	Strict_32Bit HSERDYF			:1;
	Strict_32Bit PLL1RDYF			:1;
	Strict_32Bit PLL2RDYF			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit CSSF			:1;
	Strict_32Bit LSIRDYIE			:1;
	Strict_32Bit LSERDYIE			:1;
	Strict_32Bit HSIRDYIE			:1;
	Strict_32Bit HSERDYIE			:1;
	Strict_32Bit PLL1RDYIE			:1;
	Strict_32Bit PLL2RDYIE			:1;
	Strict_32Bit _reserved_1			:2;
	Strict_32Bit LSIRDYC			:1;
	Strict_32Bit LSERDYC			:1;
	Strict_32Bit HSIRDYC			:1;
	Strict_32Bit HSERDYC			:1;
	Strict_32Bit PLL1RDYC			:1;
	Strict_32Bit PLL2RDYC			:1;
	Strict_32Bit _reserved_2			:1;
	Strict_32Bit CSSC			:1;
	Strict_32Bit _reserved_3			:8;
}MM32_RCC_CIRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_RCC_CIRBits B;
}MM32_RCC_CIR;

//AHB1 Peripheral Reset Register
typedef struct
{
	Strict_32Bit GPIOA			:1;
	Strict_32Bit GPIOB			:1;
	Strict_32Bit GPIOC			:1;
	Strict_32Bit GPIOD			:1;
	Strict_32Bit GPIOE			:1;
	Strict_32Bit GPIOF			:1;
	Strict_32Bit GPIOG			:1;
	Strict_32Bit GPIOH			:1;
	Strict_32Bit GPIOI			:1;
	Strict_32Bit _reserved_0			:3;
	Strict_32Bit CRC			:1;
	Strict_32Bit _reserved_1			:2;
	Strict_32Bit CORDIC			:1;
	Strict_32Bit _reserved_2			:3;
	Strict_32Bit ENET			:1;
	Strict_32Bit _reserved_3			:1;
	Strict_32Bit DMA1			:1;
	Strict_32Bit DMA2			:1;
	Strict_32Bit _reserved_4			:1;
	Strict_32Bit USBFS			:1;
	Strict_32Bit _reserved_5			:3;
	Strict_32Bit FSMC			:1;
	Strict_32Bit _reserved_6			:1;
	Strict_32Bit QSPI			:1;
	Strict_32Bit _reserved_7			:1;
}MM32_RCC_AHB1RSTRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_RCC_AHB1RSTRBits B;
}MM32_RCC_AHB1RSTR;

//APB2 Peripheral Reset Register
typedef struct
{
	Strict_32Bit TIM1			:1;
	Strict_32Bit TIM8			:1;
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit UART1			:1;
	Strict_32Bit UART6			:1;
	Strict_32Bit _reserved_1			:2;
	Strict_32Bit ADC1			:1;
	Strict_32Bit ADC2			:1;
	Strict_32Bit _reserved_2			:2;
	Strict_32Bit SPI1			:1;
	Strict_32Bit _reserved_3			:1;
	Strict_32Bit SYSCFG			:1;
	Strict_32Bit COMP			:1;
	Strict_32Bit _reserved_4			:8;
	Strict_32Bit FLEXCAN2			:1;
	Strict_32Bit _reserved_5			:3;
	Strict_32Bit MINDSWITCH			:1;
	Strict_32Bit _reserved_6			:1;
	Strict_32Bit LPTIM			:1;
	Strict_32Bit LPUART			:1;
}MM32_RCC_APB2RSTRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_RCC_APB2RSTRBits B;
}MM32_RCC_APB2RSTR;

//APB1 Peripheral Reset Register
typedef struct
{
	Strict_32Bit TIM2			:1;
	Strict_32Bit TIM3			:1;
	Strict_32Bit TIM4			:1;
	Strict_32Bit TIM5			:1;
	Strict_32Bit TIM6			:1;
	Strict_32Bit TIM7			:1;
	Strict_32Bit _reserved_0			:5;
	Strict_32Bit WWDG			:1;
	Strict_32Bit _reserved_1			:2;
	Strict_32Bit SPI2			:1;
	Strict_32Bit SPI3			:1;
	Strict_32Bit _reserved_2			:1;
	Strict_32Bit UART2			:1;
	Strict_32Bit UART3			:1;
	Strict_32Bit UART4			:1;
	Strict_32Bit UART5			:1;
	Strict_32Bit I2C1			:1;
	Strict_32Bit I2C2			:1;
	Strict_32Bit _reserved_3			:1;
	Strict_32Bit CRS			:1;
	Strict_32Bit FLEXCAN1			:1;
	Strict_32Bit DBG			:1;
	Strict_32Bit BKP			:1;
	Strict_32Bit PWR			:1;
	Strict_32Bit DAC			:1;
	Strict_32Bit UART7			:1;
	Strict_32Bit _reserved_4			:1;
}MM32_RCC_APB1RSTRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_RCC_APB1RSTRBits B;
}MM32_RCC_APB1RSTR;

//AHB1 peripheral clock enable register
typedef struct
{
	Strict_32Bit GPIOA			:1;
	Strict_32Bit GPIOB			:1;
	Strict_32Bit GPIOC			:1;
	Strict_32Bit GPIOD			:1;
	Strict_32Bit GPIOE			:1;
	Strict_32Bit GPIOF			:1;
	Strict_32Bit GPIOG			:1;
	Strict_32Bit GPIOH			:1;
	Strict_32Bit GPIOI			:1;
	Strict_32Bit _reserved_0			:3;
	Strict_32Bit CRC			:1;
	Strict_32Bit FLASH			:1;
	Strict_32Bit SRAM			:1;
	Strict_32Bit CORDIC			:1;
	Strict_32Bit ITCM			:1;
	Strict_32Bit DTCM			:1;
	Strict_32Bit _reserved_1			:1;
	Strict_32Bit ENET			:1;
	Strict_32Bit _reserved_2			:1;
	Strict_32Bit DMA1			:1;
	Strict_32Bit DMA2			:1;
	Strict_32Bit _reserved_3			:1;
	Strict_32Bit USBOTGFS			:1;
	Strict_32Bit _reserved_4			:3;
	Strict_32Bit FSMC			:1;
	Strict_32Bit _reserved_5			:1;
	Strict_32Bit QSPI			:1;
	Strict_32Bit _reserved_6			:1;
}MM32_RCC_AHB1ENRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_RCC_AHB1ENRBits B;
}MM32_RCC_AHB1ENR;

//APB2 Peripheral Clock Enable Register
typedef struct
{
	Strict_32Bit TIM1			:1;
	Strict_32Bit TIM8			:1;
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit UART1			:1;
	Strict_32Bit UART6			:1;
	Strict_32Bit _reserved_1			:2;
	Strict_32Bit ADC1			:1;
	Strict_32Bit ADC2			:1;
	Strict_32Bit _reserved_2			:2;
	Strict_32Bit SPI1			:1;
	Strict_32Bit _reserved_3			:1;
	Strict_32Bit SYSCFG			:1;
	Strict_32Bit COMP			:1;
	Strict_32Bit _reserved_4			:8;
	Strict_32Bit FLEXCAN2			:1;
	Strict_32Bit _reserved_5			:3;
	Strict_32Bit MINDSWITCH			:1;
	Strict_32Bit _reserved_6			:1;
	Strict_32Bit LPTIM			:1;
	Strict_32Bit LPUART			:1;
}MM32_RCC_APB2ENRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_RCC_APB2ENRBits B;
}MM32_RCC_APB2ENR;

//APB1 Peripheral Clock Enable Register
typedef struct
{
	Strict_32Bit TIM2			:1;
	Strict_32Bit TIM3			:1;
	Strict_32Bit TIM4			:1;
	Strict_32Bit TIM5			:1;
	Strict_32Bit TIM6			:1;
	Strict_32Bit TIM7			:1;
	Strict_32Bit _reserved_0			:5;
	Strict_32Bit WWDG			:1;
	Strict_32Bit _reserved_1			:2;
	Strict_32Bit SPI2			:1;
	Strict_32Bit SPI3			:1;
	Strict_32Bit _reserved_2			:1;
	Strict_32Bit UART2			:1;
	Strict_32Bit UART3			:1;
	Strict_32Bit UART4			:1;
	Strict_32Bit UART5			:1;
	Strict_32Bit I2C1			:1;
	Strict_32Bit I2C2			:1;
	Strict_32Bit _reserved_3			:1;
	Strict_32Bit CRS			:1;
	Strict_32Bit FLEXCAN1			:1;
	Strict_32Bit _reserved_4			:1;
	Strict_32Bit BKP			:1;
	Strict_32Bit PWR_DBG			:1;
	Strict_32Bit DAC			:1;
	Strict_32Bit UART7			:1;
	Strict_32Bit _reserved_5			:1;
}MM32_RCC_APB1ENRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_RCC_APB1ENRBits B;
}MM32_RCC_APB1ENR;

//Backup Domain Control Register
typedef struct
{
	Strict_32Bit LSEON			:1;
	Strict_32Bit LSERDY			:1;
	Strict_32Bit LSEBYP			:1;
	Strict_32Bit _reserved_0			:5;
	Strict_32Bit RTCSEL			:2;
	Strict_32Bit _reserved_1			:5;
	Strict_32Bit RTCEN			:1;
	Strict_32Bit BDRST			:1;
	Strict_32Bit _reserved_2			:7;
	Strict_32Bit DBP			:1;
	Strict_32Bit _reserved_3			:7;
}MM32_RCC_BDCRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_RCC_BDCRBits B;
}MM32_RCC_BDCR;

//Control Status Register
typedef struct
{
	Strict_32Bit LSION			:1;
	Strict_32Bit LSIRDY			:1;
	Strict_32Bit _reserved_0			:3;
	Strict_32Bit LSI_OE			:1;
	Strict_32Bit PVDRSTEN			:1;
	Strict_32Bit LOCKUPEN			:1;
	Strict_32Bit _reserved_1			:14;
	Strict_32Bit PVDRSTF			:1;
	Strict_32Bit LOCKUPF			:1;
	Strict_32Bit RMVF			:1;
	Strict_32Bit _reserved_2			:1;
	Strict_32Bit PINRSTF			:1;
	Strict_32Bit PORRSTF			:1;
	Strict_32Bit SFTRSTF			:1;
	Strict_32Bit IWDGRSTF			:1;
	Strict_32Bit WWDGRSTF			:1;
	Strict_32Bit LPWRRSTF			:1;
}MM32_RCC_CSRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_RCC_CSRBits B;
}MM32_RCC_CSR;

//System Configuration Register
typedef struct
{
	Strict_32Bit PROG_CHECK_EN			:1;
	Strict_32Bit SECTOR_1K_CFG			:1;
	Strict_32Bit _reserved_0			:6;
	Strict_32Bit HSE_RFB_SEL			:2;
	Strict_32Bit _reserved_1			:4;
	Strict_32Bit HSELPFEN			:1;
	Strict_32Bit _reserved_2			:17;
}MM32_RCC_SYSCFGBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_RCC_SYSCFGBits B;
}MM32_RCC_SYSCFG;

//Clock Configuration Register 2
typedef struct
{
	Strict_32Bit TIMADV_CKSEL			:1;
	Strict_32Bit TIMADV_PRE			:3;
	Strict_32Bit _reserved_0			:12;
	Strict_32Bit APB1_CLK_HV_PRE			:4;
	Strict_32Bit MCO_PRE			:4;
	Strict_32Bit _reserved_1			:2;
	Strict_32Bit LPUARTCLKSEL			:2;
	Strict_32Bit _reserved_2			:1;
	Strict_32Bit LPTIMCLKSEL			:2;
	Strict_32Bit _reserved_3			:1;
}MM32_RCC_CFGR2Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_RCC_CFGR2Bits B;
}MM32_RCC_CFGR2;

//PLL1 Configuration Register
typedef struct
{
	Strict_32Bit PLL1SRC			:1;
	Strict_32Bit PLL1XTPRE			:1;
	Strict_32Bit PLL1_ICTRL			:2;
	Strict_32Bit PLL1_LDS			:3;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit PLL1DIV			:3;
	Strict_32Bit _reserved_1			:5;
	Strict_32Bit PLL1MUL			:7;
	Strict_32Bit _reserved_2			:9;
}MM32_RCC_PLL1CFGRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_RCC_PLL1CFGRBits B;
}MM32_RCC_PLL1CFGR;

//PLL2 Configuration Register
typedef struct
{
	Strict_32Bit PLL2SRC			:1;
	Strict_32Bit PLL2XTPRE			:1;
	Strict_32Bit PLL2_ICTRL			:2;
	Strict_32Bit PLL2_LDS			:3;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit PLL2_DIV			:3;
	Strict_32Bit _reserved_1			:5;
	Strict_32Bit PLL2_MUL			:8;
	Strict_32Bit PLL2_PDIV			:3;
	Strict_32Bit _reserved_2			:5;
}MM32_RCC_PLL2CFGRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_RCC_PLL2CFGRBits B;
}MM32_RCC_PLL2CFGR;

//ADC1 Configuration Register
typedef struct
{
	Strict_32Bit PRE			:4;
	Strict_32Bit _reserved_0			:4;
	Strict_32Bit PRE_CAL			:9;
	Strict_32Bit _reserved_1			:15;
}MM32_RCC_ADC1CFGRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_RCC_ADC1CFGRBits B;
}MM32_RCC_ADC1CFGR;

//ADC2 Configuration Register
typedef struct
{
	Strict_32Bit PRE			:4;
	Strict_32Bit _reserved_0			:4;
	Strict_32Bit PRE_CAL			:9;
	Strict_32Bit _reserved_1			:15;
}MM32_RCC_ADC2CFGRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_RCC_ADC2CFGRBits B;
}MM32_RCC_ADC2CFGR;

//DAC Configuration Register
typedef struct
{
	Strict_32Bit PRE			:7;
	Strict_32Bit _reserved_0			:25;
}MM32_RCC_DACCFGRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_RCC_DACCFGRBits B;
}MM32_RCC_DACCFGR;

//FSMC Configuration Register
typedef struct
{
	Strict_32Bit FSMC_PRE			:5;
	Strict_32Bit _reserved_0			:3;
	Strict_32Bit FSMC_SYNCEN			:1;
	Strict_32Bit _reserved_1			:23;
}MM32_RCC_FSMCCFGRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_RCC_FSMCCFGRBits B;
}MM32_RCC_FSMCCFGR;

//TPIU configuration register
typedef struct
{
	Strict_32Bit PRE			:2;
	Strict_32Bit _reserved_0			:30;
}MM32_RCC_TPIUCFGRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_RCC_TPIUCFGRBits B;
}MM32_RCC_TPIUCFGR;


#endif

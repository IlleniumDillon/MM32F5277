#ifndef _MM32_RCCREG_H_
#define _MM32_RCCREG_H_

#include "MM32_RCCRegdef.h"

//clock control register
#define	RCC_CR		(*(MM32_RCC_CR*)(0x40021000+0x00))

//Clock Configuration Register
#define	RCC_CFGR		(*(MM32_RCC_CFGR*)(0x40021000+0x04))

//clock interrupt register
#define	RCC_CIR		(*(MM32_RCC_CIR*)(0x40021000+0x08))

//AHB1 Peripheral Reset Register
#define	RCC_AHB1RSTR		(*(MM32_RCC_AHB1RSTR*)(0x40021000+0x14))

//APB2 Peripheral Reset Register
#define	RCC_APB2RSTR		(*(MM32_RCC_APB2RSTR*)(0x40021000+0x18))

//APB1 Peripheral Reset Register
#define	RCC_APB1RSTR		(*(MM32_RCC_APB1RSTR*)(0x40021000+0x1C))

//AHB1 peripheral clock enable register
#define	RCC_AHB1ENR		(*(MM32_RCC_AHB1ENR*)(0x40021000+0x28))

//APB2 Peripheral Clock Enable Register
#define	RCC_APB2ENR		(*(MM32_RCC_APB2ENR*)(0x40021000+0x2C))

//APB1 Peripheral Clock Enable Register
#define	RCC_APB1ENR		(*(MM32_RCC_APB1ENR*)(0x40021000+0x30))

//Backup Domain Control Register
#define	RCC_BDCR		(*(MM32_RCC_BDCR*)(0x40021000+0x34))

//Control Status Register
#define	RCC_CSR		(*(MM32_RCC_CSR*)(0x40021000+0x38))

//System Configuration Register
#define	RCC_SYSCFG		(*(MM32_RCC_SYSCFG*)(0x40021000+0x3C))

//Clock Configuration Register 2
#define	RCC_CFGR2		(*(MM32_RCC_CFGR2*)(0x40021000+0x40))

//PLL1 Configuration Register
#define	RCC_PLL1CFGR		(*(MM32_RCC_PLL1CFGR*)(0x40021000+0x48))

//PLL2 Configuration Register
#define	RCC_PLL2CFGR		(*(MM32_RCC_PLL2CFGR*)(0x40021000+0x4C))

//ADC1 Configuration Register
#define	RCC_ADC1CFGR		(*(MM32_RCC_ADC1CFGR*)(0x40021000+0x60))

//ADC2 Configuration Register
#define	RCC_ADC2CFGR		(*(MM32_RCC_ADC2CFGR*)(0x40021000+0x64))

//DAC Configuration Register
#define	RCC_DACCFGR		(*(MM32_RCC_DACCFGR*)(0x40021000+0x70))

//FSMC Configuration Register
#define	RCC_FSMCCFGR		(*(MM32_RCC_FSMCCFGR*)(0x40021000+0x78))

//TPIU configuration register
#define	RCC_TPIUCFGR		(*(MM32_RCC_TPIUCFGR*)(0x40021000+0x7C))


#endif

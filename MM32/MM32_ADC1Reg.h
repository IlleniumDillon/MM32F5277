#ifndef _MM32_ADC1REG_H_
#define _MM32_ADC1REG_H_

#include "MM32_ADC1Regdef.h"

//A/D data register
#define	ADC1_ADDATA		(*(MM32_ADC1_ADDATA*)(0x40012400+0x00))

//A/D Configuration Register
#define	ADC1_ADCFG		(*(MM32_ADC1_ADCFG*)(0x40012400+0x04))

//A/D Control Register
#define	ADC1_ADCR		(*(MM32_ADC1_ADCR*)(0x40012400+0x08))

//A/D Channel Select Register
#define	ADC1_ADCHS		(*(MM32_ADC1_ADCHS*)(0x40012400+0x0C))

//A/D Analog Watchdog Compare Register
#define	ADC1_ADCMPR		(*(MM32_ADC1_ADCMPR*)(0x40012400+0x10))

//A/D Status Register
#define	ADC1_ADSTA		(*(MM32_ADC1_ADSTA*)(0x40012400+0x14))

//A/D Channel Data Register
#define	ADC1_ADDR0		(*(MM32_ADC1_ADDR0*)(0x40012400+0x18))

//A/D Channel Data Register
#define	ADC1_ADDR1		(*(MM32_ADC1_ADDR1*)(0x40012400+0x1c))

//A/D Channel Data Register
#define	ADC1_ADDR2		(*(MM32_ADC1_ADDR2*)(0x40012400+0x20))

//A/D Channel Data Register
#define	ADC1_ADDR3		(*(MM32_ADC1_ADDR3*)(0x40012400+0x24))

//A/D Channel Data Register
#define	ADC1_ADDR4		(*(MM32_ADC1_ADDR4*)(0x40012400+0x28))

//A/D Channel Data Register
#define	ADC1_ADDR5		(*(MM32_ADC1_ADDR5*)(0x40012400+0x2C))

//A/D Channel Data Register
#define	ADC1_ADDR6		(*(MM32_ADC1_ADDR6*)(0x40012400+0x30))

//A/D Channel Data Register
#define	ADC1_ADDR7		(*(MM32_ADC1_ADDR7*)(0x40012400+0x34))

//A/D Channel Data Register
#define	ADC1_ADDR8		(*(MM32_ADC1_ADDR8*)(0x40012400+0x38))

//A/D Channel Data Register
#define	ADC1_ADDR9		(*(MM32_ADC1_ADDR9*)(0x40012400+0x3C))

//A/D Channel Data Register
#define	ADC1_ADDR10		(*(MM32_ADC1_ADDR10*)(0x40012400+0x40))

//A/D Channel Data Register
#define	ADC1_ADDR11		(*(MM32_ADC1_ADDR11*)(0x40012400+0x44))

//A/D Channel Data Register
#define	ADC1_ADDR12		(*(MM32_ADC1_ADDR12*)(0x40012400+0x48))

//A/D Channel Data Register
#define	ADC1_ADDR13		(*(MM32_ADC1_ADDR13*)(0x40012400+0x4c))

//A/D Channel Data Register
#define	ADC1_ADDR14		(*(MM32_ADC1_ADDR14*)(0x40012400+0x50))

//A/D Channel Data Register
#define	ADC1_ADDR15		(*(MM32_ADC1_ADDR15*)(0x40012400+0x54))

//A/D Extended Status Register
#define	ADC1_ADSTA_EXT		(*(MM32_ADC1_ADSTA_EXT*)(0x40012400+0x58))

//A/D any channel channel select register 0
#define	ADC1_CHANY0		(*(MM32_ADC1_CHANY0*)(0x40012400+0x5C))

//A/D arbitrary channel channel selection register 1
#define	ADC1_CHANY1		(*(MM32_ADC1_CHANY1*)(0x40012400+0x60))

//A/D Arbitrary Channel Configuration Register
#define	ADC1_ANY_CFG		(*(MM32_ADC1_ANY_CFG*)(0x40012400+0x64))

//A/D arbitrary channel control register
#define	ADC1_ANY_CR		(*(MM32_ADC1_ANY_CR*)(0x40012400+0x68))

//ADC Configuration Register
#define	ADC1_ADCFG2		(*(MM32_ADC1_ADCFG2*)(0x40012400+0x6C))

//A/D Sampling Configuration Register 1
#define	ADC1_SMPR1		(*(MM32_ADC1_SMPR1*)(0x40012400+0x70))

//A/D Sampling Configuration Register 2
#define	ADC1_SMPR2		(*(MM32_ADC1_SMPR2*)(0x40012400+0x74))

//A/D Injection Channel Data Compensation Register
#define	ADC1_JOFR0		(*(MM32_ADC1_JOFR0*)(0x40012400+0x7C))

//A/D Injection Channel Data Compensation Register
#define	ADC1_JOFR1		(*(MM32_ADC1_JOFR1*)(0x40012400+0x80))

//A/D Injection Channel Data Compensation Register
#define	ADC1_JOFR2		(*(MM32_ADC1_JOFR2*)(0x40012400+0x84))

//A/D Injection Channel Data Compensation Register
#define	ADC1_JOFR3		(*(MM32_ADC1_JOFR3*)(0x40012400+0x88))

//A/D injection channel sequence register
#define	ADC1_JSQR		(*(MM32_ADC1_JSQR*)(0x40012400+0x8C))

//A/D injection data register
#define	ADC1_JADDATA		(*(MM32_ADC1_JADDATA*)(0x40012400+0x90))

//A/D injection channel data register
#define	ADC1_JDR0		(*(MM32_ADC1_JDR0*)(0x40012400+0xB0))

//A/D injection channel data register
#define	ADC1_JDR1		(*(MM32_ADC1_JDR1*)(0x40012400+0xB4))

//A/D injection channel data register
#define	ADC1_JDR2		(*(MM32_ADC1_JDR2*)(0x40012400+0xB8))

//A/D injection channel data register
#define	ADC1_JDR3		(*(MM32_ADC1_JDR3*)(0x40012400+0xBC))


#endif

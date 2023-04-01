#ifndef _MM32_ADC2REGDEF_H_
#define _MM32_ADC2REGDEF_H_

#include "MM32_RegTypedef.h"
//A/D data register
typedef struct
{
	Strict_32Bit DATA			:16;
	Strict_32Bit CHANNELSELL			:4;
	Strict_32Bit OVERRUN			:1;
	Strict_32Bit VALID			:1;
	Strict_32Bit CHANNELSELH			:1;
	Strict_32Bit _reserved_0			:9;
}MM32_ADC2_ADDATABits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ADC2_ADDATABits B;
}MM32_ADC2_ADDATA;

//A/D Configuration Register
typedef struct
{
	Strict_32Bit ADEN			:1;
	Strict_32Bit AWDEN			:1;
	Strict_32Bit TSEN			:1;
	Strict_32Bit VSEN			:1;
	Strict_32Bit _reserved_0			:3;
	Strict_32Bit RSLTCTL			:3;
	Strict_32Bit _reserved_1			:6;
	Strict_32Bit JAWDEN			:1;
	Strict_32Bit _reserved_2			:15;
}MM32_ADC2_ADCFGBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ADC2_ADCFGBits B;
}MM32_ADC2_ADCFG;

//A/D Control Register
typedef struct
{
	Strict_32Bit EOSIE			:1;
	Strict_32Bit AWDIE			:1;
	Strict_32Bit TRGEN			:1;
	Strict_32Bit DMAEN			:1;
	Strict_32Bit _reserved_0			:4;
	Strict_32Bit ADST			:1;
	Strict_32Bit ADMD			:2;
	Strict_32Bit ALIGN			:1;
	Strict_32Bit CMPCHL			:4;
	Strict_32Bit SCANDIR			:1;
	Strict_32Bit _reserved_1			:2;
	Strict_32Bit TRGSHIFT			:3;
	Strict_32Bit _reserved_2			:2;
	Strict_32Bit TRG_EDGE			:2;
	Strict_32Bit EOSMPIE			:1;
	Strict_32Bit EOCIE			:1;
	Strict_32Bit CMPCHH			:1;
	Strict_32Bit _reserved_3			:3;
}MM32_ADC2_ADCRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ADC2_ADCRBits B;
}MM32_ADC2_ADCR;

//A/D Channel Select Register
typedef struct
{
	Strict_32Bit CHEN0			:1;
	Strict_32Bit CHEN1			:1;
	Strict_32Bit CHEN2			:1;
	Strict_32Bit CHEN3			:1;
	Strict_32Bit CHEN4			:1;
	Strict_32Bit CHEN5			:1;
	Strict_32Bit CHEN6			:1;
	Strict_32Bit CHEN7			:1;
	Strict_32Bit CHEN8			:1;
	Strict_32Bit CHEN9			:1;
	Strict_32Bit CHEN10			:1;
	Strict_32Bit CHEN11			:1;
	Strict_32Bit CHEN12			:1;
	Strict_32Bit CHEN13			:1;
	Strict_32Bit CHEN14			:1;
	Strict_32Bit CHEN15			:1;
	Strict_32Bit _reserved_0			:16;
}MM32_ADC2_ADCHSBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ADC2_ADCHSBits B;
}MM32_ADC2_ADCHS;

//A/D Analog Watchdog Compare Register
typedef struct
{
	Strict_32Bit CMPLDATA			:12;
	Strict_32Bit _reserved_0			:4;
	Strict_32Bit CMPHDATA			:12;
	Strict_32Bit _reserved_1			:4;
}MM32_ADC2_ADCMPRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ADC2_ADCMPRBits B;
}MM32_ADC2_ADCMPR;

//A/D Status Register
typedef struct
{
	Strict_32Bit EOSIF			:1;
	Strict_32Bit AWDIF			:1;
	Strict_32Bit BUSY			:1;
	Strict_32Bit CHANNELH			:1;
	Strict_32Bit CHANNELL			:4;
	Strict_32Bit VALID			:12;
	Strict_32Bit OVERRUN			:12;
}MM32_ADC2_ADSTABits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ADC2_ADSTABits B;
}MM32_ADC2_ADSTA;

//A/D Channel Data Register
typedef struct
{
	Strict_32Bit DATA			:16;
	Strict_32Bit _reserved_0			:4;
	Strict_32Bit OVERRUN			:1;
	Strict_32Bit VALID			:1;
	Strict_32Bit _reserved_1			:10;
}MM32_ADC2_ADDR0Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ADC2_ADDR0Bits B;
}MM32_ADC2_ADDR0;

//A/D Channel Data Register
typedef struct
{
	Strict_32Bit DATA			:16;
	Strict_32Bit _reserved_0			:4;
	Strict_32Bit OVERRUN			:1;
	Strict_32Bit VALID			:1;
	Strict_32Bit _reserved_1			:10;
}MM32_ADC2_ADDR1Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ADC2_ADDR1Bits B;
}MM32_ADC2_ADDR1;

//A/D Channel Data Register
typedef struct
{
	Strict_32Bit DATA			:16;
	Strict_32Bit _reserved_0			:4;
	Strict_32Bit OVERRUN			:1;
	Strict_32Bit VALID			:1;
	Strict_32Bit _reserved_1			:10;
}MM32_ADC2_ADDR2Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ADC2_ADDR2Bits B;
}MM32_ADC2_ADDR2;

//A/D Channel Data Register
typedef struct
{
	Strict_32Bit DATA			:16;
	Strict_32Bit _reserved_0			:4;
	Strict_32Bit OVERRUN			:1;
	Strict_32Bit VALID			:1;
	Strict_32Bit _reserved_1			:10;
}MM32_ADC2_ADDR3Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ADC2_ADDR3Bits B;
}MM32_ADC2_ADDR3;

//A/D Channel Data Register
typedef struct
{
	Strict_32Bit DATA			:16;
	Strict_32Bit _reserved_0			:4;
	Strict_32Bit OVERRUN			:1;
	Strict_32Bit VALID			:1;
	Strict_32Bit _reserved_1			:10;
}MM32_ADC2_ADDR4Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ADC2_ADDR4Bits B;
}MM32_ADC2_ADDR4;

//A/D Channel Data Register
typedef struct
{
	Strict_32Bit DATA			:16;
	Strict_32Bit _reserved_0			:4;
	Strict_32Bit OVERRUN			:1;
	Strict_32Bit VALID			:1;
	Strict_32Bit _reserved_1			:10;
}MM32_ADC2_ADDR5Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ADC2_ADDR5Bits B;
}MM32_ADC2_ADDR5;

//A/D Channel Data Register
typedef struct
{
	Strict_32Bit DATA			:16;
	Strict_32Bit _reserved_0			:4;
	Strict_32Bit OVERRUN			:1;
	Strict_32Bit VALID			:1;
	Strict_32Bit _reserved_1			:10;
}MM32_ADC2_ADDR6Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ADC2_ADDR6Bits B;
}MM32_ADC2_ADDR6;

//A/D Channel Data Register
typedef struct
{
	Strict_32Bit DATA			:16;
	Strict_32Bit _reserved_0			:4;
	Strict_32Bit OVERRUN			:1;
	Strict_32Bit VALID			:1;
	Strict_32Bit _reserved_1			:10;
}MM32_ADC2_ADDR7Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ADC2_ADDR7Bits B;
}MM32_ADC2_ADDR7;

//A/D Channel Data Register
typedef struct
{
	Strict_32Bit DATA			:16;
	Strict_32Bit _reserved_0			:4;
	Strict_32Bit OVERRUN			:1;
	Strict_32Bit VALID			:1;
	Strict_32Bit _reserved_1			:10;
}MM32_ADC2_ADDR8Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ADC2_ADDR8Bits B;
}MM32_ADC2_ADDR8;

//A/D Channel Data Register
typedef struct
{
	Strict_32Bit DATA			:16;
	Strict_32Bit _reserved_0			:4;
	Strict_32Bit OVERRUN			:1;
	Strict_32Bit VALID			:1;
	Strict_32Bit _reserved_1			:10;
}MM32_ADC2_ADDR9Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ADC2_ADDR9Bits B;
}MM32_ADC2_ADDR9;

//A/D Channel Data Register
typedef struct
{
	Strict_32Bit DATA			:16;
	Strict_32Bit _reserved_0			:4;
	Strict_32Bit OVERRUN			:1;
	Strict_32Bit VALID			:1;
	Strict_32Bit _reserved_1			:10;
}MM32_ADC2_ADDR10Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ADC2_ADDR10Bits B;
}MM32_ADC2_ADDR10;

//A/D Channel Data Register
typedef struct
{
	Strict_32Bit DATA			:16;
	Strict_32Bit _reserved_0			:4;
	Strict_32Bit OVERRUN			:1;
	Strict_32Bit VALID			:1;
	Strict_32Bit _reserved_1			:10;
}MM32_ADC2_ADDR11Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ADC2_ADDR11Bits B;
}MM32_ADC2_ADDR11;

//A/D Channel Data Register
typedef struct
{
	Strict_32Bit DATA			:16;
	Strict_32Bit _reserved_0			:4;
	Strict_32Bit OVERRUN			:1;
	Strict_32Bit VALID			:1;
	Strict_32Bit _reserved_1			:10;
}MM32_ADC2_ADDR12Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ADC2_ADDR12Bits B;
}MM32_ADC2_ADDR12;

//A/D Channel Data Register
typedef struct
{
	Strict_32Bit DATA			:16;
	Strict_32Bit _reserved_0			:4;
	Strict_32Bit OVERRUN			:1;
	Strict_32Bit VALID			:1;
	Strict_32Bit _reserved_1			:10;
}MM32_ADC2_ADDR13Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ADC2_ADDR13Bits B;
}MM32_ADC2_ADDR13;

//A/D Channel Data Register
typedef struct
{
	Strict_32Bit DATA			:16;
	Strict_32Bit _reserved_0			:4;
	Strict_32Bit OVERRUN			:1;
	Strict_32Bit VALID			:1;
	Strict_32Bit _reserved_1			:10;
}MM32_ADC2_ADDR14Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ADC2_ADDR14Bits B;
}MM32_ADC2_ADDR14;

//A/D Channel Data Register
typedef struct
{
	Strict_32Bit DATA			:16;
	Strict_32Bit _reserved_0			:4;
	Strict_32Bit OVERRUN			:1;
	Strict_32Bit VALID			:1;
	Strict_32Bit _reserved_1			:10;
}MM32_ADC2_ADDR15Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ADC2_ADDR15Bits B;
}MM32_ADC2_ADDR15;

//A/D Extended Status Register
typedef struct
{
	Strict_32Bit VALID			:4;
	Strict_32Bit OVERRUN			:4;
	Strict_32Bit _reserved_0			:8;
	Strict_32Bit EOSMPIF			:1;
	Strict_32Bit EOCIF			:1;
	Strict_32Bit JEOSMPIF			:1;
	Strict_32Bit JEOCIF			:1;
	Strict_32Bit JEOSIF			:1;
	Strict_32Bit JBUSY			:1;
	Strict_32Bit _reserved_1			:2;
	Strict_32Bit EOCALIF			:1;
	Strict_32Bit CALBUSY			:1;
	Strict_32Bit FREOCIF			:1;
	Strict_32Bit _reserved_2			:5;
}MM32_ADC2_ADSTA_EXTBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ADC2_ADSTA_EXTBits B;
}MM32_ADC2_ADSTA_EXT;

//A/D any channel channel select register 0
typedef struct
{
	Strict_32Bit CHANY_SELL0			:4;
	Strict_32Bit CHANY_SELL1			:4;
	Strict_32Bit CHANY_SELL2			:4;
	Strict_32Bit CHANY_SELL3			:4;
	Strict_32Bit CHANY_SELL4			:4;
	Strict_32Bit CHANY_SELL5			:4;
	Strict_32Bit CHANY_SELL6			:4;
	Strict_32Bit CHANY_SELL7			:4;
}MM32_ADC2_CHANY0Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ADC2_CHANY0Bits B;
}MM32_ADC2_CHANY0;

//A/D arbitrary channel channel selection register 1
typedef struct
{
	Strict_32Bit CHANY_SELL8			:4;
	Strict_32Bit CHANY_SELL9			:4;
	Strict_32Bit CHANY_SELL10			:4;
	Strict_32Bit CHANY_SELL11			:4;
	Strict_32Bit CHANY_SELL12			:4;
	Strict_32Bit CHANY_SELL13			:4;
	Strict_32Bit CHANY_SELL14			:4;
	Strict_32Bit CHANY_SELL15			:4;
}MM32_ADC2_CHANY1Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ADC2_CHANY1Bits B;
}MM32_ADC2_CHANY1;

//A/D Arbitrary Channel Configuration Register
typedef struct
{
	Strict_32Bit CHANY_NUM			:4;
	Strict_32Bit _reserved_0			:4;
	Strict_32Bit CHANY_SELH0			:1;
	Strict_32Bit CHANY_SELH1			:1;
	Strict_32Bit CHANY_SELH2			:1;
	Strict_32Bit CHANY_SELH3			:1;
	Strict_32Bit CHANY_SELH4			:1;
	Strict_32Bit CHANY_SELH5			:1;
	Strict_32Bit CHANY_SELH6			:1;
	Strict_32Bit CHANY_SELH7			:1;
	Strict_32Bit CHANY_SELH8			:1;
	Strict_32Bit CHANY_SELH9			:1;
	Strict_32Bit CHANY_SELH10			:1;
	Strict_32Bit CHANY_SELH11			:1;
	Strict_32Bit CHANY_SELH12			:1;
	Strict_32Bit CHANY_SELH13			:1;
	Strict_32Bit CHANY_SELH14			:1;
	Strict_32Bit CHANY_SELH15			:1;
	Strict_32Bit _reserved_1			:8;
}MM32_ADC2_ANY_CFGBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ADC2_ANY_CFGBits B;
}MM32_ADC2_ANY_CFG;

//A/D arbitrary channel control register
typedef struct
{
	Strict_32Bit CHANY_MDEN			:1;
	Strict_32Bit JCEN			:1;
	Strict_32Bit JEOSMPIE			:1;
	Strict_32Bit JEOCIE			:1;
	Strict_32Bit JEOSIE			:1;
	Strict_32Bit JAUTO			:1;
	Strict_32Bit JADST			:1;
	Strict_32Bit JTRGEN			:1;
	Strict_32Bit _reserved_0			:5;
	Strict_32Bit JTRGSHIFT			:3;
	Strict_32Bit JTRG_EDGE			:2;
	Strict_32Bit _reserved_1			:2;
	Strict_32Bit ADCAL			:1;
	Strict_32Bit EOCALIE			:1;
	Strict_32Bit _reserved_2			:10;
}MM32_ADC2_ANY_CRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ADC2_ANY_CRBits B;
}MM32_ADC2_ANY_CR;

//ADC Configuration Register
typedef struct
{
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit ADCCR			:1;
	Strict_32Bit ADCSREF			:1;
	Strict_32Bit _reserved_1			:1;
	Strict_32Bit DC			:5;
	Strict_32Bit _reserved_2			:1;
	Strict_32Bit PSDC			:5;
	Strict_32Bit _reserved_3			:1;
	Strict_32Bit ROVSE			:1;
	Strict_32Bit JOVSE			:1;
	Strict_32Bit OVSR			:3;
	Strict_32Bit OVSS			:4;
	Strict_32Bit TROVS			:1;
	Strict_32Bit ROVSM			:1;
	Strict_32Bit _reserved_4			:5;
}MM32_ADC2_ADCFG2Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ADC2_ADCFG2Bits B;
}MM32_ADC2_ADCFG2;

//A/D Sampling Configuration Register 1
typedef struct
{
	Strict_32Bit SAMP			:32;
}MM32_ADC2_SMPR1Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ADC2_SMPR1Bits B;
}MM32_ADC2_SMPR1;

//A/D Sampling Configuration Register 2
typedef struct
{
	Strict_32Bit SAMP			:32;
}MM32_ADC2_SMPR2Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ADC2_SMPR2Bits B;
}MM32_ADC2_SMPR2;

//A/D Injection Channel Data Compensation Register
typedef struct
{
	Strict_32Bit JOFFSET			:12;
	Strict_32Bit _reserved_0			:20;
}MM32_ADC2_JOFR0Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ADC2_JOFR0Bits B;
}MM32_ADC2_JOFR0;

//A/D Injection Channel Data Compensation Register
typedef struct
{
	Strict_32Bit JOFFSET			:12;
	Strict_32Bit _reserved_0			:20;
}MM32_ADC2_JOFR1Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ADC2_JOFR1Bits B;
}MM32_ADC2_JOFR1;

//A/D Injection Channel Data Compensation Register
typedef struct
{
	Strict_32Bit JOFFSET			:12;
	Strict_32Bit _reserved_0			:20;
}MM32_ADC2_JOFR2Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ADC2_JOFR2Bits B;
}MM32_ADC2_JOFR2;

//A/D Injection Channel Data Compensation Register
typedef struct
{
	Strict_32Bit JOFFSET			:12;
	Strict_32Bit _reserved_0			:20;
}MM32_ADC2_JOFR3Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ADC2_JOFR3Bits B;
}MM32_ADC2_JOFR3;

//A/D injection channel sequence register
typedef struct
{
	Strict_32Bit JSQ0			:5;
	Strict_32Bit JSQ1			:5;
	Strict_32Bit JSQ2			:5;
	Strict_32Bit JSQ3			:5;
	Strict_32Bit JNUM			:2;
	Strict_32Bit _reserved_0			:10;
}MM32_ADC2_JSQRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ADC2_JSQRBits B;
}MM32_ADC2_JSQR;

//A/D injection data register
typedef struct
{
	Strict_32Bit JDATA			:16;
	Strict_32Bit JCHANNELSEL			:5;
	Strict_32Bit JOVERRUN			:1;
	Strict_32Bit JVALID			:1;
	Strict_32Bit _reserved_0			:9;
}MM32_ADC2_JADDATABits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ADC2_JADDATABits B;
}MM32_ADC2_JADDATA;

//A/D injection channel data register
typedef struct
{
	Strict_32Bit JDATA			:16;
	Strict_32Bit _reserved_0			:5;
	Strict_32Bit JOVERRUN			:1;
	Strict_32Bit JVALID			:1;
	Strict_32Bit _reserved_1			:9;
}MM32_ADC2_JDR0Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ADC2_JDR0Bits B;
}MM32_ADC2_JDR0;

//A/D injection channel data register
typedef struct
{
	Strict_32Bit JDATA			:16;
	Strict_32Bit _reserved_0			:5;
	Strict_32Bit JOVERRUN			:1;
	Strict_32Bit JVALID			:1;
	Strict_32Bit _reserved_1			:9;
}MM32_ADC2_JDR1Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ADC2_JDR1Bits B;
}MM32_ADC2_JDR1;

//A/D injection channel data register
typedef struct
{
	Strict_32Bit JDATA			:16;
	Strict_32Bit _reserved_0			:5;
	Strict_32Bit JOVERRUN			:1;
	Strict_32Bit JVALID			:1;
	Strict_32Bit _reserved_1			:9;
}MM32_ADC2_JDR2Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ADC2_JDR2Bits B;
}MM32_ADC2_JDR2;

//A/D injection channel data register
typedef struct
{
	Strict_32Bit JDATA			:16;
	Strict_32Bit _reserved_0			:5;
	Strict_32Bit JOVERRUN			:1;
	Strict_32Bit JVALID			:1;
	Strict_32Bit _reserved_1			:9;
}MM32_ADC2_JDR3Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ADC2_JDR3Bits B;
}MM32_ADC2_JDR3;


#endif

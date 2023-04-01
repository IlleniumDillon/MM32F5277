#ifndef _MM32_TIM8REGDEF_H_
#define _MM32_TIM8REGDEF_H_

#include "MM32_RegTypedef.h"
//Control Register 1
typedef struct
{
	Strict_32Bit CEN			:1;
	Strict_32Bit UDIS			:1;
	Strict_32Bit URS			:1;
	Strict_32Bit OPM			:1;
	Strict_32Bit DIR			:1;
	Strict_32Bit CMS			:2;
	Strict_32Bit ARPE			:1;
	Strict_32Bit CKD			:2;
	Strict_32Bit _reserved_0			:22;
}MM32_TIM8_CR1Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM8_CR1Bits B;
}MM32_TIM8_CR1;

//Control Register 2
typedef struct
{
	Strict_32Bit CCPC			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit CCUS			:1;
	Strict_32Bit CCDS			:1;
	Strict_32Bit MMS			:3;
	Strict_32Bit TI1S			:1;
	Strict_32Bit OIS1			:1;
	Strict_32Bit OIS1N			:1;
	Strict_32Bit OIS2			:1;
	Strict_32Bit OIS2N			:1;
	Strict_32Bit OIS3			:1;
	Strict_32Bit OIS3N			:1;
	Strict_32Bit OIS4			:1;
	Strict_32Bit OIS4N			:1;
	Strict_32Bit _reserved_1			:16;
}MM32_TIM8_CR2Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM8_CR2Bits B;
}MM32_TIM8_CR2;

//Slave Mode Control Register
typedef struct
{
	Strict_32Bit SMS			:3;
	Strict_32Bit OCCS			:1;
	Strict_32Bit TS			:3;
	Strict_32Bit MSM			:1;
	Strict_32Bit ETF			:4;
	Strict_32Bit ETPS			:2;
	Strict_32Bit ECE			:1;
	Strict_32Bit ETP			:1;
	Strict_32Bit _reserved_0			:16;
}MM32_TIM8_SMCRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM8_SMCRBits B;
}MM32_TIM8_SMCR;

//DMA/Interrupt Enable Register
typedef struct
{
	Strict_32Bit UIE			:1;
	Strict_32Bit CC1IE			:1;
	Strict_32Bit CC2IE			:1;
	Strict_32Bit CC3IE			:1;
	Strict_32Bit CC4IE			:1;
	Strict_32Bit COMIE			:1;
	Strict_32Bit TIE			:1;
	Strict_32Bit BIE			:1;
	Strict_32Bit UDE			:1;
	Strict_32Bit CC1DE			:1;
	Strict_32Bit CC2DE			:1;
	Strict_32Bit CC3DE			:1;
	Strict_32Bit CC4DE			:1;
	Strict_32Bit COMDE			:1;
	Strict_32Bit TDE			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit CC5IE			:1;
	Strict_32Bit CC5DE			:1;
	Strict_32Bit _reserved_1			:14;
}MM32_TIM8_DIERBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM8_DIERBits B;
}MM32_TIM8_DIER;

//status register
typedef struct
{
	Strict_32Bit UIF			:1;
	Strict_32Bit CC1IF			:1;
	Strict_32Bit CC2IF			:1;
	Strict_32Bit CC3IF			:1;
	Strict_32Bit CC4IF			:1;
	Strict_32Bit COMIF			:1;
	Strict_32Bit TIF			:1;
	Strict_32Bit BIF			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit CC1OF			:1;
	Strict_32Bit CC2OF			:1;
	Strict_32Bit CC3OF			:1;
	Strict_32Bit CC4OF			:1;
	Strict_32Bit _reserved_1			:3;
	Strict_32Bit CC5IF			:1;
	Strict_32Bit _reserved_2			:15;
}MM32_TIM8_SRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM8_SRBits B;
}MM32_TIM8_SR;

//event generation register
typedef struct
{
	Strict_32Bit UG			:1;
	Strict_32Bit CC1G			:1;
	Strict_32Bit CC2G			:1;
	Strict_32Bit CC3G			:1;
	Strict_32Bit CC4G			:1;
	Strict_32Bit COMG			:1;
	Strict_32Bit TG			:1;
	Strict_32Bit BG			:1;
	Strict_32Bit _reserved_0			:8;
	Strict_32Bit CC5G			:1;
	Strict_32Bit _reserved_1			:15;
}MM32_TIM8_EGRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM8_EGRBits B;
}MM32_TIM8_EGR;

//Capture/Compare Mode Register 1
typedef struct
{
	Strict_32Bit CC1S			:2;
	Strict_32Bit OC1FE			:1;
	Strict_32Bit OC1PE			:1;
	Strict_32Bit OC1M			:3;
	Strict_32Bit OC1CE			:1;
	Strict_32Bit CC2S			:2;
	Strict_32Bit OC2FE			:1;
	Strict_32Bit OC2PE			:1;
	Strict_32Bit OC2M			:3;
	Strict_32Bit OC2CE			:1;
	Strict_32Bit _reserved_0			:16;
}MM32_TIM8_CCMR1_OutputBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM8_CCMR1_OutputBits B;
}MM32_TIM8_CCMR1_Output;

//Capture/Compare Mode Register 2
typedef struct
{
	Strict_32Bit CC1S			:2;
	Strict_32Bit IC1PSC			:2;
	Strict_32Bit IC1F			:4;
	Strict_32Bit CC2S			:2;
	Strict_32Bit IC2PSC			:2;
	Strict_32Bit IC2F			:4;
	Strict_32Bit _reserved_0			:16;
}MM32_TIM8_CCMR1_InputBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM8_CCMR1_InputBits B;
}MM32_TIM8_CCMR1_Input;

//Capture/Compare Mode Register 1
typedef struct
{
	Strict_32Bit CC3S			:2;
	Strict_32Bit OC3FE			:1;
	Strict_32Bit OC3PE			:1;
	Strict_32Bit OC3M			:3;
	Strict_32Bit OC3CE			:1;
	Strict_32Bit CC4S			:2;
	Strict_32Bit OC4FE			:1;
	Strict_32Bit OC4PE			:1;
	Strict_32Bit OC4M			:3;
	Strict_32Bit OC4CE			:1;
	Strict_32Bit _reserved_0			:16;
}MM32_TIM8_CCMR2_OutputBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM8_CCMR2_OutputBits B;
}MM32_TIM8_CCMR2_Output;

//Capture/Compare Mode Register 2
typedef struct
{
	Strict_32Bit CC3S			:2;
	Strict_32Bit IC3PSC			:2;
	Strict_32Bit IC3F			:4;
	Strict_32Bit CC4S			:2;
	Strict_32Bit IC4PSC			:2;
	Strict_32Bit IC4F			:4;
	Strict_32Bit _reserved_0			:16;
}MM32_TIM8_CCMR2_InputBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM8_CCMR2_InputBits B;
}MM32_TIM8_CCMR2_Input;

//Capture/Compare Enable Register
typedef struct
{
	Strict_32Bit CC1E			:1;
	Strict_32Bit CC1P			:1;
	Strict_32Bit CC1NE			:1;
	Strict_32Bit CC1NP			:1;
	Strict_32Bit CC2E			:1;
	Strict_32Bit CC2P			:1;
	Strict_32Bit CC2NE			:1;
	Strict_32Bit CC2NP			:1;
	Strict_32Bit CC3E			:1;
	Strict_32Bit CC3P			:1;
	Strict_32Bit CC3NE			:1;
	Strict_32Bit CC3NP			:1;
	Strict_32Bit CC4E			:1;
	Strict_32Bit CC4P			:1;
	Strict_32Bit CC4NE			:1;
	Strict_32Bit CC4NP			:1;
	Strict_32Bit _reserved_0			:16;
}MM32_TIM8_CCERBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM8_CCERBits B;
}MM32_TIM8_CCER;

//counter
typedef struct
{
	Strict_32Bit CNT			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_TIM8_CNTBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM8_CNTBits B;
}MM32_TIM8_CNT;

//Prescaler
typedef struct
{
	Strict_32Bit PSC			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_TIM8_PSCBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM8_PSCBits B;
}MM32_TIM8_PSC;

//autoload register
typedef struct
{
	Strict_32Bit ARR			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_TIM8_ARRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM8_ARRBits B;
}MM32_TIM8_ARR;

//Repeat count register
typedef struct
{
	Strict_32Bit REP			:8;
	Strict_32Bit REP_CNT			:8;
	Strict_32Bit _reserved_0			:16;
}MM32_TIM8_RCRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM8_RCRBits B;
}MM32_TIM8_RCR;

//Capture/Compare Register 1
typedef struct
{
	Strict_32Bit CCR			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_TIM8_CCR1Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM8_CCR1Bits B;
}MM32_TIM8_CCR1;

//Capture/Compare Register 1
typedef struct
{
	Strict_32Bit CCR			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_TIM8_CCR2Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM8_CCR2Bits B;
}MM32_TIM8_CCR2;

//Capture/Compare Register 1
typedef struct
{
	Strict_32Bit CCR			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_TIM8_CCR3Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM8_CCR3Bits B;
}MM32_TIM8_CCR3;

//Capture/Compare Register 1
typedef struct
{
	Strict_32Bit CCR			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_TIM8_CCR4Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM8_CCR4Bits B;
}MM32_TIM8_CCR4;

//Brake and Deadband Registers
typedef struct
{
	Strict_32Bit DTG			:8;
	Strict_32Bit LOCK			:2;
	Strict_32Bit OSSI			:1;
	Strict_32Bit OSSR			:1;
	Strict_32Bit BKE			:1;
	Strict_32Bit BKP			:1;
	Strict_32Bit AOE			:1;
	Strict_32Bit MOE			:1;
	Strict_32Bit DOE			:1;
	Strict_32Bit _reserved_0			:15;
}MM32_TIM8_BDTRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM8_BDTRBits B;
}MM32_TIM8_BDTR;

//DMA Control Register
typedef struct
{
	Strict_32Bit DBA			:5;
	Strict_32Bit _reserved_0			:3;
	Strict_32Bit DBL			:5;
	Strict_32Bit _reserved_1			:19;
}MM32_TIM8_DCRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM8_DCRBits B;
}MM32_TIM8_DCR;

//DMA address for continuous mode
typedef struct
{
	Strict_32Bit DMAB			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_TIM8_DMARBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM8_DMARBits B;
}MM32_TIM8_DMAR;

//Capture/Compare Mode Register 3
typedef struct
{
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit OC5FE			:1;
	Strict_32Bit OC5PE			:1;
	Strict_32Bit OC5M			:3;
	Strict_32Bit _reserved_1			:25;
}MM32_TIM8_CCMR3Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM8_CCMR3Bits B;
}MM32_TIM8_CCMR3;

//Capture/Compare Register 5
typedef struct
{
	Strict_32Bit CCR5			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_TIM8_CCR5Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM8_CCR5Bits B;
}MM32_TIM8_CCR5;

//PWM phase shift/DMA repeat update request enable register
typedef struct
{
	Strict_32Bit CCDREPE			:1;
	Strict_32Bit CCR1SHIFTEN			:1;
	Strict_32Bit CCR2SHIFTEN			:1;
	Strict_32Bit CCR3SHIFTEN			:1;
	Strict_32Bit CCR4SHIFTEN			:1;
	Strict_32Bit CCR5SHIFTEN			:1;
	Strict_32Bit _reserved_0			:26;
}MM32_TIM8_PDERBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM8_PDERBits B;
}MM32_TIM8_PDER;

//PWM Phase Shift Down Count Capture/Compare Register
typedef struct
{
	Strict_32Bit CCRxFALL			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_TIM8_CCR1FALLBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM8_CCR1FALLBits B;
}MM32_TIM8_CCR1FALL;

//PWM Phase Shift Down Count Capture/Compare Register
typedef struct
{
	Strict_32Bit CCRxFALL			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_TIM8_CCR2FALLBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM8_CCR2FALLBits B;
}MM32_TIM8_CCR2FALL;

//PWM Phase Shift Down Count Capture/Compare Register
typedef struct
{
	Strict_32Bit CCRxFALL			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_TIM8_CCR3FALLBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM8_CCR3FALLBits B;
}MM32_TIM8_CCR3FALL;

//PWM Phase Shift Down Count Capture/Compare Register
typedef struct
{
	Strict_32Bit CCRxFALL			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_TIM8_CCR4FALLBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM8_CCR4FALLBits B;
}MM32_TIM8_CCR4FALL;

//PWM Phase Shift Down Count Capture/Compare Register
typedef struct
{
	Strict_32Bit CCRxFALL			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_TIM8_CCR5FALLBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM8_CCR5FALLBits B;
}MM32_TIM8_CCR5FALL;

//brake input filter register
typedef struct
{
	Strict_32Bit BKINFE			:1;
	Strict_32Bit BKINF			:4;
	Strict_32Bit CSSBKINSEL			:1;
	Strict_32Bit IOBKINSEL			:4;
	Strict_32Bit _reserved_0			:3;
	Strict_32Bit COMPBKINSEL			:3;
	Strict_32Bit _reserved_1			:16;
}MM32_TIM8_BKINFBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM8_BKINFBits B;
}MM32_TIM8_BKINF;


#endif

#ifndef _MM32_TIM3REGDEF_H_
#define _MM32_TIM3REGDEF_H_

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
}MM32_TIM3_CR1Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM3_CR1Bits B;
}MM32_TIM3_CR1;

//Control Register 2
typedef struct
{
	Strict_32Bit _reserved_0			:3;
	Strict_32Bit CCDS			:1;
	Strict_32Bit MMS			:3;
	Strict_32Bit TI1S			:1;
	Strict_32Bit _reserved_1			:24;
}MM32_TIM3_CR2Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM3_CR2Bits B;
}MM32_TIM3_CR2;

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
}MM32_TIM3_SMCRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM3_SMCRBits B;
}MM32_TIM3_SMCR;

//DMA/Interrupt Enable Register
typedef struct
{
	Strict_32Bit UIE			:1;
	Strict_32Bit CC1IE			:1;
	Strict_32Bit CC2IE			:1;
	Strict_32Bit CC3IE			:1;
	Strict_32Bit CC4IE			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit TIE			:1;
	Strict_32Bit _reserved_1			:1;
	Strict_32Bit UDE			:1;
	Strict_32Bit CC1DE			:1;
	Strict_32Bit CC2DE			:1;
	Strict_32Bit CC3DE			:1;
	Strict_32Bit CC4DE			:1;
	Strict_32Bit _reserved_2			:1;
	Strict_32Bit TDE			:1;
	Strict_32Bit _reserved_3			:17;
}MM32_TIM3_DIERBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM3_DIERBits B;
}MM32_TIM3_DIER;

//status register
typedef struct
{
	Strict_32Bit UIF			:1;
	Strict_32Bit CC1IF			:1;
	Strict_32Bit CC2IF			:1;
	Strict_32Bit CC3IF			:1;
	Strict_32Bit CC4IF			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit TIF			:1;
	Strict_32Bit _reserved_1			:2;
	Strict_32Bit CC1OF			:1;
	Strict_32Bit CC2OF			:1;
	Strict_32Bit CC3OF			:1;
	Strict_32Bit CC4OF			:1;
	Strict_32Bit _reserved_2			:19;
}MM32_TIM3_SRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM3_SRBits B;
}MM32_TIM3_SR;

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
	Strict_32Bit _reserved_0			:25;
}MM32_TIM3_EGRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM3_EGRBits B;
}MM32_TIM3_EGR;

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
}MM32_TIM3_CCMR1_OutputBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM3_CCMR1_OutputBits B;
}MM32_TIM3_CCMR1_Output;

//Capture/Compare Mode Register 1
typedef struct
{
	Strict_32Bit CC1S			:2;
	Strict_32Bit IC1PSC			:2;
	Strict_32Bit IC1F			:4;
	Strict_32Bit CC2S			:2;
	Strict_32Bit IC2PSC			:2;
	Strict_32Bit IC2F			:4;
	Strict_32Bit _reserved_0			:16;
}MM32_TIM3_CCMR1_InputBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM3_CCMR1_InputBits B;
}MM32_TIM3_CCMR1_Input;

//Capture/Compare Mode Register 2
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
}MM32_TIM3_CCMR2_OutputBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM3_CCMR2_OutputBits B;
}MM32_TIM3_CCMR2_Output;

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
}MM32_TIM3_CCMR2_InputBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM3_CCMR2_InputBits B;
}MM32_TIM3_CCMR2_Input;

//Capture/Compare Enable Register
typedef struct
{
	Strict_32Bit CC1E			:1;
	Strict_32Bit CC1P			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit CC1NP			:1;
	Strict_32Bit CC2E			:1;
	Strict_32Bit CC2P			:1;
	Strict_32Bit _reserved_1			:1;
	Strict_32Bit CC2NP			:1;
	Strict_32Bit CC3E			:1;
	Strict_32Bit CC3P			:1;
	Strict_32Bit _reserved_2			:1;
	Strict_32Bit CC3NP			:1;
	Strict_32Bit CC4E			:1;
	Strict_32Bit CC4P			:1;
	Strict_32Bit _reserved_3			:1;
	Strict_32Bit CC4NP			:1;
	Strict_32Bit _reserved_4			:16;
}MM32_TIM3_CCERBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM3_CCERBits B;
}MM32_TIM3_CCER;

//counter
typedef struct
{
	Strict_32Bit CNT			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_TIM3_CNTBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM3_CNTBits B;
}MM32_TIM3_CNT;

//Prescaler
typedef struct
{
	Strict_32Bit PSC			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_TIM3_PSCBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM3_PSCBits B;
}MM32_TIM3_PSC;

//autoload register
typedef struct
{
	Strict_32Bit ARR			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_TIM3_ARRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM3_ARRBits B;
}MM32_TIM3_ARR;

//Capture/Compare Register 1
typedef struct
{
	Strict_32Bit CCR			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_TIM3_CCR1Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM3_CCR1Bits B;
}MM32_TIM3_CCR1;

//Capture/Compare Register 1
typedef struct
{
	Strict_32Bit CCR			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_TIM3_CCR2Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM3_CCR2Bits B;
}MM32_TIM3_CCR2;

//Capture/Compare Register 1
typedef struct
{
	Strict_32Bit CCR			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_TIM3_CCR3Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM3_CCR3Bits B;
}MM32_TIM3_CCR3;

//Capture/Compare Register 1
typedef struct
{
	Strict_32Bit CCR			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_TIM3_CCR4Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM3_CCR4Bits B;
}MM32_TIM3_CCR4;

//DMA Control Register
typedef struct
{
	Strict_32Bit DBA			:5;
	Strict_32Bit _reserved_0			:3;
	Strict_32Bit DBL			:5;
	Strict_32Bit _reserved_1			:19;
}MM32_TIM3_DCRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM3_DCRBits B;
}MM32_TIM3_DCR;

//DMA address for continuous mode
typedef struct
{
	Strict_32Bit DMAB			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_TIM3_DMARBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM3_DMARBits B;
}MM32_TIM3_DMAR;


#endif

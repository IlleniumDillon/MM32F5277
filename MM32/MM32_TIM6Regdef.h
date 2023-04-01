#ifndef _MM32_TIM6REGDEF_H_
#define _MM32_TIM6REGDEF_H_

#include "MM32_RegTypedef.h"
//Control Register 1
typedef struct
{
	Strict_32Bit CEN			:1;
	Strict_32Bit UDIS			:1;
	Strict_32Bit URS			:1;
	Strict_32Bit OPM			:1;
	Strict_32Bit _reserved_0			:3;
	Strict_32Bit ARPE			:1;
	Strict_32Bit _reserved_1			:24;
}MM32_TIM6_CR1Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM6_CR1Bits B;
}MM32_TIM6_CR1;

//DMA/Interrupt Enable Register
typedef struct
{
	Strict_32Bit UIE			:1;
	Strict_32Bit _reserved_0			:7;
	Strict_32Bit UDE			:1;
	Strict_32Bit _reserved_1			:23;
}MM32_TIM6_DIERBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM6_DIERBits B;
}MM32_TIM6_DIER;

//status register
typedef struct
{
	Strict_32Bit UIF			:1;
	Strict_32Bit _reserved_0			:31;
}MM32_TIM6_SRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM6_SRBits B;
}MM32_TIM6_SR;

//event generation register
typedef struct
{
	Strict_32Bit UG			:1;
	Strict_32Bit _reserved_0			:31;
}MM32_TIM6_EGRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM6_EGRBits B;
}MM32_TIM6_EGR;

//counter
typedef struct
{
	Strict_32Bit CNT			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_TIM6_CNTBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM6_CNTBits B;
}MM32_TIM6_CNT;

//Prescaler
typedef struct
{
	Strict_32Bit PSC			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_TIM6_PSCBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM6_PSCBits B;
}MM32_TIM6_PSC;

//autoload register
typedef struct
{
	Strict_32Bit ARR			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_TIM6_ARRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM6_ARRBits B;
}MM32_TIM6_ARR;


#endif

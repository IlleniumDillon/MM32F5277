#ifndef _MM32_TIM7REGDEF_H_
#define _MM32_TIM7REGDEF_H_

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
}MM32_TIM7_CR1Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM7_CR1Bits B;
}MM32_TIM7_CR1;

//DMA/Interrupt Enable Register
typedef struct
{
	Strict_32Bit UIE			:1;
	Strict_32Bit _reserved_0			:7;
	Strict_32Bit UDE			:1;
	Strict_32Bit _reserved_1			:23;
}MM32_TIM7_DIERBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM7_DIERBits B;
}MM32_TIM7_DIER;

//status register
typedef struct
{
	Strict_32Bit UIF			:1;
	Strict_32Bit _reserved_0			:31;
}MM32_TIM7_SRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM7_SRBits B;
}MM32_TIM7_SR;

//event generation register
typedef struct
{
	Strict_32Bit UG			:1;
	Strict_32Bit _reserved_0			:31;
}MM32_TIM7_EGRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM7_EGRBits B;
}MM32_TIM7_EGR;

//counter
typedef struct
{
	Strict_32Bit CNT			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_TIM7_CNTBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM7_CNTBits B;
}MM32_TIM7_CNT;

//Prescaler
typedef struct
{
	Strict_32Bit PSC			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_TIM7_PSCBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM7_PSCBits B;
}MM32_TIM7_PSC;

//autoload register
typedef struct
{
	Strict_32Bit ARR			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_TIM7_ARRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_TIM7_ARRBits B;
}MM32_TIM7_ARR;


#endif

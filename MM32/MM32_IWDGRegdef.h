#ifndef _MM32_IWDGREGDEF_H_
#define _MM32_IWDGREGDEF_H_

#include "MM32_RegTypedef.h"
//key register
typedef struct
{
	Strict_32Bit KEY			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_IWDG_KRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_IWDG_KRBits B;
}MM32_IWDG_KR;

//Prescaler register
typedef struct
{
	Strict_32Bit PR			:3;
	Strict_32Bit _reserved_0			:29;
}MM32_IWDG_PRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_IWDG_PRBits B;
}MM32_IWDG_PR;

//reload register
typedef struct
{
	Strict_32Bit RL			:12;
	Strict_32Bit _reserved_0			:20;
}MM32_IWDG_RLRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_IWDG_RLRBits B;
}MM32_IWDG_RLR;

//status register
typedef struct
{
	Strict_32Bit PVU			:1;
	Strict_32Bit RVU			:1;
	Strict_32Bit IVU			:1;
	Strict_32Bit UPDATE			:1;
	Strict_32Bit _reserved_0			:28;
}MM32_IWDG_SRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_IWDG_SRBits B;
}MM32_IWDG_SR;

//control register
typedef struct
{
	Strict_32Bit IRQ_SEL			:1;
	Strict_32Bit IRQ_CLR			:1;
	Strict_32Bit _reserved_0			:30;
}MM32_IWDG_CRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_IWDG_CRBits B;
}MM32_IWDG_CR;

//Interrupt Generation Register
typedef struct
{
	Strict_32Bit IGEN			:12;
	Strict_32Bit _reserved_0			:20;
}MM32_IWDG_IGENBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_IWDG_IGENBits B;
}MM32_IWDG_IGEN;

//count register
typedef struct
{
	Strict_32Bit IWDG_CNT			:12;
	Strict_32Bit _reserved_0			:20;
}MM32_IWDG_CNTBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_IWDG_CNTBits B;
}MM32_IWDG_CNT;

//Frequency division count register
typedef struct
{
	Strict_32Bit IWDG_PS			:8;
	Strict_32Bit _reserved_0			:24;
}MM32_IWDG_PSBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_IWDG_PSBits B;
}MM32_IWDG_PS;


#endif

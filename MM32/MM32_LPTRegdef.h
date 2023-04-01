#ifndef _MM32_LPTREGDEF_H_
#define _MM32_LPTREGDEF_H_

#include "MM32_RegTypedef.h"
//LPTIM Configuration Register
typedef struct
{
	Strict_32Bit MODE			:1;
	Strict_32Bit TMODE			:2;
	Strict_32Bit PWM			:1;
	Strict_32Bit POLARITY			:1;
	Strict_32Bit TRIGSEL			:1;
	Strict_32Bit TRIGCFG			:2;
	Strict_32Bit DICSEL			:3;
	Strict_32Bit _reserved_0			:4;
	Strict_32Bit FTLEN			:1;
	Strict_32Bit _reserved_1			:16;
}MM32_LPT_CFGBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_LPT_CFGBits B;
}MM32_LPT_CFG;

//LPTIM Interrupt Enable Register
typedef struct
{
	Strict_32Bit OVIE			:1;
	Strict_32Bit TRIGIE			:1;
	Strict_32Bit COMPIE			:1;
	Strict_32Bit _reserved_0			:29;
}MM32_LPT_IEBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_LPT_IEBits B;
}MM32_LPT_IE;

//LPTIM Interrupt Flag Register
typedef struct
{
	Strict_32Bit OVIF			:1;
	Strict_32Bit TRIGIF			:1;
	Strict_32Bit COMPIF			:1;
	Strict_32Bit _reserved_0			:29;
}MM32_LPT_IFBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_LPT_IFBits B;
}MM32_LPT_IF;

//LPTIM Control Register
typedef struct
{
	Strict_32Bit LPTEN			:1;
	Strict_32Bit _reserved_0			:31;
}MM32_LPT_CTRLBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_LPT_CTRLBits B;
}MM32_LPT_CTRL;

//LPTIM count register
typedef struct
{
	Strict_32Bit CNT			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_LPT_CNTBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_LPT_CNTBits B;
}MM32_LPT_CNT;

//LPTIM Compare Value Register
typedef struct
{
	Strict_32Bit COMPARE_REG			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_LPT_CMPBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_LPT_CMPBits B;
}MM32_LPT_CMP;

//LPTIM target value register
typedef struct
{
	Strict_32Bit TARGET_REG			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_LPT_TARGETBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_LPT_TARGETBits B;
}MM32_LPT_TARGET;


#endif

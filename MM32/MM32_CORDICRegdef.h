#ifndef _MM32_CORDICREGDEF_H_
#define _MM32_CORDICREGDEF_H_

#include "MM32_RegTypedef.h"
//CORDIC X Data Register
typedef struct
{
	Strict_32Bit DX			:24;
	Strict_32Bit _reserved_0			:8;
}MM32_CORDIC_DXRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_CORDIC_DXRBits B;
}MM32_CORDIC_DXR;

//CORDIC Y data register
typedef struct
{
	Strict_32Bit DY			:24;
	Strict_32Bit _reserved_0			:8;
}MM32_CORDIC_DYRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_CORDIC_DYRBits B;
}MM32_CORDIC_DYR;

//CORDIC Z data register
typedef struct
{
	Strict_32Bit DZ			:24;
	Strict_32Bit _reserved_0			:8;
}MM32_CORDIC_DZRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_CORDIC_DZRBits B;
}MM32_CORDIC_DZR;

//CORDIC X Result Register
typedef struct
{
	Strict_32Bit RX			:25;
	Strict_32Bit _reserved_0			:7;
}MM32_CORDIC_RXRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_CORDIC_RXRBits B;
}MM32_CORDIC_RXR;

//CORDIC Y result register
typedef struct
{
	Strict_32Bit RY			:25;
	Strict_32Bit _reserved_0			:7;
}MM32_CORDIC_RYRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_CORDIC_RYRBits B;
}MM32_CORDIC_RYR;

//CORDIC Z result register
typedef struct
{
	Strict_32Bit RZ			:24;
	Strict_32Bit _reserved_0			:8;
}MM32_CORDIC_RZRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_CORDIC_RZRBits B;
}MM32_CORDIC_RZR;

//CORDIC Control Register
typedef struct
{
	Strict_32Bit START			:1;
	Strict_32Bit WORKMODE			:1;
	Strict_32Bit STARTMODE			:1;
	Strict_32Bit ENABLE			:1;
	Strict_32Bit _reserved_0			:28;
}MM32_CORDIC_CRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_CORDIC_CRBits B;
}MM32_CORDIC_CR;

//CORDIC Status Register
typedef struct
{
	Strict_32Bit BSY			:1;
	Strict_32Bit _reserved_0			:31;
}MM32_CORDIC_SRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_CORDIC_SRBits B;
}MM32_CORDIC_SR;


#endif

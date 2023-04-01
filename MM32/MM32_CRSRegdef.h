#ifndef _MM32_CRSREGDEF_H_
#define _MM32_CRSREGDEF_H_

#include "MM32_RegTypedef.h"
//CRS Control Register
typedef struct
{
	Strict_32Bit SYNCOKIE			:1;
	Strict_32Bit SYNCWARNIE			:1;
	Strict_32Bit ERRIE			:1;
	Strict_32Bit ESYNCIE			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit CEN			:1;
	Strict_32Bit AUTOTRIMEN			:1;
	Strict_32Bit SWSYNC			:1;
	Strict_32Bit TRIM			:10;
	Strict_32Bit _reserved_1			:14;
}MM32_CRS_CRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_CRS_CRBits B;
}MM32_CRS_CR;

//CRS Configuration Register
typedef struct
{
	Strict_32Bit RELOAD			:16;
	Strict_32Bit FELIM			:8;
	Strict_32Bit SYNCDIV			:3;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit SYNCSRC			:2;
	Strict_32Bit _reserved_1			:1;
	Strict_32Bit SYNCPOL			:1;
}MM32_CRS_CFGRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_CRS_CFGRBits B;
}MM32_CRS_CFGR;

//CRS Interrupt Status Register
typedef struct
{
	Strict_32Bit SYNCOKF			:1;
	Strict_32Bit SYNCWARNF			:1;
	Strict_32Bit ERRF			:1;
	Strict_32Bit ESYNCF			:1;
	Strict_32Bit _reserved_0			:4;
	Strict_32Bit SYNCERR			:1;
	Strict_32Bit SYNCMISS			:1;
	Strict_32Bit TRIMOVF			:1;
	Strict_32Bit _reserved_1			:4;
	Strict_32Bit FEDIR			:1;
	Strict_32Bit FECAP			:16;
}MM32_CRS_lSRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_CRS_lSRBits B;
}MM32_CRS_lSR;

//CRS Interrupt Flag Clear Register
typedef struct
{
	Strict_32Bit SYNCOKC			:1;
	Strict_32Bit SYNCWARNC			:1;
	Strict_32Bit ERRC			:1;
	Strict_32Bit ESYNCC			:1;
	Strict_32Bit _reserved_0			:28;
}MM32_CRS_lCRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_CRS_lCRBits B;
}MM32_CRS_lCR;


#endif

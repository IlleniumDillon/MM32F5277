#ifndef _MM32_PWRREGDEF_H_
#define _MM32_PWRREGDEF_H_

#include "MM32_RegTypedef.h"
//Power Control Register 1
typedef struct
{
	Strict_32Bit LPDS			:1;
	Strict_32Bit PDDS			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit CSBF			:1;
	Strict_32Bit _reserved_1			:9;
	Strict_32Bit LPR			:1;
	Strict_32Bit VOS			:2;
	Strict_32Bit _reserved_2			:16;
}MM32_PWR_CR1Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_PWR_CR1Bits B;
}MM32_PWR_CR1;

//Power Control Status Register
typedef struct
{
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit SBF			:1;
	Strict_32Bit _reserved_1			:12;
	Strict_32Bit VOSRDY			:1;
	Strict_32Bit _reserved_2			:17;
}MM32_PWR_CSRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_PWR_CSRBits B;
}MM32_PWR_CSR;

//Power Control Register 2
typedef struct
{
	Strict_32Bit EWUP			:6;
	Strict_32Bit _reserved_0			:26;
}MM32_PWR_CR2Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_PWR_CR2Bits B;
}MM32_PWR_CR2;

//Power Control Register 3
typedef struct
{
	Strict_32Bit WP			:6;
	Strict_32Bit _reserved_0			:26;
}MM32_PWR_CR3Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_PWR_CR3Bits B;
}MM32_PWR_CR3;

//Power Control Register 4
typedef struct
{
	Strict_32Bit FILTSEL0			:2;
	Strict_32Bit FILTE0			:2;
	Strict_32Bit FILTF0			:1;
	Strict_32Bit _reserved_0			:3;
	Strict_32Bit FILTCNT0			:8;
	Strict_32Bit _reserved_1			:16;
}MM32_PWR_CR4Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_PWR_CR4Bits B;
}MM32_PWR_CR4;

//Power Control Register 5
typedef struct
{
	Strict_32Bit FILTSEL1			:2;
	Strict_32Bit FILTE1			:2;
	Strict_32Bit FILTF1			:1;
	Strict_32Bit _reserved_0			:3;
	Strict_32Bit FILTCNT1			:8;
	Strict_32Bit _reserved_1			:16;
}MM32_PWR_CR5Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_PWR_CR5Bits B;
}MM32_PWR_CR5;

//Power Control Register 6
typedef struct
{
	Strict_32Bit STDBY_FS_WK			:3;
	Strict_32Bit _reserved_0			:29;
}MM32_PWR_CR6Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_PWR_CR6Bits B;
}MM32_PWR_CR6;

//Power Status Register
typedef struct
{
	Strict_32Bit WUF			:6;
	Strict_32Bit _reserved_0			:26;
}MM32_PWR_SRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_PWR_SRBits B;
}MM32_PWR_SR;

//Power Status Clear Register
typedef struct
{
	Strict_32Bit CWUF			:6;
	Strict_32Bit _reserved_0			:26;
}MM32_PWR_SCRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_PWR_SCRBits B;
}MM32_PWR_SCR;

//Power Configuration Register
typedef struct
{
	Strict_32Bit LSICALSEL			:5;
	Strict_32Bit LSICAL			:5;
	Strict_32Bit _reserved_0			:22;
}MM32_PWR_CFGRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_PWR_CFGRBits B;
}MM32_PWR_CFGR;


#endif

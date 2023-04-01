#ifndef _MM32_FLASHREGDEF_H_
#define _MM32_FLASHREGDEF_H_

#include "MM32_RegTypedef.h"
//Flash Access Control Register
typedef struct
{
	Strict_32Bit LATENCY			:3;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit PRFTBE			:1;
	Strict_32Bit PRFTBS			:1;
	Strict_32Bit _reserved_1			:26;
}MM32_FLASH_ACRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLASH_ACRBits B;
}MM32_FLASH_ACR;

//FPEC key register
typedef struct
{
	Strict_32Bit FKEYR			:32;
}MM32_FLASH_KEYRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLASH_KEYRBits B;
}MM32_FLASH_KEYR;

//Flash OPTKEY register
typedef struct
{
	Strict_32Bit OPTKEYR			:32;
}MM32_FLASH_OPTKEYRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLASH_OPTKEYRBits B;
}MM32_FLASH_OPTKEYR;

//Flash Status Register
typedef struct
{
	Strict_32Bit BSY			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit PGERR			:1;
	Strict_32Bit _reserved_1			:1;
	Strict_32Bit WRPRTERR			:1;
	Strict_32Bit EOP			:1;
	Strict_32Bit _reserved_2			:26;
}MM32_FLASH_SRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLASH_SRBits B;
}MM32_FLASH_SR;

//Flash Control Register
typedef struct
{
	Strict_32Bit PG			:1;
	Strict_32Bit PER			:1;
	Strict_32Bit MER			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit OPTPG			:1;
	Strict_32Bit OPTER			:1;
	Strict_32Bit STRT			:1;
	Strict_32Bit LOCK			:1;
	Strict_32Bit _reserved_1			:1;
	Strict_32Bit OPTWRE			:1;
	Strict_32Bit _reserved_2			:22;
}MM32_FLASH_CRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLASH_CRBits B;
}MM32_FLASH_CR;

//Flash Address Register
typedef struct
{
	Strict_32Bit FAR			:32;
}MM32_FLASH_ARBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLASH_ARBits B;
}MM32_FLASH_AR;

//option byte register
typedef struct
{
	Strict_32Bit OPTERR			:1;
	Strict_32Bit RDPRT			:1;
	Strict_32Bit WDG_SW			:1;
	Strict_32Bit nRST_STOP			:1;
	Strict_32Bit nRST_STDBY			:1;
	Strict_32Bit _reserved_0			:5;
	Strict_32Bit Data0			:8;
	Strict_32Bit Data1			:8;
	Strict_32Bit _reserved_1			:6;
}MM32_FLASH_OBRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLASH_OBRBits B;
}MM32_FLASH_OBR;

//write protection register
typedef struct
{
	Strict_32Bit WRP			:32;
}MM32_FLASH_WRPR0Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLASH_WRPR0Bits B;
}MM32_FLASH_WRPR0;

//write protection register
typedef struct
{
	Strict_32Bit WRP			:32;
}MM32_FLASH_WRPR1Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLASH_WRPR1Bits B;
}MM32_FLASH_WRPR1;


#endif

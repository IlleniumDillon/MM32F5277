#ifndef _MM32_DACREGDEF_H_
#define _MM32_DACREGDEF_H_

#include "MM32_RegTypedef.h"
//DAC Control Register
typedef struct
{
	Strict_32Bit EN1			:1;
	Strict_32Bit BOFF1			:1;
	Strict_32Bit TEN1			:1;
	Strict_32Bit _reserved_0			:3;
	Strict_32Bit WAVE1			:2;
	Strict_32Bit MAMP1			:4;
	Strict_32Bit DMA_EN1			:1;
	Strict_32Bit OE_EN1			:1;
	Strict_32Bit _reserved_1			:2;
	Strict_32Bit EN2			:1;
	Strict_32Bit BOFF2			:1;
	Strict_32Bit TEN2			:1;
	Strict_32Bit _reserved_2			:3;
	Strict_32Bit WAVE2			:2;
	Strict_32Bit MAMP2			:4;
	Strict_32Bit DMA_EN2			:1;
	Strict_32Bit OE2_EN			:1;
	Strict_32Bit _reserved_3			:2;
}MM32_DAC_CRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DAC_CRBits B;
}MM32_DAC_CR;

//DAC Software Trigger Register
typedef struct
{
	Strict_32Bit SW_TRIG1			:1;
	Strict_32Bit SW_TRIG2			:1;
	Strict_32Bit _reserved_0			:30;
}MM32_DAC_SWTRIGRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DAC_SWTRIGRBits B;
}MM32_DAC_SWTRIGR;

//12-Bit Right-Justified Data Holding Register for DAC Channel 1
typedef struct
{
	Strict_32Bit DACC1DHR			:12;
	Strict_32Bit _reserved_0			:20;
}MM32_DAC_DHR12R1Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DAC_DHR12R1Bits B;
}MM32_DAC_DHR12R1;

//12-Bit Left-Justified Data Holding Register for DAC Channel 1
typedef struct
{
	Strict_32Bit _reserved_0			:4;
	Strict_32Bit DACC1DHR			:12;
	Strict_32Bit _reserved_1			:16;
}MM32_DAC_DHR12L1Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DAC_DHR12L1Bits B;
}MM32_DAC_DHR12L1;

//8-Bit Right-Justified Data Holding Register for DAC Channel 1
typedef struct
{
	Strict_32Bit DACC1DHR			:8;
	Strict_32Bit _reserved_0			:24;
}MM32_DAC_DHR8R1Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DAC_DHR8R1Bits B;
}MM32_DAC_DHR8R1;

//12-Bit Right-Justified Data Holding Register for DAC Channel 2
typedef struct
{
	Strict_32Bit DACC2DHR			:12;
	Strict_32Bit _reserved_0			:20;
}MM32_DAC_DHR12R2Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DAC_DHR12R2Bits B;
}MM32_DAC_DHR12R2;

//12-Bit Left-Justified Data Holding Register for DAC Channel 2
typedef struct
{
	Strict_32Bit _reserved_0			:4;
	Strict_32Bit DACC2DHR			:12;
	Strict_32Bit _reserved_1			:16;
}MM32_DAC_DHR12L2Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DAC_DHR12L2Bits B;
}MM32_DAC_DHR12L2;

//8-Bit Right-Justified Data Holding Register for DAC Channel 2
typedef struct
{
	Strict_32Bit DACC2DHR			:8;
	Strict_32Bit _reserved_0			:24;
}MM32_DAC_DHR8R2Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DAC_DHR8R2Bits B;
}MM32_DAC_DHR8R2;

//12-Bit Right-Justified Data Holding Registers for Dual DACs
typedef struct
{
	Strict_32Bit DACC1DHR			:12;
	Strict_32Bit _reserved_0			:4;
	Strict_32Bit DACC2DHR			:12;
	Strict_32Bit _reserved_1			:4;
}MM32_DAC_DHR12RDBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DAC_DHR12RDBits B;
}MM32_DAC_DHR12RD;

//12-Bit Left-Justified Data Holding Registers for Dual DACs
typedef struct
{
	Strict_32Bit _reserved_0			:4;
	Strict_32Bit DACC1DHR			:12;
	Strict_32Bit _reserved_1			:4;
	Strict_32Bit DACC2DHR			:12;
}MM32_DAC_DHR12LDBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DAC_DHR12LDBits B;
}MM32_DAC_DHR12LD;

//8-Bit Right-Justified Data Holding Registers for Dual DACs
typedef struct
{
	Strict_32Bit DACC1DHR			:8;
	Strict_32Bit DACC2DHR			:8;
	Strict_32Bit _reserved_0			:16;
}MM32_DAC_DHR8RDBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DAC_DHR8RDBits B;
}MM32_DAC_DHR8RD;

//DAC Channel 1 Data Output Register
typedef struct
{
	Strict_32Bit DACC1DOR			:12;
	Strict_32Bit _reserved_0			:20;
}MM32_DAC_DOR1Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DAC_DOR1Bits B;
}MM32_DAC_DOR1;

//DAC Channel 2 Data Output Register
typedef struct
{
	Strict_32Bit DACC2DOR			:12;
	Strict_32Bit _reserved_0			:20;
}MM32_DAC_DOR2Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DAC_DOR2Bits B;
}MM32_DAC_DOR2;


#endif

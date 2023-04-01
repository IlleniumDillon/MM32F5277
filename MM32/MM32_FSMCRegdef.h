#ifndef _MM32_FSMCREGDEF_H_
#define _MM32_FSMCREGDEF_H_

#include "MM32_RegTypedef.h"
//Memory Mask Register 0
typedef struct
{
	Strict_32Bit MEM_SIZE			:5;
	Strict_32Bit MEM_TYPE			:3;
	Strict_32Bit REG_SELECT			:3;
	Strict_32Bit _reserved_0			:21;
}MM32_FSMC_SMSKR0Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FSMC_SMSKR0Bits B;
}MM32_FSMC_SMSKR0;

//Memory Mask Register 0
typedef struct
{
	Strict_32Bit MEM_SIZE			:5;
	Strict_32Bit MEM_TYPE			:3;
	Strict_32Bit REG_SELECT			:3;
	Strict_32Bit _reserved_0			:21;
}MM32_FSMC_SMSKR1Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FSMC_SMSKR1Bits B;
}MM32_FSMC_SMSKR1;

//Memory Mask Register 0
typedef struct
{
	Strict_32Bit MEM_SIZE			:5;
	Strict_32Bit MEM_TYPE			:3;
	Strict_32Bit REG_SELECT			:3;
	Strict_32Bit _reserved_0			:21;
}MM32_FSMC_SMSKR2Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FSMC_SMSKR2Bits B;
}MM32_FSMC_SMSKR2;

//Memory Mask Register 0
typedef struct
{
	Strict_32Bit MEM_SIZE			:5;
	Strict_32Bit MEM_TYPE			:3;
	Strict_32Bit REG_SELECT			:3;
	Strict_32Bit _reserved_0			:21;
}MM32_FSMC_SMSKR3Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FSMC_SMSKR3Bits B;
}MM32_FSMC_SMSKR3;

//Memory Timing Register 0
typedef struct
{
	Strict_32Bit t_rc			:6;
	Strict_32Bit t_as			:2;
	Strict_32Bit t_wr			:2;
	Strict_32Bit t_wp			:6;
	Strict_32Bit _reserved_0			:10;
	Strict_32Bit READY_MODE			:1;
	Strict_32Bit _reserved_1			:1;
	Strict_32Bit SM_READ_PIPE			:2;
	Strict_32Bit _reserved_2			:2;
}MM32_FSMC_SMTMGR_SET0Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FSMC_SMTMGR_SET0Bits B;
}MM32_FSMC_SMTMGR_SET0;

//Memory Timing Register 0
typedef struct
{
	Strict_32Bit t_rc			:6;
	Strict_32Bit t_as			:2;
	Strict_32Bit t_wr			:2;
	Strict_32Bit t_wp			:6;
	Strict_32Bit _reserved_0			:10;
	Strict_32Bit READY_MODE			:1;
	Strict_32Bit _reserved_1			:1;
	Strict_32Bit SM_READ_PIPE			:2;
	Strict_32Bit _reserved_2			:2;
}MM32_FSMC_SMTMGR_SET1Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FSMC_SMTMGR_SET1Bits B;
}MM32_FSMC_SMTMGR_SET1;

//Memory Timing Register 0
typedef struct
{
	Strict_32Bit t_rc			:6;
	Strict_32Bit t_as			:2;
	Strict_32Bit t_wr			:2;
	Strict_32Bit t_wp			:6;
	Strict_32Bit _reserved_0			:10;
	Strict_32Bit READY_MODE			:1;
	Strict_32Bit _reserved_1			:1;
	Strict_32Bit SM_READ_PIPE			:2;
	Strict_32Bit _reserved_2			:2;
}MM32_FSMC_SMTMGR_SET2Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FSMC_SMTMGR_SET2Bits B;
}MM32_FSMC_SMTMGR_SET2;

//memory control register
typedef struct
{
	Strict_32Bit FLASHRP			:1;
	Strict_32Bit _reserved_0			:6;
	Strict_32Bit SMDW0			:3;
	Strict_32Bit SMDW1			:3;
	Strict_32Bit SMDW2			:3;
	Strict_32Bit _reserved_1			:16;
}MM32_FSMC_SMCTLRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FSMC_SMCTLRBits B;
}MM32_FSMC_SMCTLR;


#endif

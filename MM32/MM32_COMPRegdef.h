#ifndef _MM32_COMPREGDEF_H_
#define _MM32_COMPREGDEF_H_

#include "MM32_RegTypedef.h"
//Comparator x (x=1, 2, 3) Control and Status Register
typedef struct
{
	Strict_32Bit EN			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit MODE			:2;
	Strict_32Bit INM_SEL			:2;
	Strict_32Bit _reserved_1			:1;
	Strict_32Bit INP_SEL			:2;
	Strict_32Bit _reserved_2			:1;
	Strict_32Bit OUT_SEL			:4;
	Strict_32Bit _reserved_3			:1;
	Strict_32Bit POL			:1;
	Strict_32Bit HYST			:2;
	Strict_32Bit OFLT			:3;
	Strict_32Bit _reserved_4			:7;
	Strict_32Bit WE			:1;
	Strict_32Bit OUT_ANA_SEL			:1;
	Strict_32Bit OUT			:1;
	Strict_32Bit LOCK			:1;
}MM32_COMP_CSRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_COMP_CSRBits B;
}MM32_COMP_CSR;

//Comparator External Reference Voltage Register
typedef struct
{
	Strict_32Bit CRV_SEL			:4;
	Strict_32Bit CRV_EN			:1;
	Strict_32Bit CRV_SRC			:1;
	Strict_32Bit _reserved_0			:26;
}MM32_COMP_CRVBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_COMP_CRVBits B;
}MM32_COMP_CRV;

//Comparator x (x=1, 2, 3) polling register
typedef struct
{
	Strict_32Bit POLL_EN			:1;
	Strict_32Bit POLL_CH			:1;
	Strict_32Bit FIXN			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit PERIOD			:3;
	Strict_32Bit _reserved_1			:1;
	Strict_32Bit POUT			:3;
	Strict_32Bit _reserved_2			:21;
}MM32_COMP_POLLBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_COMP_POLLBits B;
}MM32_COMP_POLL;


#endif

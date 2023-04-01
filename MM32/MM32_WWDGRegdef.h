#ifndef _MM32_WWDGREGDEF_H_
#define _MM32_WWDGREGDEF_H_

#include "MM32_RegTypedef.h"
//control register
typedef struct
{
	Strict_32Bit T			:7;
	Strict_32Bit WDGA			:1;
	Strict_32Bit _reserved_0			:24;
}MM32_WWDG_CRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_WWDG_CRBits B;
}MM32_WWDG_CR;

//configuration register
typedef struct
{
	Strict_32Bit W			:7;
	Strict_32Bit WDGTB			:2;
	Strict_32Bit EWI			:1;
	Strict_32Bit _reserved_0			:22;
}MM32_WWDG_CFGRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_WWDG_CFGRBits B;
}MM32_WWDG_CFGR;

//status register
typedef struct
{
	Strict_32Bit EWIF			:1;
	Strict_32Bit _reserved_0			:31;
}MM32_WWDG_SRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_WWDG_SRBits B;
}MM32_WWDG_SR;


#endif

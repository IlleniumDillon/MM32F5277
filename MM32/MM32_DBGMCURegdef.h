#ifndef _MM32_DBGMCUREGDEF_H_
#define _MM32_DBGMCUREGDEF_H_

#include "MM32_RegTypedef.h"
//MCU_IDCODE register
typedef struct
{
	Strict_32Bit DEV_ID			:32;
}MM32_DBGMCU_IDCODEBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DBGMCU_IDCODEBits B;
}MM32_DBGMCU_IDCODE;

//DEBUG control register
typedef struct
{
	Strict_32Bit _reserved_0			:3;
	Strict_32Bit debug_stop_for_ldo			:1;
	Strict_32Bit _reserved_1			:1;
	Strict_32Bit trace_ioen			:1;
	Strict_32Bit trace_mode			:2;
	Strict_32Bit debug_iwdg_stop			:1;
	Strict_32Bit debug_wwdg_stop			:1;
	Strict_32Bit debug_tim1_stop			:1;
	Strict_32Bit debug_tim2_stop			:1;
	Strict_32Bit debug_tim3_stop			:1;
	Strict_32Bit debug_tim4_stop			:1;
	Strict_32Bit _reserved_2			:3;
	Strict_32Bit debug_tim8_stop			:1;
	Strict_32Bit debug_tim5_stop			:1;
	Strict_32Bit debug_tim6_stop			:1;
	Strict_32Bit debug_tim7_stop			:1;
	Strict_32Bit _reserved_3			:11;
}MM32_DBGMCU_CRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DBGMCU_CRBits B;
}MM32_DBGMCU_CR;


#endif

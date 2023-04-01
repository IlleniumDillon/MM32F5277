#ifndef _MM32_BKPREGDEF_H_
#define _MM32_BKPREGDEF_H_

#include "MM32_RegTypedef.h"
//RTC Clock Calibration Register
typedef struct
{
	Strict_32Bit CAL			:7;
	Strict_32Bit CCO			:1;
	Strict_32Bit ASOE			:1;
	Strict_32Bit ASOS			:1;
	Strict_32Bit _reserved_0			:22;
}MM32_BKP_RTCCRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_BKP_RTCCRBits B;
}MM32_BKP_RTCCR;

//Backup Control Register
typedef struct
{
	Strict_32Bit TPE			:1;
	Strict_32Bit TPAL			:1;
	Strict_32Bit _reserved_0			:30;
}MM32_BKP_CRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_BKP_CRBits B;
}MM32_BKP_CR;

//Backup Control Status Register
typedef struct
{
	Strict_32Bit CTE			:1;
	Strict_32Bit CTI			:1;
	Strict_32Bit TPIE			:1;
	Strict_32Bit _reserved_0			:5;
	Strict_32Bit TEF			:1;
	Strict_32Bit TIF			:1;
	Strict_32Bit _reserved_1			:22;
}MM32_BKP_CSRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_BKP_CSRBits B;
}MM32_BKP_CSR;

//Backup data register n
typedef struct
{
	Strict_32Bit BKP			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_BKP_DRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_BKP_DRBits B;
}MM32_BKP_DR;


#endif

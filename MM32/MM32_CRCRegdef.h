#ifndef _MM32_CRCREGDEF_H_
#define _MM32_CRCREGDEF_H_

#include "MM32_RegTypedef.h"
//CRC data register
typedef struct
{
	Strict_32Bit DR			:32;
}MM32_CRC_DRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_CRC_DRBits B;
}MM32_CRC_DR;

//CRC independent data register
typedef struct
{
	Strict_32Bit IDR			:32;
}MM32_CRC_IDRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_CRC_IDRBits B;
}MM32_CRC_IDR;

//CRC Control Register
typedef struct
{
	Strict_32Bit RST			:1;
	Strict_32Bit RI			:1;
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit BEI			:1;
	Strict_32Bit BEO			:1;
	Strict_32Bit RO			:1;
	Strict_32Bit _reserved_1			:7;
	Strict_32Bit PWIDTH			:2;
	Strict_32Bit _reserved_2			:16;
}MM32_CRC_CRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_CRC_CRBits B;
}MM32_CRC_CR;

//CRC initial value register
typedef struct
{
	Strict_32Bit IVR			:32;
}MM32_CRC_IVRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_CRC_IVRBits B;
}MM32_CRC_IVR;

//CRC polynomial register
typedef struct
{
	Strict_32Bit PR			:32;
}MM32_CRC_PRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_CRC_PRBits B;
}MM32_CRC_PR;


#endif

#ifndef _MM32_GPIOIREGDEF_H_
#define _MM32_GPIOIREGDEF_H_

#include "MM32_RegTypedef.h"
//Port Configuration Low Register
typedef struct
{
	Strict_32Bit MODE0			:2;
	Strict_32Bit MODE1			:2;
	Strict_32Bit MODE2			:2;
	Strict_32Bit MODE3			:2;
	Strict_32Bit MODE4			:2;
	Strict_32Bit MODE5			:2;
	Strict_32Bit MODE6			:2;
	Strict_32Bit MODE7			:2;
	Strict_32Bit CNF0			:2;
	Strict_32Bit CNF1			:2;
	Strict_32Bit CNF2			:2;
	Strict_32Bit CNF3			:2;
	Strict_32Bit CNF4			:2;
	Strict_32Bit CNF5			:2;
	Strict_32Bit CNF6			:2;
	Strict_32Bit CNF7			:2;
}MM32_GPIOI_CRLBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_GPIOI_CRLBits B;
}MM32_GPIOI_CRL;

//Port Configuration High Register
typedef struct
{
	Strict_32Bit MODE8			:2;
	Strict_32Bit MODE9			:2;
	Strict_32Bit MODE10			:2;
	Strict_32Bit MODE11			:2;
	Strict_32Bit MODE12			:2;
	Strict_32Bit MODE13			:2;
	Strict_32Bit MODE14			:2;
	Strict_32Bit MODE15			:2;
	Strict_32Bit CNF8			:2;
	Strict_32Bit CNF9			:2;
	Strict_32Bit CNF10			:2;
	Strict_32Bit CNF11			:2;
	Strict_32Bit CNF12			:2;
	Strict_32Bit CNF13			:2;
	Strict_32Bit CNF14			:2;
	Strict_32Bit CNF15			:2;
}MM32_GPIOI_CRHBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_GPIOI_CRHBits B;
}MM32_GPIOI_CRH;

//Port Input Data Register
typedef struct
{
	Strict_32Bit IDRY			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_GPIOI_IDRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_GPIOI_IDRBits B;
}MM32_GPIOI_IDR;

//PORT OUTPUT DATA REGISTER
typedef struct
{
	Strict_32Bit ODRY			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_GPIOI_ODRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_GPIOI_ODRBits B;
}MM32_GPIOI_ODR;

//Port Set/Clear Register
typedef struct
{
	Strict_32Bit BSy			:16;
	Strict_32Bit BRy			:16;
}MM32_GPIOI_BSRRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_GPIOI_BSRRBits B;
}MM32_GPIOI_BSRR;

//Port Bit Clear Register
typedef struct
{
	Strict_32Bit BRy			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_GPIOI_BRRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_GPIOI_BRRBits B;
}MM32_GPIOI_BRR;

//Port Configuration Lock Register
typedef struct
{
	Strict_32Bit LCKy			:16;
	Strict_32Bit LCKK			:1;
	Strict_32Bit _reserved_0			:15;
}MM32_GPIOI_LCKRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_GPIOI_LCKRBits B;
}MM32_GPIOI_LCKR;

//PORT OUTPUT OPEN DRAIN CONTROL REGISTER
typedef struct
{
	Strict_32Bit PX0			:2;
	Strict_32Bit PX15_PX1			:30;
}MM32_GPIOI_DCRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_GPIOI_DCRBits B;
}MM32_GPIOI_DCR;

//Port alternate function low-order register
typedef struct
{
	Strict_32Bit AFRy			:32;
}MM32_GPIOI_AFRLBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_GPIOI_AFRLBits B;
}MM32_GPIOI_AFRL;

//Port alternate function high-order register
typedef struct
{
	Strict_32Bit AFRy			:32;
}MM32_GPIOI_AFRHBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_GPIOI_AFRHBits B;
}MM32_GPIOI_AFRH;


#endif

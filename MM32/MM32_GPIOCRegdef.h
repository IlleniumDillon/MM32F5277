#ifndef _MM32_GPIOCREGDEF_H_
#define _MM32_GPIOCREGDEF_H_

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
}MM32_GPIOC_CRLBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_GPIOC_CRLBits B;
}MM32_GPIOC_CRL;

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
}MM32_GPIOC_CRHBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_GPIOC_CRHBits B;
}MM32_GPIOC_CRH;

//Port Input Data Register
typedef struct
{
	Strict_32Bit IDRY			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_GPIOC_IDRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_GPIOC_IDRBits B;
}MM32_GPIOC_IDR;

//PORT OUTPUT DATA REGISTER
typedef struct
{
	Strict_32Bit ODRY			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_GPIOC_ODRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_GPIOC_ODRBits B;
}MM32_GPIOC_ODR;

//Port Set/Clear Register
typedef struct
{
	Strict_32Bit BSy			:16;
	Strict_32Bit BRy			:16;
}MM32_GPIOC_BSRRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_GPIOC_BSRRBits B;
}MM32_GPIOC_BSRR;

//Port Bit Clear Register
typedef struct
{
	Strict_32Bit BRy			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_GPIOC_BRRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_GPIOC_BRRBits B;
}MM32_GPIOC_BRR;

//Port Configuration Lock Register
typedef struct
{
	Strict_32Bit LCKy			:16;
	Strict_32Bit LCKK			:1;
	Strict_32Bit _reserved_0			:15;
}MM32_GPIOC_LCKRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_GPIOC_LCKRBits B;
}MM32_GPIOC_LCKR;

//PORT OUTPUT OPEN DRAIN CONTROL REGISTER
typedef struct
{
	Strict_32Bit PX0			:2;
	Strict_32Bit PX15_PX1			:30;
}MM32_GPIOC_DCRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_GPIOC_DCRBits B;
}MM32_GPIOC_DCR;

//Port alternate function low-order register
typedef struct
{
	Strict_32Bit AFRy			:32;
}MM32_GPIOC_AFRLBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_GPIOC_AFRLBits B;
}MM32_GPIOC_AFRL;

//Port alternate function high-order register
typedef struct
{
	Strict_32Bit AFRy			:32;
}MM32_GPIOC_AFRHBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_GPIOC_AFRHBits B;
}MM32_GPIOC_AFRH;


#endif

#ifndef _MM32_EXTIREGDEF_H_
#define _MM32_EXTIREGDEF_H_

#include "MM32_RegTypedef.h"
//interrupt mask register
typedef struct
{
	Strict_32Bit IMR			:32;
}MM32_EXTI_IMRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_EXTI_IMRBits B;
}MM32_EXTI_IMR;

//event mask register
typedef struct
{
	Strict_32Bit EMR			:32;
}MM32_EXTI_EMRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_EXTI_EMRBits B;
}MM32_EXTI_EMR;

//Rising edge trigger select register
typedef struct
{
	Strict_32Bit TR			:32;
}MM32_EXTI_RTSRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_EXTI_RTSRBits B;
}MM32_EXTI_RTSR;

//Falling edge trigger select register
typedef struct
{
	Strict_32Bit TR			:32;
}MM32_EXTI_FTSRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_EXTI_FTSRBits B;
}MM32_EXTI_FTSR;

//Software Interrupt Event Register
typedef struct
{
	Strict_32Bit SWIER			:32;
}MM32_EXTI_SWIERBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_EXTI_SWIERBits B;
}MM32_EXTI_SWIER;

//pending register
typedef struct
{
	Strict_32Bit PR			:32;
}MM32_EXTI_PRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_EXTI_PRBits B;
}MM32_EXTI_PR;


#endif

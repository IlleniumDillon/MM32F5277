#ifndef _MM32_RTCREGDEF_H_
#define _MM32_RTCREGDEF_H_

#include "MM32_RegTypedef.h"
//RTC control register high bits
typedef struct
{
	Strict_32Bit SECIE			:1;
	Strict_32Bit ALRIE			:1;
	Strict_32Bit OWIE			:1;
	Strict_32Bit _reserved_0			:29;
}MM32_RTC_CRHBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_RTC_CRHBits B;
}MM32_RTC_CRH;

//RTC control register low bits
typedef struct
{
	Strict_32Bit SECF			:1;
	Strict_32Bit ALRF			:1;
	Strict_32Bit OWF			:1;
	Strict_32Bit RSF			:1;
	Strict_32Bit CNF			:1;
	Strict_32Bit RTOFF			:1;
	Strict_32Bit ALPEN			:1;
	Strict_32Bit _reserved_0			:25;
}MM32_RTC_CRLBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_RTC_CRLBits B;
}MM32_RTC_CRL;

//RTC prescaler load register high bits
typedef struct
{
	Strict_32Bit PRL			:4;
	Strict_32Bit _reserved_0			:28;
}MM32_RTC_PRLHBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_RTC_PRLHBits B;
}MM32_RTC_PRLH;

//RTC prescaler load register low bits
typedef struct
{
	Strict_32Bit PRL			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_RTC_PRLLBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_RTC_PRLLBits B;
}MM32_RTC_PRLL;

//RTC prescaler division factor register high bits
typedef struct
{
	Strict_32Bit DIV			:4;
	Strict_32Bit _reserved_0			:28;
}MM32_RTC_DIVHBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_RTC_DIVHBits B;
}MM32_RTC_DIVH;

//RTC prescaler division factor register low bits
typedef struct
{
	Strict_32Bit DIV			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_RTC_DIVLBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_RTC_DIVLBits B;
}MM32_RTC_DIVL;

//RTC counter register high bits
typedef struct
{
	Strict_32Bit CNT			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_RTC_CNTHBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_RTC_CNTHBits B;
}MM32_RTC_CNTH;

//RTC counter register low bits
typedef struct
{
	Strict_32Bit CNT			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_RTC_CNTLBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_RTC_CNTLBits B;
}MM32_RTC_CNTL;

//RTC alarm register high bit
typedef struct
{
	Strict_32Bit ALR			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_RTC_ALRHBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_RTC_ALRHBits B;
}MM32_RTC_ALRH;

//RTC alarm register low bits
typedef struct
{
	Strict_32Bit ALR			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_RTC_ALRLBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_RTC_ALRLBits B;
}MM32_RTC_ALRL;

//RTC millisecond register high bit
typedef struct
{
	Strict_32Bit MSR			:4;
	Strict_32Bit _reserved_0			:28;
}MM32_RTC_MSRHBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_RTC_MSRHBits B;
}MM32_RTC_MSRH;

//RTC millisecond register low bit
typedef struct
{
	Strict_32Bit MSR			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_RTC_MSRLBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_RTC_MSRLBits B;
}MM32_RTC_MSRL;

//RTC LSE Configuration Register
typedef struct
{
	Strict_32Bit LSE_TC			:2;
	Strict_32Bit LSE_OUTENH			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit LSE_DR			:2;
	Strict_32Bit LSE_RFB_SEL			:2;
	Strict_32Bit LSE_IB			:2;
	Strict_32Bit LSE_AAC			:1;
	Strict_32Bit _reserved_1			:21;
}MM32_RTC_LSE_CFGBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_RTC_LSE_CFGBits B;
}MM32_RTC_LSE_CFG;


#endif

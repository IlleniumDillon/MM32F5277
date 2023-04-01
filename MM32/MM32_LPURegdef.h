#ifndef _MM32_LPUREGDEF_H_
#define _MM32_LPUREGDEF_H_

#include "MM32_RegTypedef.h"
//LPUART Baud Rate Register
typedef struct
{
	Strict_32Bit BAUD			:3;
	Strict_32Bit _reserved_0			:5;
	Strict_32Bit BREN			:1;
	Strict_32Bit _reserved_1			:7;
	Strict_32Bit BR			:16;
}MM32_LPU_LPUBAUDBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_LPU_LPUBAUDBits B;
}MM32_LPU_LPUBAUD;

//LPUART Baud Rate Modulation Control Register
typedef struct
{
	Strict_32Bit MCTL			:12;
	Strict_32Bit _reserved_0			:20;
}MM32_LPU_MODUBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_LPU_MODUBits B;
}MM32_LPU_MODU;

//LPUART Interrupt Flag Register
typedef struct
{
	Strict_32Bit RXIF			:1;
	Strict_32Bit TXIF			:1;
	Strict_32Bit RXNEGIF			:1;
	Strict_32Bit TC_IF			:1;
	Strict_32Bit _reserved_0			:28;
}MM32_LPU_LPUIFBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_LPU_LPUIFBits B;
}MM32_LPU_LPUIF;

//LPUART Status Register
typedef struct
{
	Strict_32Bit RXOV			:1;
	Strict_32Bit FERR			:1;
	Strict_32Bit MATCH			:1;
	Strict_32Bit RXF			:1;
	Strict_32Bit TXE			:1;
	Strict_32Bit TC			:1;
	Strict_32Bit PERR			:1;
	Strict_32Bit START			:1;
	Strict_32Bit _reserved_0			:24;
}MM32_LPU_LPUSTABits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_LPU_LPUSTABits B;
}MM32_LPU_LPUSTA;

//LPUART Control Register
typedef struct
{
	Strict_32Bit RXIE			:1;
	Strict_32Bit NEDET			:1;
	Strict_32Bit TXIE			:1;
	Strict_32Bit TCIE			:1;
	Strict_32Bit ERRIE			:1;
	Strict_32Bit RXEV			:2;
	Strict_32Bit DL			:1;
	Strict_32Bit SL			:1;
	Strict_32Bit PTYP			:1;
	Strict_32Bit PAREN			:1;
	Strict_32Bit RXPOL			:1;
	Strict_32Bit TXPOL			:1;
	Strict_32Bit _reserved_0			:19;
}MM32_LPU_LPUCONBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_LPU_LPUCONBits B;
}MM32_LPU_LPUCON;

//LPUART transmit and receive enable register
typedef struct
{
	Strict_32Bit TXEN			:1;
	Strict_32Bit RXEN			:1;
	Strict_32Bit DMAT			:1;
	Strict_32Bit DMAR			:1;
	Strict_32Bit _reserved_0			:28;
}MM32_LPU_LPUENBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_LPU_LPUENBits B;
}MM32_LPU_LPUEN;

//LPUART receive data register
typedef struct
{
	Strict_32Bit DATA			:8;
	Strict_32Bit _reserved_0			:24;
}MM32_LPU_LPURXDBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_LPU_LPURXDBits B;
}MM32_LPU_LPURXD;

//LPUART transmit data register
typedef struct
{
	Strict_32Bit DATA			:8;
	Strict_32Bit _reserved_0			:24;
}MM32_LPU_LPUTXDBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_LPU_LPUTXDBits B;
}MM32_LPU_LPUTXD;

//LPUART data match register
typedef struct
{
	Strict_32Bit COMPARE			:8;
	Strict_32Bit _reserved_0			:24;
}MM32_LPU_COMPAREBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_LPU_COMPAREBits B;
}MM32_LPU_COMPARE;

//LPUART Wakeup Register
typedef struct
{
	Strict_32Bit WKCKE			:1;
	Strict_32Bit _reserved_0			:31;
}MM32_LPU_WKCKEBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_LPU_WKCKEBits B;
}MM32_LPU_WKCKE;


#endif

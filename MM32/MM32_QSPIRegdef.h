#ifndef _MM32_QSPIREGDEF_H_
#define _MM32_QSPIREGDEF_H_

#include "MM32_RegTypedef.h"
//control register
typedef struct
{
	Strict_32Bit OPMODE			:2;
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit SCKMODE			:1;
	Strict_32Bit XIPMODE			:1;
	Strict_32Bit _reserved_1			:10;
	Strict_32Bit CSRHT			:3;
	Strict_32Bit _reserved_2			:5;
	Strict_32Bit SCKDIV			:6;
	Strict_32Bit _reserved_3			:2;
}MM32_QSPI_CRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_QSPI_CRBits B;
}MM32_QSPI_CR;

//status register
typedef struct
{
	Strict_32Bit CUROP			:2;
	Strict_32Bit OPCRCF			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit TCF			:1;
	Strict_32Bit BUSY			:1;
	Strict_32Bit XIPST			:1;
	Strict_32Bit _reserved_1			:1;
	Strict_32Bit EMPTY			:1;
	Strict_32Bit FULL			:1;
	Strict_32Bit _reserved_2			:2;
	Strict_32Bit LEVEL			:4;
	Strict_32Bit _reserved_3			:8;
	Strict_32Bit DEPTH			:4;
	Strict_32Bit _reserved_4			:4;
}MM32_QSPI_SRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_QSPI_SRBits B;
}MM32_QSPI_SR;

//Interrupt DMA Enable Register
typedef struct
{
	Strict_32Bit TCFINTEN			:1;
	Strict_32Bit _reserved_0			:5;
	Strict_32Bit EMPTYINTEN			:1;
	Strict_32Bit FULLINTEN			:1;
	Strict_32Bit TCFDMAEN			:1;
	Strict_32Bit _reserved_1			:5;
	Strict_32Bit EMPTYDMAEN			:1;
	Strict_32Bit FULLDMAEN			:1;
	Strict_32Bit _reserved_2			:16;
}MM32_QSPI_IDERBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_QSPI_IDERBits B;
}MM32_QSPI_IDER;

//Direct Mode Control Register
typedef struct
{
	Strict_32Bit INST			:8;
	Strict_32Bit IMODE			:2;
	Strict_32Bit ADMODE			:2;
	Strict_32Bit ADSIZE			:2;
	Strict_32Bit ABMODE			:2;
	Strict_32Bit ABSIZE			:2;
	Strict_32Bit DMODE			:2;
	Strict_32Bit DSIZE			:2;
	Strict_32Bit RXDLY			:2;
	Strict_32Bit NUMDC			:5;
	Strict_32Bit _reserved_0			:3;
}MM32_QSPI_DMCRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_QSPI_DMCRBits B;
}MM32_QSPI_DMCR;

//Direct Mode Interactive Byte Register
typedef struct
{
	Strict_32Bit DALT			:32;
}MM32_QSPI_DABRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_QSPI_DABRBits B;
}MM32_QSPI_DABR;

//Indirect Mode Control Register
typedef struct
{
	Strict_32Bit INST			:8;
	Strict_32Bit IMODE			:2;
	Strict_32Bit ADMODE			:2;
	Strict_32Bit ADSIZE			:2;
	Strict_32Bit ABMODE			:2;
	Strict_32Bit ABSIZE			:2;
	Strict_32Bit DMODE			:2;
	Strict_32Bit DSIZE			:2;
	Strict_32Bit RXDLY			:2;
	Strict_32Bit NUMDC			:5;
	Strict_32Bit XIPIM			:1;
	Strict_32Bit IDMODE			:1;
	Strict_32Bit _reserved_0			:1;
}MM32_QSPI_IMCRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_QSPI_IMCRBits B;
}MM32_QSPI_IMCR;

//Indirect Mode Interactive Byte Register
typedef struct
{
	Strict_32Bit IALT			:32;
}MM32_QSPI_IABRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_QSPI_IABRBits B;
}MM32_QSPI_IABR;

//Indirect Mode Address Register
typedef struct
{
	Strict_32Bit IADDR			:32;
}MM32_QSPI_IADRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_QSPI_IADRBits B;
}MM32_QSPI_IADR;

//Indirect Mode Data FIFO Register
typedef struct
{
	Strict_32Bit IDATA			:32;
}MM32_QSPI_IDFRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_QSPI_IDFRBits B;
}MM32_QSPI_IDFR;

//Indirect Mode Data Length Register
typedef struct
{
	Strict_32Bit IDLEN			:20;
	Strict_32Bit _reserved_0			:12;
}MM32_QSPI_IDLRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_QSPI_IDLRBits B;
}MM32_QSPI_IDLR;

//Indirect Mode Wait Count Register
typedef struct
{
	Strict_32Bit IWCNT			:30;
	Strict_32Bit _reserved_0			:2;
}MM32_QSPI_IWCRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_QSPI_IWCRBits B;
}MM32_QSPI_IWCR;


#endif

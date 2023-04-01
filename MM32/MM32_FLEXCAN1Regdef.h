#ifndef _MM32_FLEXCAN1REGDEF_H_
#define _MM32_FLEXCAN1REGDEF_H_

#include "MM32_RegTypedef.h"
//Module configuration register
typedef struct
{
	Strict_32Bit MAXMB			:7;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit IDAM			:2;
	Strict_32Bit _reserved_1			:3;
	Strict_32Bit LPRIOEN			:1;
	Strict_32Bit _reserved_2			:1;
	Strict_32Bit DMA			:1;
	Strict_32Bit IRMQ			:1;
	Strict_32Bit SRXDIS			:1;
	Strict_32Bit _reserved_3			:1;
	Strict_32Bit WAKSRC			:1;
	Strict_32Bit LPMACK			:1;
	Strict_32Bit WRNEN			:1;
	Strict_32Bit SLFWAK			:1;
	Strict_32Bit SUPV			:1;
	Strict_32Bit FRZACK			:1;
	Strict_32Bit SOFTRST			:1;
	Strict_32Bit _reserved_4			:1;
	Strict_32Bit NOTRDY			:1;
	Strict_32Bit HALT			:1;
	Strict_32Bit RFEN			:1;
	Strict_32Bit FRZ			:1;
	Strict_32Bit MDIS			:1;
}MM32_FLEXCAN1_MCRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_MCRBits B;
}MM32_FLEXCAN1_MCR;

//Control 1 register
typedef struct
{
	Strict_32Bit PROPSEG			:3;
	Strict_32Bit LOM			:1;
	Strict_32Bit LBUF			:1;
	Strict_32Bit TSYN			:1;
	Strict_32Bit BOFFREC			:1;
	Strict_32Bit SMP			:1;
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit RWRNMSK			:1;
	Strict_32Bit TWRNMSK			:1;
	Strict_32Bit LPB			:1;
	Strict_32Bit CLKSRC			:1;
	Strict_32Bit ERRMSK			:1;
	Strict_32Bit BOFFMSK			:1;
	Strict_32Bit PSEG2			:3;
	Strict_32Bit PSEG1			:3;
	Strict_32Bit RJW			:2;
	Strict_32Bit PRESDIV			:8;
}MM32_FLEXCAN1_CTRL1Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_CTRL1Bits B;
}MM32_FLEXCAN1_CTRL1;

//Free running timer register
typedef struct
{
	Strict_32Bit TIMER			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_FLEXCAN1_TIMERBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_TIMERBits B;
}MM32_FLEXCAN1_TIMER;

//  Rx mailbox global mask register
typedef struct
{
	Strict_32Bit MG			:32;
}MM32_FLEXCAN1_RXMGMASKBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_RXMGMASKBits B;
}MM32_FLEXCAN1_RXMGMASK;

//  Rx 14 mask register
typedef struct
{
	Strict_32Bit RX14M			:32;
}MM32_FLEXCAN1_RX14MASKBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_RX14MASKBits B;
}MM32_FLEXCAN1_RX14MASK;

//  Rx 15 mask register
typedef struct
{
	Strict_32Bit RX15M			:32;
}MM32_FLEXCAN1_RX15MASKBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_RX15MASKBits B;
}MM32_FLEXCAN1_RX15MASK;

//  Error count register
typedef struct
{
	Strict_32Bit TXERRCNT			:8;
	Strict_32Bit RXERRCNT			:8;
	Strict_32Bit _reserved_0			:16;
}MM32_FLEXCAN1_ECRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_ECRBits B;
}MM32_FLEXCAN1_ECR;

//  Error and status 1 register
typedef struct
{
	Strict_32Bit WAKINT			:1;
	Strict_32Bit ERRINT			:1;
	Strict_32Bit BOFFINT			:1;
	Strict_32Bit RX			:1;
	Strict_32Bit FLTCONF			:2;
	Strict_32Bit TX			:1;
	Strict_32Bit IDLE			:1;
	Strict_32Bit RXWRN			:1;
	Strict_32Bit TXWRN			:1;
	Strict_32Bit STFERR			:1;
	Strict_32Bit FRMERR			:1;
	Strict_32Bit CRCERR			:1;
	Strict_32Bit ACKERR			:1;
	Strict_32Bit BIT0ERR			:1;
	Strict_32Bit BIT1ERR			:1;
	Strict_32Bit RWRNINT			:1;
	Strict_32Bit TWRNINT			:1;
	Strict_32Bit SYNCH			:1;
	Strict_32Bit BOFFDONEINT			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit ERROVR			:1;
	Strict_32Bit _reserved_1			:10;
}MM32_FLEXCAN1_ESR1Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_ESR1Bits B;
}MM32_FLEXCAN1_ESR1;

//  Interrupt mask 1 register
typedef struct
{
	Strict_32Bit BUF15TO0M			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_FLEXCAN1_IMASK1Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_IMASK1Bits B;
}MM32_FLEXCAN1_IMASK1;

//  Interrupt flag 1 register
typedef struct
{
	Strict_32Bit BUF0I			:1;
	Strict_32Bit BUF4TO1I			:4;
	Strict_32Bit BUF5I			:1;
	Strict_32Bit BUF6I			:1;
	Strict_32Bit BUF7I			:1;
	Strict_32Bit BUF15TO8I			:8;
	Strict_32Bit _reserved_0			:16;
}MM32_FLEXCAN1_IFLAG1Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_IFLAG1Bits B;
}MM32_FLEXCAN1_IFLAG1;

//  Control 2 register
typedef struct
{
	Strict_32Bit _reserved_0			:16;
	Strict_32Bit EACEN			:1;
	Strict_32Bit RRS			:1;
	Strict_32Bit MRP			:1;
	Strict_32Bit TASD			:5;
	Strict_32Bit RFFN			:4;
	Strict_32Bit _reserved_1			:2;
	Strict_32Bit BOFFDONEMSK			:1;
	Strict_32Bit _reserved_2			:1;
}MM32_FLEXCAN1_CTRL2Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_CTRL2Bits B;
}MM32_FLEXCAN1_CTRL2;

//  Error and status 2 register
typedef struct
{
	Strict_32Bit _reserved_0			:13;
	Strict_32Bit IMB			:1;
	Strict_32Bit VPS			:1;
	Strict_32Bit _reserved_1			:1;
	Strict_32Bit LPTM			:7;
	Strict_32Bit _reserved_2			:9;
}MM32_FLEXCAN1_ESR2Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_ESR2Bits B;
}MM32_FLEXCAN1_ESR2;

//  CRC register
typedef struct
{
	Strict_32Bit TXCRC			:15;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit MBCRC			:7;
	Strict_32Bit _reserved_1			:9;
}MM32_FLEXCAN1_CRCRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_CRCRBits B;
}MM32_FLEXCAN1_CRCR;

//  Rx FIFO global mask register
typedef struct
{
	Strict_32Bit FGM			:32;
}MM32_FLEXCAN1_RXFGMASKBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_RXFGMASKBits B;
}MM32_FLEXCAN1_RXFGMASK;

//  Rx FIFO information register
typedef struct
{
	Strict_32Bit IDHIT			:9;
	Strict_32Bit _reserved_0			:23;
}MM32_FLEXCAN1_RXFIRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_RXFIRBits B;
}MM32_FLEXCAN1_RXFIR;

//  CAN bit timing register
typedef struct
{
	Strict_32Bit EPSEG2			:5;
	Strict_32Bit EPSEG1			:5;
	Strict_32Bit EPROPSEG			:6;
	Strict_32Bit ERJW			:5;
	Strict_32Bit EPRESDIV			:10;
	Strict_32Bit BTF			:1;
}MM32_FLEXCAN1_CBTBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_CBTBits B;
}MM32_FLEXCAN1_CBT;

// Message Buffer 0 CS Register..Message Buffer 15 CS Register
typedef struct
{
	Strict_32Bit TIMESTAMP			:16;
	Strict_32Bit DLC			:4;
	Strict_32Bit RTR			:1;
	Strict_32Bit IDE			:1;
	Strict_32Bit SRR			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit CODE			:4;
	Strict_32Bit _reserved_1			:4;
}MM32_FLEXCAN1_CS0Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_CS0Bits B;
}MM32_FLEXCAN1_CS0;

// Message Buffer 0 ID Register..Message Buffer 15 ID Register
typedef struct
{
	Strict_32Bit EXT			:18;
	Strict_32Bit STD			:11;
	Strict_32Bit PRIO			:3;
}MM32_FLEXCAN1_ID0Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_ID0Bits B;
}MM32_FLEXCAN1_ID0;

// Message Buffer 0 WORD0 Register..Message Buffer 15 WORD0 Register
typedef struct
{
	Strict_32Bit BYTE3			:8;
	Strict_32Bit BYTE2			:8;
	Strict_32Bit BYTE1			:6;
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit BYTE0			:8;
}MM32_FLEXCAN1_WORD0Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_WORD0Bits B;
}MM32_FLEXCAN1_WORD0;

// Message Buffer 0 WORD1 Register..Message Buffer 15 WORD1 Register
typedef struct
{
	Strict_32Bit BYTE7			:8;
	Strict_32Bit BYTE6			:8;
	Strict_32Bit BYTE5			:6;
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit BYTE4			:8;
}MM32_FLEXCAN1_WORD1Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_WORD1Bits B;
}MM32_FLEXCAN1_WORD1;

// Message Buffer 0 CS Register..Message Buffer 15 CS Register
typedef struct
{
	Strict_32Bit TIMESTAMP			:16;
	Strict_32Bit DLC			:4;
	Strict_32Bit RTR			:1;
	Strict_32Bit IDE			:1;
	Strict_32Bit SRR			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit CODE			:4;
	Strict_32Bit _reserved_1			:4;
}MM32_FLEXCAN1_CS1Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_CS1Bits B;
}MM32_FLEXCAN1_CS1;

// Message Buffer 0 ID Register..Message Buffer 15 ID Register
typedef struct
{
	Strict_32Bit EXT			:18;
	Strict_32Bit STD			:11;
	Strict_32Bit PRIO			:3;
}MM32_FLEXCAN1_ID1Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_ID1Bits B;
}MM32_FLEXCAN1_ID1;

// Message Buffer 0 WORD0 Register..Message Buffer 15 WORD0 Register
typedef struct
{
	Strict_32Bit BYTE3			:8;
	Strict_32Bit BYTE2			:8;
	Strict_32Bit BYTE1			:6;
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit BYTE0			:8;
}MM32_FLEXCAN1_WORD01Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_WORD01Bits B;
}MM32_FLEXCAN1_WORD01;

// Message Buffer 0 WORD1 Register..Message Buffer 15 WORD1 Register
typedef struct
{
	Strict_32Bit BYTE7			:8;
	Strict_32Bit BYTE6			:8;
	Strict_32Bit BYTE5			:6;
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit BYTE4			:8;
}MM32_FLEXCAN1_WORD11Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_WORD11Bits B;
}MM32_FLEXCAN1_WORD11;

// Message Buffer 0 CS Register..Message Buffer 15 CS Register
typedef struct
{
	Strict_32Bit TIMESTAMP			:16;
	Strict_32Bit DLC			:4;
	Strict_32Bit RTR			:1;
	Strict_32Bit IDE			:1;
	Strict_32Bit SRR			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit CODE			:4;
	Strict_32Bit _reserved_1			:4;
}MM32_FLEXCAN1_CS2Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_CS2Bits B;
}MM32_FLEXCAN1_CS2;

// Message Buffer 0 ID Register..Message Buffer 15 ID Register
typedef struct
{
	Strict_32Bit EXT			:18;
	Strict_32Bit STD			:11;
	Strict_32Bit PRIO			:3;
}MM32_FLEXCAN1_ID2Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_ID2Bits B;
}MM32_FLEXCAN1_ID2;

// Message Buffer 0 WORD0 Register..Message Buffer 15 WORD0 Register
typedef struct
{
	Strict_32Bit BYTE3			:8;
	Strict_32Bit BYTE2			:8;
	Strict_32Bit BYTE1			:6;
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit BYTE0			:8;
}MM32_FLEXCAN1_WORD02Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_WORD02Bits B;
}MM32_FLEXCAN1_WORD02;

// Message Buffer 0 WORD1 Register..Message Buffer 15 WORD1 Register
typedef struct
{
	Strict_32Bit BYTE7			:8;
	Strict_32Bit BYTE6			:8;
	Strict_32Bit BYTE5			:6;
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit BYTE4			:8;
}MM32_FLEXCAN1_WORD12Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_WORD12Bits B;
}MM32_FLEXCAN1_WORD12;

// Message Buffer 0 CS Register..Message Buffer 15 CS Register
typedef struct
{
	Strict_32Bit TIMESTAMP			:16;
	Strict_32Bit DLC			:4;
	Strict_32Bit RTR			:1;
	Strict_32Bit IDE			:1;
	Strict_32Bit SRR			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit CODE			:4;
	Strict_32Bit _reserved_1			:4;
}MM32_FLEXCAN1_CS3Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_CS3Bits B;
}MM32_FLEXCAN1_CS3;

// Message Buffer 0 ID Register..Message Buffer 15 ID Register
typedef struct
{
	Strict_32Bit EXT			:18;
	Strict_32Bit STD			:11;
	Strict_32Bit PRIO			:3;
}MM32_FLEXCAN1_ID3Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_ID3Bits B;
}MM32_FLEXCAN1_ID3;

// Message Buffer 0 WORD0 Register..Message Buffer 15 WORD0 Register
typedef struct
{
	Strict_32Bit BYTE3			:8;
	Strict_32Bit BYTE2			:8;
	Strict_32Bit BYTE1			:6;
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit BYTE0			:8;
}MM32_FLEXCAN1_WORD03Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_WORD03Bits B;
}MM32_FLEXCAN1_WORD03;

// Message Buffer 0 WORD1 Register..Message Buffer 15 WORD1 Register
typedef struct
{
	Strict_32Bit BYTE7			:8;
	Strict_32Bit BYTE6			:8;
	Strict_32Bit BYTE5			:6;
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit BYTE4			:8;
}MM32_FLEXCAN1_WORD13Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_WORD13Bits B;
}MM32_FLEXCAN1_WORD13;

// Message Buffer 0 CS Register..Message Buffer 15 CS Register
typedef struct
{
	Strict_32Bit TIMESTAMP			:16;
	Strict_32Bit DLC			:4;
	Strict_32Bit RTR			:1;
	Strict_32Bit IDE			:1;
	Strict_32Bit SRR			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit CODE			:4;
	Strict_32Bit _reserved_1			:4;
}MM32_FLEXCAN1_CS4Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_CS4Bits B;
}MM32_FLEXCAN1_CS4;

// Message Buffer 0 ID Register..Message Buffer 15 ID Register
typedef struct
{
	Strict_32Bit EXT			:18;
	Strict_32Bit STD			:11;
	Strict_32Bit PRIO			:3;
}MM32_FLEXCAN1_ID4Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_ID4Bits B;
}MM32_FLEXCAN1_ID4;

// Message Buffer 0 WORD0 Register..Message Buffer 15 WORD0 Register
typedef struct
{
	Strict_32Bit BYTE3			:8;
	Strict_32Bit BYTE2			:8;
	Strict_32Bit BYTE1			:6;
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit BYTE0			:8;
}MM32_FLEXCAN1_WORD04Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_WORD04Bits B;
}MM32_FLEXCAN1_WORD04;

// Message Buffer 0 WORD1 Register..Message Buffer 15 WORD1 Register
typedef struct
{
	Strict_32Bit BYTE7			:8;
	Strict_32Bit BYTE6			:8;
	Strict_32Bit BYTE5			:6;
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit BYTE4			:8;
}MM32_FLEXCAN1_WORD14Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_WORD14Bits B;
}MM32_FLEXCAN1_WORD14;

// Message Buffer 0 CS Register..Message Buffer 15 CS Register
typedef struct
{
	Strict_32Bit TIMESTAMP			:16;
	Strict_32Bit DLC			:4;
	Strict_32Bit RTR			:1;
	Strict_32Bit IDE			:1;
	Strict_32Bit SRR			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit CODE			:4;
	Strict_32Bit _reserved_1			:4;
}MM32_FLEXCAN1_CS5Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_CS5Bits B;
}MM32_FLEXCAN1_CS5;

// Message Buffer 0 ID Register..Message Buffer 15 ID Register
typedef struct
{
	Strict_32Bit EXT			:18;
	Strict_32Bit STD			:11;
	Strict_32Bit PRIO			:3;
}MM32_FLEXCAN1_ID5Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_ID5Bits B;
}MM32_FLEXCAN1_ID5;

// Message Buffer 0 WORD0 Register..Message Buffer 15 WORD0 Register
typedef struct
{
	Strict_32Bit BYTE3			:8;
	Strict_32Bit BYTE2			:8;
	Strict_32Bit BYTE1			:6;
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit BYTE0			:8;
}MM32_FLEXCAN1_WORD05Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_WORD05Bits B;
}MM32_FLEXCAN1_WORD05;

// Message Buffer 0 WORD1 Register..Message Buffer 15 WORD1 Register
typedef struct
{
	Strict_32Bit BYTE7			:8;
	Strict_32Bit BYTE6			:8;
	Strict_32Bit BYTE5			:6;
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit BYTE4			:8;
}MM32_FLEXCAN1_WORD15Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_WORD15Bits B;
}MM32_FLEXCAN1_WORD15;

// Message Buffer 0 CS Register..Message Buffer 15 CS Register
typedef struct
{
	Strict_32Bit TIMESTAMP			:16;
	Strict_32Bit DLC			:4;
	Strict_32Bit RTR			:1;
	Strict_32Bit IDE			:1;
	Strict_32Bit SRR			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit CODE			:4;
	Strict_32Bit _reserved_1			:4;
}MM32_FLEXCAN1_CS6Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_CS6Bits B;
}MM32_FLEXCAN1_CS6;

// Message Buffer 0 ID Register..Message Buffer 15 ID Register
typedef struct
{
	Strict_32Bit EXT			:18;
	Strict_32Bit STD			:11;
	Strict_32Bit PRIO			:3;
}MM32_FLEXCAN1_ID6Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_ID6Bits B;
}MM32_FLEXCAN1_ID6;

// Message Buffer 0 WORD0 Register..Message Buffer 15 WORD0 Register
typedef struct
{
	Strict_32Bit BYTE3			:8;
	Strict_32Bit BYTE2			:8;
	Strict_32Bit BYTE1			:6;
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit BYTE0			:8;
}MM32_FLEXCAN1_WORD06Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_WORD06Bits B;
}MM32_FLEXCAN1_WORD06;

// Message Buffer 0 WORD1 Register..Message Buffer 15 WORD1 Register
typedef struct
{
	Strict_32Bit BYTE7			:8;
	Strict_32Bit BYTE6			:8;
	Strict_32Bit BYTE5			:6;
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit BYTE4			:8;
}MM32_FLEXCAN1_WORD16Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_WORD16Bits B;
}MM32_FLEXCAN1_WORD16;

// Message Buffer 0 CS Register..Message Buffer 15 CS Register
typedef struct
{
	Strict_32Bit TIMESTAMP			:16;
	Strict_32Bit DLC			:4;
	Strict_32Bit RTR			:1;
	Strict_32Bit IDE			:1;
	Strict_32Bit SRR			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit CODE			:4;
	Strict_32Bit _reserved_1			:4;
}MM32_FLEXCAN1_CS7Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_CS7Bits B;
}MM32_FLEXCAN1_CS7;

// Message Buffer 0 ID Register..Message Buffer 15 ID Register
typedef struct
{
	Strict_32Bit EXT			:18;
	Strict_32Bit STD			:11;
	Strict_32Bit PRIO			:3;
}MM32_FLEXCAN1_ID7Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_ID7Bits B;
}MM32_FLEXCAN1_ID7;

// Message Buffer 0 WORD0 Register..Message Buffer 15 WORD0 Register
typedef struct
{
	Strict_32Bit BYTE3			:8;
	Strict_32Bit BYTE2			:8;
	Strict_32Bit BYTE1			:6;
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit BYTE0			:8;
}MM32_FLEXCAN1_WORD07Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_WORD07Bits B;
}MM32_FLEXCAN1_WORD07;

// Message Buffer 0 WORD1 Register..Message Buffer 15 WORD1 Register
typedef struct
{
	Strict_32Bit BYTE7			:8;
	Strict_32Bit BYTE6			:8;
	Strict_32Bit BYTE5			:6;
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit BYTE4			:8;
}MM32_FLEXCAN1_WORD17Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_WORD17Bits B;
}MM32_FLEXCAN1_WORD17;

// Message Buffer 0 CS Register..Message Buffer 15 CS Register
typedef struct
{
	Strict_32Bit TIMESTAMP			:16;
	Strict_32Bit DLC			:4;
	Strict_32Bit RTR			:1;
	Strict_32Bit IDE			:1;
	Strict_32Bit SRR			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit CODE			:4;
	Strict_32Bit _reserved_1			:4;
}MM32_FLEXCAN1_CS8Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_CS8Bits B;
}MM32_FLEXCAN1_CS8;

// Message Buffer 0 ID Register..Message Buffer 15 ID Register
typedef struct
{
	Strict_32Bit EXT			:18;
	Strict_32Bit STD			:11;
	Strict_32Bit PRIO			:3;
}MM32_FLEXCAN1_ID8Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_ID8Bits B;
}MM32_FLEXCAN1_ID8;

// Message Buffer 0 WORD0 Register..Message Buffer 15 WORD0 Register
typedef struct
{
	Strict_32Bit BYTE3			:8;
	Strict_32Bit BYTE2			:8;
	Strict_32Bit BYTE1			:6;
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit BYTE0			:8;
}MM32_FLEXCAN1_WORD08Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_WORD08Bits B;
}MM32_FLEXCAN1_WORD08;

// Message Buffer 0 WORD1 Register..Message Buffer 15 WORD1 Register
typedef struct
{
	Strict_32Bit BYTE7			:8;
	Strict_32Bit BYTE6			:8;
	Strict_32Bit BYTE5			:6;
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit BYTE4			:8;
}MM32_FLEXCAN1_WORD18Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_WORD18Bits B;
}MM32_FLEXCAN1_WORD18;

// Message Buffer 0 CS Register..Message Buffer 15 CS Register
typedef struct
{
	Strict_32Bit TIMESTAMP			:16;
	Strict_32Bit DLC			:4;
	Strict_32Bit RTR			:1;
	Strict_32Bit IDE			:1;
	Strict_32Bit SRR			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit CODE			:4;
	Strict_32Bit _reserved_1			:4;
}MM32_FLEXCAN1_CS9Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_CS9Bits B;
}MM32_FLEXCAN1_CS9;

// Message Buffer 0 ID Register..Message Buffer 15 ID Register
typedef struct
{
	Strict_32Bit EXT			:18;
	Strict_32Bit STD			:11;
	Strict_32Bit PRIO			:3;
}MM32_FLEXCAN1_ID9Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_ID9Bits B;
}MM32_FLEXCAN1_ID9;

// Message Buffer 0 WORD0 Register..Message Buffer 15 WORD0 Register
typedef struct
{
	Strict_32Bit BYTE3			:8;
	Strict_32Bit BYTE2			:8;
	Strict_32Bit BYTE1			:6;
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit BYTE0			:8;
}MM32_FLEXCAN1_WORD09Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_WORD09Bits B;
}MM32_FLEXCAN1_WORD09;

// Message Buffer 0 WORD1 Register..Message Buffer 15 WORD1 Register
typedef struct
{
	Strict_32Bit BYTE7			:8;
	Strict_32Bit BYTE6			:8;
	Strict_32Bit BYTE5			:6;
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit BYTE4			:8;
}MM32_FLEXCAN1_WORD19Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_WORD19Bits B;
}MM32_FLEXCAN1_WORD19;

// Message Buffer 0 CS Register..Message Buffer 15 CS Register
typedef struct
{
	Strict_32Bit TIMESTAMP			:16;
	Strict_32Bit DLC			:4;
	Strict_32Bit RTR			:1;
	Strict_32Bit IDE			:1;
	Strict_32Bit SRR			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit CODE			:4;
	Strict_32Bit _reserved_1			:4;
}MM32_FLEXCAN1_CS10Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_CS10Bits B;
}MM32_FLEXCAN1_CS10;

// Message Buffer 0 ID Register..Message Buffer 15 ID Register
typedef struct
{
	Strict_32Bit EXT			:18;
	Strict_32Bit STD			:11;
	Strict_32Bit PRIO			:3;
}MM32_FLEXCAN1_ID10Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_ID10Bits B;
}MM32_FLEXCAN1_ID10;

// Message Buffer 0 WORD0 Register..Message Buffer 15 WORD0 Register
typedef struct
{
	Strict_32Bit BYTE3			:8;
	Strict_32Bit BYTE2			:8;
	Strict_32Bit BYTE1			:6;
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit BYTE0			:8;
}MM32_FLEXCAN1_WORD010Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_WORD010Bits B;
}MM32_FLEXCAN1_WORD010;

// Message Buffer 0 WORD1 Register..Message Buffer 15 WORD1 Register
typedef struct
{
	Strict_32Bit BYTE7			:8;
	Strict_32Bit BYTE6			:8;
	Strict_32Bit BYTE5			:6;
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit BYTE4			:8;
}MM32_FLEXCAN1_WORD110Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_WORD110Bits B;
}MM32_FLEXCAN1_WORD110;

// Message Buffer 0 CS Register..Message Buffer 15 CS Register
typedef struct
{
	Strict_32Bit TIMESTAMP			:16;
	Strict_32Bit DLC			:4;
	Strict_32Bit RTR			:1;
	Strict_32Bit IDE			:1;
	Strict_32Bit SRR			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit CODE			:4;
	Strict_32Bit _reserved_1			:4;
}MM32_FLEXCAN1_CS11Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_CS11Bits B;
}MM32_FLEXCAN1_CS11;

// Message Buffer 0 ID Register..Message Buffer 15 ID Register
typedef struct
{
	Strict_32Bit EXT			:18;
	Strict_32Bit STD			:11;
	Strict_32Bit PRIO			:3;
}MM32_FLEXCAN1_ID11Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_ID11Bits B;
}MM32_FLEXCAN1_ID11;

// Message Buffer 0 WORD0 Register..Message Buffer 15 WORD0 Register
typedef struct
{
	Strict_32Bit BYTE3			:8;
	Strict_32Bit BYTE2			:8;
	Strict_32Bit BYTE1			:6;
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit BYTE0			:8;
}MM32_FLEXCAN1_WORD011Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_WORD011Bits B;
}MM32_FLEXCAN1_WORD011;

// Message Buffer 0 WORD1 Register..Message Buffer 15 WORD1 Register
typedef struct
{
	Strict_32Bit BYTE7			:8;
	Strict_32Bit BYTE6			:8;
	Strict_32Bit BYTE5			:6;
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit BYTE4			:8;
}MM32_FLEXCAN1_WORD111Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_WORD111Bits B;
}MM32_FLEXCAN1_WORD111;

// Message Buffer 0 CS Register..Message Buffer 15 CS Register
typedef struct
{
	Strict_32Bit TIMESTAMP			:16;
	Strict_32Bit DLC			:4;
	Strict_32Bit RTR			:1;
	Strict_32Bit IDE			:1;
	Strict_32Bit SRR			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit CODE			:4;
	Strict_32Bit _reserved_1			:4;
}MM32_FLEXCAN1_CS12Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_CS12Bits B;
}MM32_FLEXCAN1_CS12;

// Message Buffer 0 ID Register..Message Buffer 15 ID Register
typedef struct
{
	Strict_32Bit EXT			:18;
	Strict_32Bit STD			:11;
	Strict_32Bit PRIO			:3;
}MM32_FLEXCAN1_ID12Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_ID12Bits B;
}MM32_FLEXCAN1_ID12;

// Message Buffer 0 WORD0 Register..Message Buffer 15 WORD0 Register
typedef struct
{
	Strict_32Bit BYTE3			:8;
	Strict_32Bit BYTE2			:8;
	Strict_32Bit BYTE1			:6;
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit BYTE0			:8;
}MM32_FLEXCAN1_WORD012Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_WORD012Bits B;
}MM32_FLEXCAN1_WORD012;

// Message Buffer 0 WORD1 Register..Message Buffer 15 WORD1 Register
typedef struct
{
	Strict_32Bit BYTE7			:8;
	Strict_32Bit BYTE6			:8;
	Strict_32Bit BYTE5			:6;
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit BYTE4			:8;
}MM32_FLEXCAN1_WORD112Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_WORD112Bits B;
}MM32_FLEXCAN1_WORD112;

// Message Buffer 0 CS Register..Message Buffer 15 CS Register
typedef struct
{
	Strict_32Bit TIMESTAMP			:16;
	Strict_32Bit DLC			:4;
	Strict_32Bit RTR			:1;
	Strict_32Bit IDE			:1;
	Strict_32Bit SRR			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit CODE			:4;
	Strict_32Bit _reserved_1			:4;
}MM32_FLEXCAN1_CS13Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_CS13Bits B;
}MM32_FLEXCAN1_CS13;

// Message Buffer 0 ID Register..Message Buffer 15 ID Register
typedef struct
{
	Strict_32Bit EXT			:18;
	Strict_32Bit STD			:11;
	Strict_32Bit PRIO			:3;
}MM32_FLEXCAN1_ID13Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_ID13Bits B;
}MM32_FLEXCAN1_ID13;

// Message Buffer 0 WORD0 Register..Message Buffer 15 WORD0 Register
typedef struct
{
	Strict_32Bit BYTE3			:8;
	Strict_32Bit BYTE2			:8;
	Strict_32Bit BYTE1			:6;
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit BYTE0			:8;
}MM32_FLEXCAN1_WORD013Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_WORD013Bits B;
}MM32_FLEXCAN1_WORD013;

// Message Buffer 0 WORD1 Register..Message Buffer 15 WORD1 Register
typedef struct
{
	Strict_32Bit BYTE7			:8;
	Strict_32Bit BYTE6			:8;
	Strict_32Bit BYTE5			:6;
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit BYTE4			:8;
}MM32_FLEXCAN1_WORD113Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_WORD113Bits B;
}MM32_FLEXCAN1_WORD113;

// Message Buffer 0 CS Register..Message Buffer 15 CS Register
typedef struct
{
	Strict_32Bit TIMESTAMP			:16;
	Strict_32Bit DLC			:4;
	Strict_32Bit RTR			:1;
	Strict_32Bit IDE			:1;
	Strict_32Bit SRR			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit CODE			:4;
	Strict_32Bit _reserved_1			:4;
}MM32_FLEXCAN1_CS14Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_CS14Bits B;
}MM32_FLEXCAN1_CS14;

// Message Buffer 0 ID Register..Message Buffer 15 ID Register
typedef struct
{
	Strict_32Bit EXT			:18;
	Strict_32Bit STD			:11;
	Strict_32Bit PRIO			:3;
}MM32_FLEXCAN1_ID14Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_ID14Bits B;
}MM32_FLEXCAN1_ID14;

// Message Buffer 0 WORD0 Register..Message Buffer 15 WORD0 Register
typedef struct
{
	Strict_32Bit BYTE3			:8;
	Strict_32Bit BYTE2			:8;
	Strict_32Bit BYTE1			:6;
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit BYTE0			:8;
}MM32_FLEXCAN1_WORD014Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_WORD014Bits B;
}MM32_FLEXCAN1_WORD014;

// Message Buffer 0 WORD1 Register..Message Buffer 15 WORD1 Register
typedef struct
{
	Strict_32Bit BYTE7			:8;
	Strict_32Bit BYTE6			:8;
	Strict_32Bit BYTE5			:6;
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit BYTE4			:8;
}MM32_FLEXCAN1_WORD114Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_WORD114Bits B;
}MM32_FLEXCAN1_WORD114;

// Message Buffer 0 CS Register..Message Buffer 15 CS Register
typedef struct
{
	Strict_32Bit TIMESTAMP			:16;
	Strict_32Bit DLC			:4;
	Strict_32Bit RTR			:1;
	Strict_32Bit IDE			:1;
	Strict_32Bit SRR			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit CODE			:4;
	Strict_32Bit _reserved_1			:4;
}MM32_FLEXCAN1_CS15Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_CS15Bits B;
}MM32_FLEXCAN1_CS15;

// Message Buffer 0 ID Register..Message Buffer 15 ID Register
typedef struct
{
	Strict_32Bit EXT			:18;
	Strict_32Bit STD			:11;
	Strict_32Bit PRIO			:3;
}MM32_FLEXCAN1_ID15Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_ID15Bits B;
}MM32_FLEXCAN1_ID15;

// Message Buffer 0 WORD0 Register..Message Buffer 15 WORD0 Register
typedef struct
{
	Strict_32Bit BYTE3			:8;
	Strict_32Bit BYTE2			:8;
	Strict_32Bit BYTE1			:6;
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit BYTE0			:8;
}MM32_FLEXCAN1_WORD015Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_WORD015Bits B;
}MM32_FLEXCAN1_WORD015;

// Message Buffer 0 WORD1 Register..Message Buffer 15 WORD1 Register
typedef struct
{
	Strict_32Bit BYTE7			:8;
	Strict_32Bit BYTE6			:8;
	Strict_32Bit BYTE5			:6;
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit BYTE4			:8;
}MM32_FLEXCAN1_WORD115Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_WORD115Bits B;
}MM32_FLEXCAN1_WORD115;

//  R0 single mask register
typedef struct
{
	Strict_32Bit MI			:32;
}MM32_FLEXCAN1_RXIMR0Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_RXIMR0Bits B;
}MM32_FLEXCAN1_RXIMR0;

//  R0 single mask register
typedef struct
{
	Strict_32Bit MI			:32;
}MM32_FLEXCAN1_RXIMR1Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_RXIMR1Bits B;
}MM32_FLEXCAN1_RXIMR1;

//  R0 single mask register
typedef struct
{
	Strict_32Bit MI			:32;
}MM32_FLEXCAN1_RXIMR2Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_RXIMR2Bits B;
}MM32_FLEXCAN1_RXIMR2;

//  R0 single mask register
typedef struct
{
	Strict_32Bit MI			:32;
}MM32_FLEXCAN1_RXIMR3Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_RXIMR3Bits B;
}MM32_FLEXCAN1_RXIMR3;

//  R0 single mask register
typedef struct
{
	Strict_32Bit MI			:32;
}MM32_FLEXCAN1_RXIMR4Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_RXIMR4Bits B;
}MM32_FLEXCAN1_RXIMR4;

//  R0 single mask register
typedef struct
{
	Strict_32Bit MI			:32;
}MM32_FLEXCAN1_RXIMR5Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_RXIMR5Bits B;
}MM32_FLEXCAN1_RXIMR5;

//  R0 single mask register
typedef struct
{
	Strict_32Bit MI			:32;
}MM32_FLEXCAN1_RXIMR6Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_RXIMR6Bits B;
}MM32_FLEXCAN1_RXIMR6;

//  R0 single mask register
typedef struct
{
	Strict_32Bit MI			:32;
}MM32_FLEXCAN1_RXIMR7Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_RXIMR7Bits B;
}MM32_FLEXCAN1_RXIMR7;

//  R0 single mask register
typedef struct
{
	Strict_32Bit MI			:32;
}MM32_FLEXCAN1_RXIMR8Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_RXIMR8Bits B;
}MM32_FLEXCAN1_RXIMR8;

//  R0 single mask register
typedef struct
{
	Strict_32Bit MI			:32;
}MM32_FLEXCAN1_RXIMR9Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_RXIMR9Bits B;
}MM32_FLEXCAN1_RXIMR9;

//  R0 single mask register
typedef struct
{
	Strict_32Bit MI			:32;
}MM32_FLEXCAN1_RXIMR10Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_RXIMR10Bits B;
}MM32_FLEXCAN1_RXIMR10;

//  R0 single mask register
typedef struct
{
	Strict_32Bit MI			:32;
}MM32_FLEXCAN1_RXIMR11Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_RXIMR11Bits B;
}MM32_FLEXCAN1_RXIMR11;

//  R0 single mask register
typedef struct
{
	Strict_32Bit MI			:32;
}MM32_FLEXCAN1_RXIMR12Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_RXIMR12Bits B;
}MM32_FLEXCAN1_RXIMR12;

//  R0 single mask register
typedef struct
{
	Strict_32Bit MI			:32;
}MM32_FLEXCAN1_RXIMR13Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_RXIMR13Bits B;
}MM32_FLEXCAN1_RXIMR13;

//  R0 single mask register
typedef struct
{
	Strict_32Bit MI			:32;
}MM32_FLEXCAN1_RXIMR14Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_RXIMR14Bits B;
}MM32_FLEXCAN1_RXIMR14;

//  R0 single mask register
typedef struct
{
	Strict_32Bit MI			:32;
}MM32_FLEXCAN1_RXIMR15Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_FLEXCAN1_RXIMR15Bits B;
}MM32_FLEXCAN1_RXIMR15;


#endif

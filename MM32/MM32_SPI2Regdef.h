#ifndef _MM32_SPI2REGDEF_H_
#define _MM32_SPI2REGDEF_H_

#include "MM32_RegTypedef.h"
//transmit data register
typedef struct
{
	Strict_32Bit TXREG			:32;
}MM32_SPI2_I2S_TXREGBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_SPI2_I2S_TXREGBits B;
}MM32_SPI2_I2S_TXREG;

//receive data register
typedef struct
{
	Strict_32Bit RXREG			:32;
}MM32_SPI2_I2S_RXREGBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_SPI2_I2S_RXREGBits B;
}MM32_SPI2_I2S_RXREG;

//current status register
typedef struct
{
	Strict_32Bit TXEPT			:1;
	Strict_32Bit RXAVL			:1;
	Strict_32Bit TXFULL			:1;
	Strict_32Bit RXAVL_4BYTE			:1;
	Strict_32Bit TXFADDR			:4;
	Strict_32Bit RXFADDR			:4;
	Strict_32Bit BUSY			:1;
	Strict_32Bit CHSIDE			:1;
	Strict_32Bit _reserved_0			:18;
}MM32_SPI2_I2S_CSTATBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_SPI2_I2S_CSTATBits B;
}MM32_SPI2_I2S_CSTAT;

//Interrupt Status Register
typedef struct
{
	Strict_32Bit TX_INTF			:1;
	Strict_32Bit RX_INTF			:1;
	Strict_32Bit UNDERRUN_INTF			:1;
	Strict_32Bit RXOERR_INTF			:1;
	Strict_32Bit RXMATCH_INTF			:1;
	Strict_32Bit RXFULL_INTF			:1;
	Strict_32Bit TXEPT_INTF			:1;
	Strict_32Bit FRE_INTF			:1;
	Strict_32Bit _reserved_0			:24;
}MM32_SPI2_I2S_INTSTATBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_SPI2_I2S_INTSTATBits B;
}MM32_SPI2_I2S_INTSTAT;

//Interrupt Enable Register
typedef struct
{
	Strict_32Bit TX_IEN			:1;
	Strict_32Bit RX_IEN			:1;
	Strict_32Bit UNDERRUN_IEN			:1;
	Strict_32Bit RXOERR_IEN			:1;
	Strict_32Bit RXMATCH_IEN			:1;
	Strict_32Bit RXFULL_IEN			:1;
	Strict_32Bit TXEPT_IEN			:1;
	Strict_32Bit FRE_IEN			:1;
	Strict_32Bit _reserved_0			:24;
}MM32_SPI2_I2S_INTENBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_SPI2_I2S_INTENBits B;
}MM32_SPI2_I2S_INTEN;

//interrupt clear register
typedef struct
{
	Strict_32Bit TX_ICLR			:1;
	Strict_32Bit RX_ICLR			:1;
	Strict_32Bit UNDERRUN_ICLR			:1;
	Strict_32Bit RXOERR_ICLR			:1;
	Strict_32Bit RXMATCH_ICLR			:1;
	Strict_32Bit RXFULL_ICLR			:1;
	Strict_32Bit TXEPT_ICLR			:1;
	Strict_32Bit FRE_ICLR			:1;
	Strict_32Bit _reserved_0			:24;
}MM32_SPI2_I2S_INTCLRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_SPI2_I2S_INTCLRBits B;
}MM32_SPI2_I2S_INTCLR;

//global control register
typedef struct
{
	Strict_32Bit SPIEN			:1;
	Strict_32Bit INTEN			:1;
	Strict_32Bit MODE			:1;
	Strict_32Bit TXEN			:1;
	Strict_32Bit RXEN			:1;
	Strict_32Bit _reserved_0			:4;
	Strict_32Bit DMAMODE			:1;
	Strict_32Bit NSS			:1;
	Strict_32Bit DW8_32			:1;
	Strict_32Bit _reserved_1			:1;
	Strict_32Bit PAD_SEL			:5;
	Strict_32Bit _reserved_2			:14;
}MM32_SPI2_I2S_GCTLBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_SPI2_I2S_GCTLBits B;
}MM32_SPI2_I2S_GCTL;

//General Control Register
typedef struct
{
	Strict_32Bit CPHA			:1;
	Strict_32Bit CPOL			:1;
	Strict_32Bit LSBFE			:1;
	Strict_32Bit SPILEN			:1;
	Strict_32Bit RXEDGE			:1;
	Strict_32Bit TXEDGE			:1;
	Strict_32Bit CPHASEL			:1;
	Strict_32Bit TISEL			:1;
	Strict_32Bit MRDECHG			:3;
	Strict_32Bit _reserved_0			:21;
}MM32_SPI2_I2S_CCTLBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_SPI2_I2S_CCTLBits B;
}MM32_SPI2_I2S_CCTL;

//baud rate generator
typedef struct
{
	Strict_32Bit SPBRG			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_SPI2_I2S_SPBRGBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_SPI2_I2S_SPBRGBits B;
}MM32_SPI2_I2S_SPBRG;

//Receive data count register
typedef struct
{
	Strict_32Bit RXDNR			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_SPI2_I2S_RXDNRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_SPI2_I2S_RXDNRBits B;
}MM32_SPI2_I2S_RXDNR;

//Slave Chip Select Register
typedef struct
{
	Strict_32Bit NSS			:1;
	Strict_32Bit _reserved_0			:31;
}MM32_SPI2_I2S_NSSRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_SPI2_I2S_NSSRBits B;
}MM32_SPI2_I2S_NSSR;

//data control register
typedef struct
{
	Strict_32Bit EXTLEN			:5;
	Strict_32Bit _reserved_0			:27;
}MM32_SPI2_I2S_EXTCTLBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_SPI2_I2S_EXTCTLBits B;
}MM32_SPI2_I2S_EXTCTL;

//I2S configuration register
typedef struct
{
	Strict_32Bit CHLEN			:1;
	Strict_32Bit DATLEN			:2;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit I2SSTD			:2;
	Strict_32Bit PCMSYNC			:1;
	Strict_32Bit _reserved_1			:3;
	Strict_32Bit SPI_I2S			:1;
	Strict_32Bit MCKOE			:1;
	Strict_32Bit MCKSEL			:1;
	Strict_32Bit HFDSEL			:1;
	Strict_32Bit _reserved_2			:2;
	Strict_32Bit I2SDIV			:9;
	Strict_32Bit _reserved_3			:7;
}MM32_SPI2_I2S_I2SCFGRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_SPI2_I2S_I2SCFGRBits B;
}MM32_SPI2_I2S_I2SCFGR;


#endif

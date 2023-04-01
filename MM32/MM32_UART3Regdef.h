#ifndef _MM32_UART3REGDEF_H_
#define _MM32_UART3REGDEF_H_

#include "MM32_RegTypedef.h"
//UART transmit data register
typedef struct
{
	Strict_32Bit TXREG			:9;
	Strict_32Bit _reserved_0			:23;
}MM32_UART3_TDRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_UART3_TDRBits B;
}MM32_UART3_TDR;

//UART receive data register
typedef struct
{
	Strict_32Bit RXREG			:9;
	Strict_32Bit _reserved_0			:23;
}MM32_UART3_RDRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_UART3_RDRBits B;
}MM32_UART3_RDR;

//UART current status register
typedef struct
{
	Strict_32Bit TXC			:1;
	Strict_32Bit RXAVL			:1;
	Strict_32Bit TXFULL			:1;
	Strict_32Bit TXEPT			:1;
	Strict_32Bit _reserved_0			:28;
}MM32_UART3_CSRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_UART3_CSRBits B;
}MM32_UART3_CSR;

//UART Interrupt Status Register
typedef struct
{
	Strict_32Bit TX_INTF			:1;
	Strict_32Bit RX_INTF			:1;
	Strict_32Bit TXC_INTF			:1;
	Strict_32Bit RXOERR_INTF			:1;
	Strict_32Bit RXPERR_INTF			:1;
	Strict_32Bit RXFERR_INTF			:1;
	Strict_32Bit RXBRK_INTF			:1;
	Strict_32Bit TXBRK_INTF			:1;
	Strict_32Bit RXB8_INTF			:1;
	Strict_32Bit RXIDLE_INTF			:1;
	Strict_32Bit ABREND_INTF			:1;
	Strict_32Bit ABRERR_INTF			:1;
	Strict_32Bit _reserved_0			:20;
}MM32_UART3_ISRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_UART3_ISRBits B;
}MM32_UART3_ISR;

//UART Interrupt Enable Register
typedef struct
{
	Strict_32Bit TX_IEN			:1;
	Strict_32Bit RX_IEN			:1;
	Strict_32Bit TXC_IEN			:1;
	Strict_32Bit RXOERR_IEN			:1;
	Strict_32Bit RXPERR_IEN			:1;
	Strict_32Bit RXFERR_IEN			:1;
	Strict_32Bit RXBRK_IEN			:1;
	Strict_32Bit TXBRK_IEN			:1;
	Strict_32Bit RXB8_IEN			:1;
	Strict_32Bit RXIDLE_IEN			:1;
	Strict_32Bit ABREND_IEN			:1;
	Strict_32Bit ABRERR_IEN			:1;
	Strict_32Bit _reserved_0			:20;
}MM32_UART3_IERBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_UART3_IERBits B;
}MM32_UART3_IER;

//UART Interrupt Clear Register
typedef struct
{
	Strict_32Bit TX_ICLR			:1;
	Strict_32Bit RX_ICLR			:1;
	Strict_32Bit TXC_ICLR			:1;
	Strict_32Bit RXOERR_ICLR			:1;
	Strict_32Bit RXPERR_ICLR			:1;
	Strict_32Bit RXFERR_ICLR			:1;
	Strict_32Bit RXBRK_ICLR			:1;
	Strict_32Bit TXBRK_ICLR			:1;
	Strict_32Bit RXB8_ICLR			:1;
	Strict_32Bit RXIDLE_ICLR			:1;
	Strict_32Bit ABREND_ICLR			:1;
	Strict_32Bit ABRERR_ICLR			:1;
	Strict_32Bit _reserved_0			:20;
}MM32_UART3_ICRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_UART3_ICRBits B;
}MM32_UART3_ICR;

//UART Global Control Register
typedef struct
{
	Strict_32Bit UARTEN			:1;
	Strict_32Bit DMAMODE			:1;
	Strict_32Bit AUTOFLOWEN			:1;
	Strict_32Bit RXEN			:1;
	Strict_32Bit TXEN			:1;
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit SELB8			:1;
	Strict_32Bit SWAP			:1;
	Strict_32Bit RXTOG			:1;
	Strict_32Bit TXTOG			:1;
	Strict_32Bit _reserved_1			:21;
}MM32_UART3_GCRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_UART3_GCRBits B;
}MM32_UART3_GCR;

//UART General Control Register
typedef struct
{
	Strict_32Bit PEN			:1;
	Strict_32Bit PSEL			:1;
	Strict_32Bit SPB0			:1;
	Strict_32Bit BRK			:1;
	Strict_32Bit CHAR			:2;
	Strict_32Bit SPB1			:1;
	Strict_32Bit B8RXD			:1;
	Strict_32Bit B8TXD			:1;
	Strict_32Bit B8POL			:1;
	Strict_32Bit B8TOG			:1;
	Strict_32Bit B8EN			:1;
	Strict_32Bit RWU			:1;
	Strict_32Bit WAKE			:1;
	Strict_32Bit LIN			:1;
	Strict_32Bit _reserved_0			:17;
}MM32_UART3_CCRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_UART3_CCRBits B;
}MM32_UART3_CCR;

//UART Baud Rate Register
typedef struct
{
	Strict_32Bit DIV_Mantissa			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_UART3_BRRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_UART3_BRRBits B;
}MM32_UART3_BRR;

//UART Fractional Baud Rate Register
typedef struct
{
	Strict_32Bit DIV_Fraction			:4;
	Strict_32Bit _reserved_0			:28;
}MM32_UART3_FRABits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_UART3_FRABits B;
}MM32_UART3_FRA;

//UART receive address register
typedef struct
{
	Strict_32Bit RXADDR			:8;
	Strict_32Bit _reserved_0			:24;
}MM32_UART3_RXADDRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_UART3_RXADDRBits B;
}MM32_UART3_RXADDR;

//UART Receive Mask Register
typedef struct
{
	Strict_32Bit RXMASK			:8;
	Strict_32Bit _reserved_0			:24;
}MM32_UART3_RXMASKBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_UART3_RXMASKBits B;
}MM32_UART3_RXMASK;

//UART SCR register
typedef struct
{
	Strict_32Bit SCEN			:1;
	Strict_32Bit SCAEN			:1;
	Strict_32Bit NACK			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit SCFCNT			:8;
	Strict_32Bit HDSEL			:1;
	Strict_32Bit _reserved_1			:19;
}MM32_UART3_SCRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_UART3_SCRBits B;
}MM32_UART3_SCR;

//UART IDLE Data Length Register
typedef struct
{
	Strict_32Bit IDLR			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_UART3_IDLRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_UART3_IDLRBits B;
}MM32_UART3_IDLR;

//UART ABRCR Auto-Baud Rate Control Register
typedef struct
{
	Strict_32Bit Abren			:1;
	Strict_32Bit Abr_bitcnt			:2;
	Strict_32Bit Former_edge			:1;
	Strict_32Bit Latter_edge			:1;
	Strict_32Bit _reserved_0			:27;
}MM32_UART3_ABRCRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_UART3_ABRCRBits B;
}MM32_UART3_ABRCR;

//UART IRDA infrared function control register
typedef struct
{
	Strict_32Bit Siren			:1;
	Strict_32Bit Sirlp			:1;
	Strict_32Bit _reserved_0			:6;
	Strict_32Bit PSC_REG			:8;
	Strict_32Bit _reserved_1			:16;
}MM32_UART3_IRDABits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_UART3_IRDABits B;
}MM32_UART3_IRDA;


#endif

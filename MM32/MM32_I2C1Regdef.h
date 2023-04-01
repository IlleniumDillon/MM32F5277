#ifndef _MM32_I2C1REGDEF_H_
#define _MM32_I2C1REGDEF_H_

#include "MM32_RegTypedef.h"
//control register
typedef struct
{
	Strict_32Bit MASTER			:1;
	Strict_32Bit SPEED			:2;
	Strict_32Bit SLAVE10			:1;
	Strict_32Bit MASTER10			:1;
	Strict_32Bit REPEN			:1;
	Strict_32Bit DISSLAVE			:1;
	Strict_32Bit STOPINT			:1;
	Strict_32Bit EMPINT			:1;
	Strict_32Bit STOP			:1;
	Strict_32Bit RESTART			:1;
	Strict_32Bit SLV_TX_ABRT_DIS			:1;
	Strict_32Bit PAD_SEL			:1;
	Strict_32Bit _reserved_0			:3;
	Strict_32Bit OPT_SAR_EN			:1;
	Strict_32Bit SMB_SLV_QC_EN			:1;
	Strict_32Bit SMB_ARP_EN			:1;
	Strict_32Bit SMB_PSA_EN			:1;
	Strict_32Bit STOP_DET_MST_ACT			:1;
	Strict_32Bit BUS_CLR			:1;
	Strict_32Bit RX_FULL_HLD			:1;
	Strict_32Bit _reserved_1			:9;
}MM32_I2C1_CRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_CRBits B;
}MM32_I2C1_CR;

//target address register
typedef struct
{
	Strict_32Bit ADDR			:10;
	Strict_32Bit GC			:1;
	Strict_32Bit SPECIAL			:1;
	Strict_32Bit _reserved_0			:4;
	Strict_32Bit SMB_QC			:1;
	Strict_32Bit _reserved_1			:15;
}MM32_I2C1_TARBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_TARBits B;
}MM32_I2C1_TAR;

//slave address register
typedef struct
{
	Strict_32Bit ADDR			:10;
	Strict_32Bit _reserved_0			:22;
}MM32_I2C1_SARBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_SARBits B;
}MM32_I2C1_SAR;

//Data Command Register
typedef struct
{
	Strict_32Bit DAT			:8;
	Strict_32Bit CMD			:1;
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit FIRST_DATA			:1;
	Strict_32Bit _reserved_1			:20;
}MM32_I2C1_DRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_DRBits B;
}MM32_I2C1_DR;

//Standard Mode Clock High Count Register
typedef struct
{
	Strict_32Bit CNT			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_I2C1_SSHRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_SSHRBits B;
}MM32_I2C1_SSHR;

//Standard Mode Clock Low Count Register
typedef struct
{
	Strict_32Bit CNT			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_I2C1_SSLRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_SSLRBits B;
}MM32_I2C1_SSLR;

//Fast/Super Fast Mode Clock High Count Register
typedef struct
{
	Strict_32Bit CNT			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_I2C1_FSHRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_FSHRBits B;
}MM32_I2C1_FSHR;

//Fast/Super Fast Mode Clock Low Count Register
typedef struct
{
	Strict_32Bit CNT			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_I2C1_FSLRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_FSLRBits B;
}MM32_I2C1_FSLR;

//Interrupt Status Register
typedef struct
{
	Strict_32Bit R_RX_UNDER			:1;
	Strict_32Bit R_RX_OVER			:1;
	Strict_32Bit R_RX_FULL			:1;
	Strict_32Bit R_TX_OVER			:1;
	Strict_32Bit R_TX_EMPTY			:1;
	Strict_32Bit R_RD_REQ			:1;
	Strict_32Bit R_TX_ABRT			:1;
	Strict_32Bit R_RX_DONE			:1;
	Strict_32Bit R_ACTIV			:1;
	Strict_32Bit R_STOP			:1;
	Strict_32Bit R_START			:1;
	Strict_32Bit R_GC			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit R_MST_ON_HOLD			:1;
	Strict_32Bit R_SCL_STUCK_AT_LOW			:1;
	Strict_32Bit _reserved_1			:17;
}MM32_I2C1_ISRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_ISRBits B;
}MM32_I2C1_ISR;

//interrupt mask register
typedef struct
{
	Strict_32Bit M_RX_UNDER			:1;
	Strict_32Bit M_RX_OVER			:1;
	Strict_32Bit M_RX_FULL			:1;
	Strict_32Bit M_TX_OVER			:1;
	Strict_32Bit M_TX_EMPTY			:1;
	Strict_32Bit M_RD_REQ			:1;
	Strict_32Bit M_TX_ABRT			:1;
	Strict_32Bit M_RX_DONE			:1;
	Strict_32Bit M_ACTIV			:1;
	Strict_32Bit M_STOP			:1;
	Strict_32Bit M_START			:1;
	Strict_32Bit M_GC			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit M_MST_ON_HOLD			:1;
	Strict_32Bit M_SCL_STUCK			:1;
	Strict_32Bit _reserved_1			:17;
}MM32_I2C1_IMRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_IMRBits B;
}MM32_I2C1_IMR;

//RAW interrupt register
typedef struct
{
	Strict_32Bit RX_UNDER			:1;
	Strict_32Bit RX_OVER			:1;
	Strict_32Bit RX_FULL			:1;
	Strict_32Bit TX_OVER			:1;
	Strict_32Bit TX_EMPTY			:1;
	Strict_32Bit RD_REQ			:1;
	Strict_32Bit TX_ABRT			:1;
	Strict_32Bit RX_DONE			:1;
	Strict_32Bit ACTIV			:1;
	Strict_32Bit STOP			:1;
	Strict_32Bit START			:1;
	Strict_32Bit GC			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit MST_ON_HOLD			:1;
	Strict_32Bit SCL_STUCK			:1;
	Strict_32Bit _reserved_1			:17;
}MM32_I2C1_RAWISRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_RAWISRBits B;
}MM32_I2C1_RAWISR;

//receive threshold register
typedef struct
{
	Strict_32Bit TL			:2;
	Strict_32Bit _reserved_0			:30;
}MM32_I2C1_RXTLRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_RXTLRBits B;
}MM32_I2C1_RXTLR;

//Transmit Threshold Register
typedef struct
{
	Strict_32Bit TL			:2;
	Strict_32Bit _reserved_0			:30;
}MM32_I2C1_TXTLRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_TXTLRBits B;
}MM32_I2C1_TXTLR;

//Combined and Independent Interrupt Clear Registers
typedef struct
{
	Strict_32Bit ICR			:1;
	Strict_32Bit _reserved_0			:31;
}MM32_I2C1_ICRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_ICRBits B;
}MM32_I2C1_ICR;

//Clear the RX_UNDER interrupt register
typedef struct
{
	Strict_32Bit RX_UNDER			:1;
	Strict_32Bit _reserved_0			:31;
}MM32_I2C1_RX_UNDERBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_RX_UNDERBits B;
}MM32_I2C1_RX_UNDER;

//Clear the RX_OVER interrupt register
typedef struct
{
	Strict_32Bit RX_OVER			:1;
	Strict_32Bit _reserved_0			:31;
}MM32_I2C1_RX_OVERBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_RX_OVERBits B;
}MM32_I2C1_RX_OVER;

//Clear the TX_OVER interrupt register
typedef struct
{
	Strict_32Bit TX_OVER			:1;
	Strict_32Bit _reserved_0			:31;
}MM32_I2C1_TX_OVERBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_TX_OVERBits B;
}MM32_I2C1_TX_OVER;

//Clear the RD_REQ interrupt register
typedef struct
{
	Strict_32Bit RD_REQ			:1;
	Strict_32Bit _reserved_0			:31;
}MM32_I2C1_RD_REQBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_RD_REQBits B;
}MM32_I2C1_RD_REQ;

//Clear the TX_ABRT interrupt register
typedef struct
{
	Strict_32Bit TX_ABRT			:1;
	Strict_32Bit _reserved_0			:31;
}MM32_I2C1_TX_ABRTBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_TX_ABRTBits B;
}MM32_I2C1_TX_ABRT;

//Clear the RX_DONE interrupt register
typedef struct
{
	Strict_32Bit RX_DONE			:1;
	Strict_32Bit _reserved_0			:31;
}MM32_I2C1_RX_DONEBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_RX_DONEBits B;
}MM32_I2C1_RX_DONE;

//Clear the ACTIVITY interrupt register
typedef struct
{
	Strict_32Bit ACTIV			:1;
	Strict_32Bit _reserved_0			:31;
}MM32_I2C1_ACTIVBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_ACTIVBits B;
}MM32_I2C1_ACTIV;

//Clear the STOP_DET interrupt register
typedef struct
{
	Strict_32Bit STOP			:1;
	Strict_32Bit _reserved_0			:31;
}MM32_I2C1_STOPBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_STOPBits B;
}MM32_I2C1_STOP;

//Clear the START_DET interrupt register
typedef struct
{
	Strict_32Bit START			:1;
	Strict_32Bit _reserved_0			:31;
}MM32_I2C1_STARTBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_STARTBits B;
}MM32_I2C1_START;

//Clear the GEN_CALL interrupt register
typedef struct
{
	Strict_32Bit GC			:1;
	Strict_32Bit _reserved_0			:31;
}MM32_I2C1_GCBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_GCBits B;
}MM32_I2C1_GC;

//enable register
typedef struct
{
	Strict_32Bit ENABLE			:1;
	Strict_32Bit ABORT			:1;
	Strict_32Bit TX_CMD_BLOCK			:1;
	Strict_32Bit SDA_RCV_EN			:1;
	Strict_32Bit _reserved_0			:12;
	Strict_32Bit SMB_CLK_RST			:1;
	Strict_32Bit _reserved_1			:1;
	Strict_32Bit SMB_ALT_EN			:1;
	Strict_32Bit _reserved_2			:13;
}MM32_I2C1_ENRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_ENRBits B;
}MM32_I2C1_ENR;

//status register
typedef struct
{
	Strict_32Bit ACTIV			:1;
	Strict_32Bit TFNF			:1;
	Strict_32Bit TFE			:1;
	Strict_32Bit RFNE			:1;
	Strict_32Bit RFF			:1;
	Strict_32Bit MST_ACTIV			:1;
	Strict_32Bit SLV_ACTIV			:1;
	Strict_32Bit MST_HOLD_TX_EMPTY			:1;
	Strict_32Bit MST_HOLD_RX_FULL			:1;
	Strict_32Bit SLV_HOLD_TX_EMPTY			:1;
	Strict_32Bit SLV_HOLD_RX_FULL			:1;
	Strict_32Bit SDA_NOT_RECOVERED			:1;
	Strict_32Bit _reserved_0			:4;
	Strict_32Bit SMB_QC			:1;
	Strict_32Bit SMB_SLV_AV			:1;
	Strict_32Bit SMB_SLV_AR			:1;
	Strict_32Bit _reserved_1			:1;
	Strict_32Bit SMB_ALT			:1;
	Strict_32Bit _reserved_2			:11;
}MM32_I2C1_SRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_SRBits B;
}MM32_I2C1_SR;

//Transmit buffer level register
typedef struct
{
	Strict_32Bit CNT			:3;
	Strict_32Bit _reserved_0			:29;
}MM32_I2C1_TXFLRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_TXFLRBits B;
}MM32_I2C1_TXFLR;

//Receive buffer level register
typedef struct
{
	Strict_32Bit CNT			:3;
	Strict_32Bit _reserved_0			:29;
}MM32_I2C1_RXFLRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_RXFLRBits B;
}MM32_I2C1_RXFLR;

//SDA hold time register
typedef struct
{
	Strict_32Bit TX_HOLD			:16;
	Strict_32Bit RX_HOLD			:8;
	Strict_32Bit _reserved_0			:8;
}MM32_I2C1_HOLDBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_HOLDBits B;
}MM32_I2C1_HOLD;

//Transfer Abort Source Register
typedef struct
{
	Strict_32Bit ADDR_NOACK_7			:1;
	Strict_32Bit ADDR1_NOACK_10			:1;
	Strict_32Bit ADDR2_NOACK_10			:1;
	Strict_32Bit TXDATA_NOACK			:1;
	Strict_32Bit GC_NOACK			:1;
	Strict_32Bit GC_READ			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit SBYTE_ACKDET			:1;
	Strict_32Bit _reserved_1			:1;
	Strict_32Bit SBYTE_NORSTRT			:1;
	Strict_32Bit B_RD_NORSTRT_10			:1;
	Strict_32Bit MST_DIS			:1;
	Strict_32Bit LOST			:1;
	Strict_32Bit SLVFLUSH_TXFIFO			:1;
	Strict_32Bit SLV_ARBLOST			:1;
	Strict_32Bit SLVRD_INTX			:1;
	Strict_32Bit USER_ABRT			:1;
	Strict_32Bit SDA_LOW			:1;
	Strict_32Bit _reserved_2			:5;
	Strict_32Bit TX_FLUSH_CNT			:9;
}MM32_I2C1_TX_ABRT_SRCBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_TX_ABRT_SRCBits B;
}MM32_I2C1_TX_ABRT_SRC;

//Slave Receive NACK Register
typedef struct
{
	Strict_32Bit NACK			:1;
	Strict_32Bit _reserved_0			:31;
}MM32_I2C1_SLV_NACKBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_SLV_NACKBits B;
}MM32_I2C1_SLV_NACK;

//DMA Control Register
typedef struct
{
	Strict_32Bit RXEN			:1;
	Strict_32Bit TXEN			:1;
	Strict_32Bit _reserved_0			:30;
}MM32_I2C1_DMABits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_DMABits B;
}MM32_I2C1_DMA;

//SDA setup time register
typedef struct
{
	Strict_32Bit CNT			:8;
	Strict_32Bit _reserved_0			:24;
}MM32_I2C1_SETUPBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_SETUPBits B;
}MM32_I2C1_SETUP;

//General Call ACK Register
typedef struct
{
	Strict_32Bit GC			:1;
	Strict_32Bit _reserved_0			:31;
}MM32_I2C1_GCRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_GCRBits B;
}MM32_I2C1_GCR;

//ENABLE Status Register
typedef struct
{
	Strict_32Bit IC_EN			:1;
	Strict_32Bit SLV_DIS_WHILE_BUSY			:1;
	Strict_32Bit SLV_RX_DATA_LOST			:1;
	Strict_32Bit _reserved_0			:29;
}MM32_I2C1_EN_SRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_EN_SRBits B;
}MM32_I2C1_EN_SR;

//filter register
typedef struct
{
	Strict_32Bit SPKLEN			:8;
	Strict_32Bit _reserved_0			:24;
}MM32_I2C1_SPKLENBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_SPKLENBits B;
}MM32_I2C1_SPKLEN;

//SCL Low Timeout Register
typedef struct
{
	Strict_32Bit SCL_TIMEOUT			:32;
}MM32_I2C1_SCL_TMOBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_SCL_TMOBits B;
}MM32_I2C1_SCL_TMO;

//SDA Low Timeout Register
typedef struct
{
	Strict_32Bit SDA_TIMEOUT			:32;
}MM32_I2C1_SDA_TMOBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_SDA_TMOBits B;
}MM32_I2C1_SDA_TMO;

//Clear the SCL_STUCK interrupt register
typedef struct
{
	Strict_32Bit SCL_STUCK			:1;
	Strict_32Bit _reserved_0			:31;
}MM32_I2C1_SCL_STUCKBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_SCL_STUCKBits B;
}MM32_I2C1_SCL_STUCK;

//SMBus Slave Clock Stretching Timeout Register
typedef struct
{
	Strict_32Bit SMB_SEXT			:32;
}MM32_I2C1_SMB_SEXTBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_SMB_SEXTBits B;
}MM32_I2C1_SMB_SEXT;

//SMBus Master Clock Stretching Timeout Register
typedef struct
{
	Strict_32Bit SMB_MEXT			:32;
}MM32_I2C1_SMB_MEXTBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_SMB_MEXTBits B;
}MM32_I2C1_SMB_MEXT;

//SMBus Bus Idle Count Register
typedef struct
{
	Strict_32Bit SMB_IDLE_CNT			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_I2C1_SMB_IDLEBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_SMB_IDLEBits B;
}MM32_I2C1_SMB_IDLE;

//SMBus Interrupt Status Register
typedef struct
{
	Strict_32Bit R_SLV_TMO			:1;
	Strict_32Bit R_MST_TMO			:1;
	Strict_32Bit R_ARP_QUICK			:1;
	Strict_32Bit R_ARP_NOTIFY			:1;
	Strict_32Bit R_ARP_PRE			:1;
	Strict_32Bit R_ARP_RST			:1;
	Strict_32Bit R_ARP_UDID			:1;
	Strict_32Bit R_ARP_ASSGN			:1;
	Strict_32Bit R_PEC_NACK			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit R_SMB_ALT			:1;
	Strict_32Bit _reserved_1			:21;
}MM32_I2C1_SMB_ISRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_SMB_ISRBits B;
}MM32_I2C1_SMB_ISR;

//SMBus Interrupt Mask Register
typedef struct
{
	Strict_32Bit M_SLV_TMO			:1;
	Strict_32Bit M_MST_TMO			:1;
	Strict_32Bit M_ARP_QUICK			:1;
	Strict_32Bit M_ARP_NOTIFY			:1;
	Strict_32Bit M_ARP_PRE			:1;
	Strict_32Bit M_ARP_RST			:1;
	Strict_32Bit M_ARP_UDID			:1;
	Strict_32Bit M_ARP_ASSGN			:1;
	Strict_32Bit M_PEC_NACK			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit M_SMB_ALT			:1;
	Strict_32Bit _reserved_1			:21;
}MM32_I2C1_SMB_IMRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_SMB_IMRBits B;
}MM32_I2C1_SMB_IMR;

//SMBus RAW Interrupt Register
typedef struct
{
	Strict_32Bit SLV_TMO			:1;
	Strict_32Bit MST_TMO			:1;
	Strict_32Bit ARP_QUICK			:1;
	Strict_32Bit ARP_NOTIFY			:1;
	Strict_32Bit ARP_PRE			:1;
	Strict_32Bit ARP_RST			:1;
	Strict_32Bit ARP_UDID			:1;
	Strict_32Bit ARP_ASSGN			:1;
	Strict_32Bit PEC_NACK			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit SMB_ALT			:1;
	Strict_32Bit _reserved_1			:21;
}MM32_I2C1_SMB_RAWISRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_SMB_RAWISRBits B;
}MM32_I2C1_SMB_RAWISR;

//SMBus Combined and Independent Interrupt Clear Registers
typedef struct
{
	Strict_32Bit CLR_SLV_TMO			:1;
	Strict_32Bit CLR_MST_TMO			:1;
	Strict_32Bit CLR_ARP_QUICK			:1;
	Strict_32Bit CLR_ARP_NOTIFY			:1;
	Strict_32Bit CLR_ARP_PRE			:1;
	Strict_32Bit CLR_ARP_RST			:1;
	Strict_32Bit CLR_ARP_UDID			:1;
	Strict_32Bit CLR_ARP_ASSGN			:1;
	Strict_32Bit CLR_PEC_NACK			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit CLR_SMB_ALT			:1;
	Strict_32Bit _reserved_1			:21;
}MM32_I2C1_SMB_ICRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_SMB_ICRBits B;
}MM32_I2C1_SMB_ICR;

//Optional Slave Address Register
typedef struct
{
	Strict_32Bit ADDR			:7;
	Strict_32Bit _reserved_0			:25;
}MM32_I2C1_OPT_SARBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_OPT_SARBits B;
}MM32_I2C1_OPT_SAR;

//SMBus UDID LSB Register
typedef struct
{
	Strict_32Bit SMB_UDID_LSB			:32;
}MM32_I2C1_SMB_UDID_LSBBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_SMB_UDID_LSBBits B;
}MM32_I2C1_SMB_UDID_LSB;

//SMBus UDID MSB Register 0
typedef struct
{
	Strict_32Bit SMB_UDID_MSB0			:32;
}MM32_I2C1_SMB_UDID_MSB0Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_SMB_UDID_MSB0Bits B;
}MM32_I2C1_SMB_UDID_MSB0;

//SMBus UDID MSB Register 1
typedef struct
{
	Strict_32Bit SMB_UDID_MSB1			:32;
}MM32_I2C1_SMB_UDID_MSB1Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_SMB_UDID_MSB1Bits B;
}MM32_I2C1_SMB_UDID_MSB1;

//SMBus UDID MSB Register 2
typedef struct
{
	Strict_32Bit SMB_UDID_MSB2			:32;
}MM32_I2C1_SMB_UDID_MSB2Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_SMB_UDID_MSB2Bits B;
}MM32_I2C1_SMB_UDID_MSB2;

//Slave Address Mask Register
typedef struct
{
	Strict_32Bit MASK			:10;
	Strict_32Bit _reserved_0			:22;
}MM32_I2C1_SLVMASKBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_SLVMASKBits B;
}MM32_I2C1_SLVMASK;

//Slave Receive Address Register
typedef struct
{
	Strict_32Bit ADDR			:10;
	Strict_32Bit _reserved_0			:22;
}MM32_I2C1_SLVRCVADDRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_I2C1_SLVRCVADDRBits B;
}MM32_I2C1_SLVRCVADDR;


#endif

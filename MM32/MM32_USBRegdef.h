#ifndef _MM32_USBREGDEF_H_
#define _MM32_USBREGDEF_H_

#include "MM32_RegTypedef.h"
//OTG Interrupt Status Register
typedef struct
{
	Strict_32Bit A_VBUS_VLD_CHG			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit B_SESS_END_CHG			:1;
	Strict_32Bit SESS_VLD_CHG			:1;
	Strict_32Bit _reserved_1			:1;
	Strict_32Bit LINE_STATE_CHG			:1;
	Strict_32Bit MSEC_1			:1;
	Strict_32Bit ID_CHG			:1;
	Strict_32Bit _reserved_2			:24;
}MM32_USB_FSOTG_ISTATBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_USB_FSOTG_ISTATBits B;
}MM32_USB_FSOTG_ISTAT;

//OTG Interrupt Control Register
typedef struct
{
	Strict_32Bit A_VBUS_VLD_EN			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit B_SESS_END_EN			:1;
	Strict_32Bit SESS_VLD_EN			:1;
	Strict_32Bit _reserved_1			:1;
	Strict_32Bit LINESTATE_EN			:1;
	Strict_32Bit MSEC_1_EN			:1;
	Strict_32Bit ID_EN			:1;
	Strict_32Bit _reserved_2			:24;
}MM32_USB_FSOTG_ICTRLBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_USB_FSOTG_ICTRLBits B;
}MM32_USB_FSOTG_ICTRL;

//OTG Status Register
typedef struct
{
	Strict_32Bit A_VBUS_VLD			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit B_SESS_END			:1;
	Strict_32Bit SESS_VLD			:1;
	Strict_32Bit _reserved_1			:1;
	Strict_32Bit LINESTATE_STABLE			:1;
	Strict_32Bit _reserved_2			:1;
	Strict_32Bit ID			:1;
	Strict_32Bit _reserved_3			:24;
}MM32_USB_FSOTG_STATBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_USB_FSOTG_STATBits B;
}MM32_USB_FSOTG_STAT;

//OTG Control register
typedef struct
{
	Strict_32Bit VBUS_DSCHG			:1;
	Strict_32Bit VBUS_CHG			:1;
	Strict_32Bit OTG_EN			:1;
	Strict_32Bit VBUS_ON			:1;
	Strict_32Bit DM_LOW			:1;
	Strict_32Bit DP_LOW			:1;
	Strict_32Bit DM_HIGH			:1;
	Strict_32Bit DP_HIGH			:1;
	Strict_32Bit _reserved_0			:24;
}MM32_USB_FSOTG_CTRLBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_USB_FSOTG_CTRLBits B;
}MM32_USB_FSOTG_CTRL;

//Interrupt status register
typedef struct
{
	Strict_32Bit USB_RST			:1;
	Strict_32Bit ERROR			:1;
	Strict_32Bit SOF_TOK			:1;
	Strict_32Bit TOK_DNE			:1;
	Strict_32Bit SLEEP			:1;
	Strict_32Bit RESUME			:1;
	Strict_32Bit ATTACH			:1;
	Strict_32Bit STALL			:1;
	Strict_32Bit _reserved_0			:24;
}MM32_USB_FSINT_STATBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_USB_FSINT_STATBits B;
}MM32_USB_FSINT_STAT;

//Interrupt enable register
typedef struct
{
	Strict_32Bit USB_RST			:1;
	Strict_32Bit ERROR			:1;
	Strict_32Bit SOF_TOK			:1;
	Strict_32Bit TOK_DNE			:1;
	Strict_32Bit SLEEP			:1;
	Strict_32Bit RESUME			:1;
	Strict_32Bit ATTACH			:1;
	Strict_32Bit STALL			:1;
	Strict_32Bit _reserved_0			:24;
}MM32_USB_FSINT_ENBBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_USB_FSINT_ENBBits B;
}MM32_USB_FSINT_ENB;

//Error interrupt status register
typedef struct
{
	Strict_32Bit PID_ERR			:1;
	Strict_32Bit CRC5EOF			:1;
	Strict_32Bit CRC16			:1;
	Strict_32Bit DFN8			:1;
	Strict_32Bit BTO_ERR			:1;
	Strict_32Bit DMA_ERR			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit BTS_ERR			:1;
	Strict_32Bit _reserved_1			:24;
}MM32_USB_FSERR_STATBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_USB_FSERR_STATBits B;
}MM32_USB_FSERR_STAT;

//Error interrupt enable register
typedef struct
{
	Strict_32Bit PID_ERR			:1;
	Strict_32Bit CRC5EOF			:1;
	Strict_32Bit CRC16			:1;
	Strict_32Bit DFN8			:1;
	Strict_32Bit BTO_ERR			:1;
	Strict_32Bit DMA_ERR			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit BTS_ERR			:1;
	Strict_32Bit _reserved_1			:24;
}MM32_USB_FSERR_ENBBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_USB_FSERR_ENBBits B;
}MM32_USB_FSERR_ENB;

//Status register
typedef struct
{
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit ODD			:1;
	Strict_32Bit TX			:1;
	Strict_32Bit ENDP			:4;
	Strict_32Bit _reserved_1			:24;
}MM32_USB_FSSTATBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_USB_FSSTATBits B;
}MM32_USB_FSSTAT;

//Control register
typedef struct
{
	Strict_32Bit USB_EN			:1;
	Strict_32Bit ODD_RST			:1;
	Strict_32Bit RESUME			:1;
	Strict_32Bit HOST_MODE_EN			:1;
	Strict_32Bit RESET			:1;
	Strict_32Bit TxdSuspendTokenBusy			:1;
	Strict_32Bit SE0			:1;
	Strict_32Bit JSTATE			:1;
	Strict_32Bit _reserved_0			:24;
}MM32_USB_FSCTLBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_USB_FSCTLBits B;
}MM32_USB_FSCTL;

//Address register
typedef struct
{
	Strict_32Bit ADDR			:7;
	Strict_32Bit LS_EN			:1;
	Strict_32Bit _reserved_0			:24;
}MM32_USB_FSADDRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_USB_FSADDRBits B;
}MM32_USB_FSADDR;

//BDT page register 1
typedef struct
{
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit BDT_BA			:7;
	Strict_32Bit _reserved_1			:24;
}MM32_USB_FSBDT_PAGE_01Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_USB_FSBDT_PAGE_01Bits B;
}MM32_USB_FSBDT_PAGE_01;

//Frame number register
typedef struct
{
	Strict_32Bit FRM			:8;
	Strict_32Bit _reserved_0			:24;
}MM32_USB_FSFRM_NUMLBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_USB_FSFRM_NUMLBits B;
}MM32_USB_FSFRM_NUML;

//Frame number register
typedef struct
{
	Strict_32Bit FRM			:3;
	Strict_32Bit _reserved_0			:29;
}MM32_USB_FSFRM_NUMHBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_USB_FSFRM_NUMHBits B;
}MM32_USB_FSFRM_NUMH;

//Token register
typedef struct
{
	Strict_32Bit TOKEN_ENDPT			:4;
	Strict_32Bit TOKEN_PID			:4;
	Strict_32Bit _reserved_0			:24;
}MM32_USB_FSTOKENBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_USB_FSTOKENBits B;
}MM32_USB_FSTOKEN;

//SOF threshold register
typedef struct
{
	Strict_32Bit CNT			:8;
	Strict_32Bit _reserved_0			:24;
}MM32_USB_FSSOF_THLDBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_USB_FSSOF_THLDBits B;
}MM32_USB_FSSOF_THLD;

//BDT page register 2
typedef struct
{
	Strict_32Bit BDT_BA			:8;
	Strict_32Bit _reserved_0			:24;
}MM32_USB_FSBDT_PAGE_02Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_USB_FSBDT_PAGE_02Bits B;
}MM32_USB_FSBDT_PAGE_02;

//BDT page register 3
typedef struct
{
	Strict_32Bit BDT_BA			:8;
	Strict_32Bit _reserved_0			:24;
}MM32_USB_FSBDT_PAGE_03Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_USB_FSBDT_PAGE_03Bits B;
}MM32_USB_FSBDT_PAGE_03;

//Endpoint control register 0
typedef struct
{
	Strict_32Bit EP_HSHK			:1;
	Strict_32Bit EP_STALL			:1;
	Strict_32Bit EP_CTL_DISEP_RX_ENEP_TX_EN			:3;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit RETRY_DIS			:1;
	Strict_32Bit HOST_WO_HUB			:1;
	Strict_32Bit _reserved_1			:24;
}MM32_USB_FSEP0_CTLBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_USB_FSEP0_CTLBits B;
}MM32_USB_FSEP0_CTL;

//Endpoint control register 0
typedef struct
{
	Strict_32Bit EP_HSHK			:1;
	Strict_32Bit EP_STALL			:1;
	Strict_32Bit EP_CTL_DISEP_RX_ENEP_TX_EN			:3;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit RETRY_DIS			:1;
	Strict_32Bit HOST_WO_HUB			:1;
	Strict_32Bit _reserved_1			:24;
}MM32_USB_FSEP1_CTLBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_USB_FSEP1_CTLBits B;
}MM32_USB_FSEP1_CTL;

//Endpoint control register 0
typedef struct
{
	Strict_32Bit EP_HSHK			:1;
	Strict_32Bit EP_STALL			:1;
	Strict_32Bit EP_CTL_DISEP_RX_ENEP_TX_EN			:3;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit RETRY_DIS			:1;
	Strict_32Bit HOST_WO_HUB			:1;
	Strict_32Bit _reserved_1			:24;
}MM32_USB_FSEP2_CTLBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_USB_FSEP2_CTLBits B;
}MM32_USB_FSEP2_CTL;

//Endpoint control register 0
typedef struct
{
	Strict_32Bit EP_HSHK			:1;
	Strict_32Bit EP_STALL			:1;
	Strict_32Bit EP_CTL_DISEP_RX_ENEP_TX_EN			:3;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit RETRY_DIS			:1;
	Strict_32Bit HOST_WO_HUB			:1;
	Strict_32Bit _reserved_1			:24;
}MM32_USB_FSEP3_CTLBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_USB_FSEP3_CTLBits B;
}MM32_USB_FSEP3_CTL;

//Endpoint control register 0
typedef struct
{
	Strict_32Bit EP_HSHK			:1;
	Strict_32Bit EP_STALL			:1;
	Strict_32Bit EP_CTL_DISEP_RX_ENEP_TX_EN			:3;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit RETRY_DIS			:1;
	Strict_32Bit HOST_WO_HUB			:1;
	Strict_32Bit _reserved_1			:24;
}MM32_USB_FSEP4_CTLBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_USB_FSEP4_CTLBits B;
}MM32_USB_FSEP4_CTL;

//Endpoint control register 0
typedef struct
{
	Strict_32Bit EP_HSHK			:1;
	Strict_32Bit EP_STALL			:1;
	Strict_32Bit EP_CTL_DISEP_RX_ENEP_TX_EN			:3;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit RETRY_DIS			:1;
	Strict_32Bit HOST_WO_HUB			:1;
	Strict_32Bit _reserved_1			:24;
}MM32_USB_FSEP5_CTLBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_USB_FSEP5_CTLBits B;
}MM32_USB_FSEP5_CTL;

//Endpoint control register 0
typedef struct
{
	Strict_32Bit EP_HSHK			:1;
	Strict_32Bit EP_STALL			:1;
	Strict_32Bit EP_CTL_DISEP_RX_ENEP_TX_EN			:3;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit RETRY_DIS			:1;
	Strict_32Bit HOST_WO_HUB			:1;
	Strict_32Bit _reserved_1			:24;
}MM32_USB_FSEP6_CTLBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_USB_FSEP6_CTLBits B;
}MM32_USB_FSEP6_CTL;

//Endpoint control register 0
typedef struct
{
	Strict_32Bit EP_HSHK			:1;
	Strict_32Bit EP_STALL			:1;
	Strict_32Bit EP_CTL_DISEP_RX_ENEP_TX_EN			:3;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit RETRY_DIS			:1;
	Strict_32Bit HOST_WO_HUB			:1;
	Strict_32Bit _reserved_1			:24;
}MM32_USB_FSEP7_CTLBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_USB_FSEP7_CTLBits B;
}MM32_USB_FSEP7_CTL;

//Endpoint control register 0
typedef struct
{
	Strict_32Bit EP_HSHK			:1;
	Strict_32Bit EP_STALL			:1;
	Strict_32Bit EP_CTL_DISEP_RX_ENEP_TX_EN			:3;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit RETRY_DIS			:1;
	Strict_32Bit HOST_WO_HUB			:1;
	Strict_32Bit _reserved_1			:24;
}MM32_USB_FSEP8_CTLBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_USB_FSEP8_CTLBits B;
}MM32_USB_FSEP8_CTL;

//Endpoint control register 0
typedef struct
{
	Strict_32Bit EP_HSHK			:1;
	Strict_32Bit EP_STALL			:1;
	Strict_32Bit EP_CTL_DISEP_RX_ENEP_TX_EN			:3;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit RETRY_DIS			:1;
	Strict_32Bit HOST_WO_HUB			:1;
	Strict_32Bit _reserved_1			:24;
}MM32_USB_FSEP9_CTLBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_USB_FSEP9_CTLBits B;
}MM32_USB_FSEP9_CTL;

//Endpoint control register 0
typedef struct
{
	Strict_32Bit EP_HSHK			:1;
	Strict_32Bit EP_STALL			:1;
	Strict_32Bit EP_CTL_DISEP_RX_ENEP_TX_EN			:3;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit RETRY_DIS			:1;
	Strict_32Bit HOST_WO_HUB			:1;
	Strict_32Bit _reserved_1			:24;
}MM32_USB_FSEP10_CTLBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_USB_FSEP10_CTLBits B;
}MM32_USB_FSEP10_CTL;

//Endpoint control register 0
typedef struct
{
	Strict_32Bit EP_HSHK			:1;
	Strict_32Bit EP_STALL			:1;
	Strict_32Bit EP_CTL_DISEP_RX_ENEP_TX_EN			:3;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit RETRY_DIS			:1;
	Strict_32Bit HOST_WO_HUB			:1;
	Strict_32Bit _reserved_1			:24;
}MM32_USB_FSEP11_CTLBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_USB_FSEP11_CTLBits B;
}MM32_USB_FSEP11_CTL;

//Endpoint control register 0
typedef struct
{
	Strict_32Bit EP_HSHK			:1;
	Strict_32Bit EP_STALL			:1;
	Strict_32Bit EP_CTL_DISEP_RX_ENEP_TX_EN			:3;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit RETRY_DIS			:1;
	Strict_32Bit HOST_WO_HUB			:1;
	Strict_32Bit _reserved_1			:24;
}MM32_USB_FSEP12_CTLBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_USB_FSEP12_CTLBits B;
}MM32_USB_FSEP12_CTL;

//Endpoint control register 0
typedef struct
{
	Strict_32Bit EP_HSHK			:1;
	Strict_32Bit EP_STALL			:1;
	Strict_32Bit EP_CTL_DISEP_RX_ENEP_TX_EN			:3;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit RETRY_DIS			:1;
	Strict_32Bit HOST_WO_HUB			:1;
	Strict_32Bit _reserved_1			:24;
}MM32_USB_FSEP13_CTLBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_USB_FSEP13_CTLBits B;
}MM32_USB_FSEP13_CTL;

//Endpoint control register 0
typedef struct
{
	Strict_32Bit EP_HSHK			:1;
	Strict_32Bit EP_STALL			:1;
	Strict_32Bit EP_CTL_DISEP_RX_ENEP_TX_EN			:3;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit RETRY_DIS			:1;
	Strict_32Bit HOST_WO_HUB			:1;
	Strict_32Bit _reserved_1			:24;
}MM32_USB_FSEP14_CTLBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_USB_FSEP14_CTLBits B;
}MM32_USB_FSEP14_CTL;

//Endpoint control register 0
typedef struct
{
	Strict_32Bit EP_HSHK			:1;
	Strict_32Bit EP_STALL			:1;
	Strict_32Bit EP_CTL_DISEP_RX_ENEP_TX_EN			:3;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit RETRY_DIS			:1;
	Strict_32Bit HOST_WO_HUB			:1;
	Strict_32Bit _reserved_1			:24;
}MM32_USB_FSEP15_CTLBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_USB_FSEP15_CTLBits B;
}MM32_USB_FSEP15_CTL;

//USB Control register
typedef struct
{
	Strict_32Bit _reserved_0			:7;
	Strict_32Bit SUSPE			:1;
	Strict_32Bit _reserved_1			:24;
}MM32_USB_FSUSBCTRLBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_USB_FSUSBCTRLBits B;
}MM32_USB_FSUSBCTRL;


#endif

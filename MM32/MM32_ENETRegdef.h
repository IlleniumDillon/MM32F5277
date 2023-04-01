#ifndef _MM32_ENETREGDEF_H_
#define _MM32_ENETREGDEF_H_

#include "MM32_RegTypedef.h"
//MAC SMI Address Register
typedef struct
{
	Strict_32Bit SMIBY			:1;
	Strict_32Bit SMIWR			:1;
	Strict_32Bit SMICLK			:4;
	Strict_32Bit SMIREG			:5;
	Strict_32Bit SMIADD			:5;
	Strict_32Bit _reserved_0			:16;
}MM32_ENET_MACSMIARBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_MACSMIARBits B;
}MM32_ENET_MACSMIAR;

//MAC SMI Data Register
typedef struct
{
	Strict_32Bit SMIDATA			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_ENET_MACSMIDRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_MACSMIDRBits B;
}MM32_ENET_MACSMIDR;

//MAC Control Register
typedef struct
{
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit RE			:1;
	Strict_32Bit TE			:1;
	Strict_32Bit DLYC			:1;
	Strict_32Bit BL			:2;
	Strict_32Bit APCS			:1;
	Strict_32Bit _reserved_1			:1;
	Strict_32Bit RETY			:1;
	Strict_32Bit IPCO			:1;
	Strict_32Bit DM			:1;
	Strict_32Bit LM			:1;
	Strict_32Bit RDIS			:1;
	Strict_32Bit _reserved_2			:2;
	Strict_32Bit MCRS			:1;
	Strict_32Bit IFG			:3;
	Strict_32Bit _reserved_3			:2;
	Strict_32Bit JAB			:1;
	Strict_32Bit WDT			:1;
	Strict_32Bit _reserved_4			:1;
	Strict_32Bit CST			:1;
	Strict_32Bit _reserved_5			:2;
	Strict_32Bit SAIRC			:4;
}MM32_ENET_MACCRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_MACCRBits B;
}MM32_ENET_MACCR;

//MAC Status Register
typedef struct
{
	Strict_32Bit MRE			:1;
	Strict_32Bit MRS			:2;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit RXFWA			:1;
	Strict_32Bit RXFRS			:2;
	Strict_32Bit _reserved_1			:1;
	Strict_32Bit RXFL			:2;
	Strict_32Bit _reserved_2			:6;
	Strict_32Bit MTE			:1;
	Strict_32Bit MTS			:2;
	Strict_32Bit MTP			:1;
	Strict_32Bit TXFRS			:2;
	Strict_32Bit TXFWA			:1;
	Strict_32Bit _reserved_3			:1;
	Strict_32Bit TXFNE			:1;
	Strict_32Bit TXFF			:1;
	Strict_32Bit _reserved_4			:6;
}MM32_ENET_MACSRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_MACSRBits B;
}MM32_ENET_MACSR;

//MAC Flow Control Register
typedef struct
{
	Strict_32Bit FCBBPA			:1;
	Strict_32Bit FTE			:1;
	Strict_32Bit FRE			:1;
	Strict_32Bit UPF			:1;
	Strict_32Bit PLT			:2;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit DZQP			:1;
	Strict_32Bit _reserved_1			:8;
	Strict_32Bit PSET			:16;
}MM32_ENET_MACFCRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_MACFCRBits B;
}MM32_ENET_MACFCR;

//MAC Interrupt Status Register
typedef struct
{
	Strict_32Bit _reserved_0			:3;
	Strict_32Bit PMTIS			:1;
	Strict_32Bit MMCIS			:1;
	Strict_32Bit MMCRXIS			:1;
	Strict_32Bit MMCTXIS			:1;
	Strict_32Bit _reserved_1			:2;
	Strict_32Bit PTPIS			:1;
	Strict_32Bit _reserved_2			:22;
}MM32_ENET_MACISRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_MACISRBits B;
}MM32_ENET_MACISR;

//MAC Interrupt Mask Register
typedef struct
{
	Strict_32Bit _reserved_0			:3;
	Strict_32Bit PMTIM			:1;
	Strict_32Bit _reserved_1			:5;
	Strict_32Bit PTPIM			:1;
	Strict_32Bit _reserved_2			:22;
}MM32_ENET_MACIMRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_MACIMRBits B;
}MM32_ENET_MACIMR;

//MAC Address Filtering Control Register
typedef struct
{
	Strict_32Bit PM			:1;
	Strict_32Bit HU			:1;
	Strict_32Bit HM			:1;
	Strict_32Bit DAIF			:1;
	Strict_32Bit MCF			:1;
	Strict_32Bit BCF			:1;
	Strict_32Bit PCF			:2;
	Strict_32Bit SAIF			:1;
	Strict_32Bit SAF			:1;
	Strict_32Bit HPF			:1;
	Strict_32Bit _reserved_0			:5;
	Strict_32Bit VLTF			:1;
	Strict_32Bit _reserved_1			:4;
	Strict_32Bit DNTU			:1;
	Strict_32Bit _reserved_2			:9;
	Strict_32Bit RALL			:1;
}MM32_ENET_MACAFRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_MACAFRBits B;
}MM32_ENET_MACAFR;

//MAC Filter Address High Register 0
typedef struct
{
	Strict_32Bit MACADDH			:16;
	Strict_32Bit _reserved_0			:8;
	Strict_32Bit MBYTEC			:6;
	Strict_32Bit SELE			:1;
	Strict_32Bit ADDE			:1;
}MM32_ENET_MACAHR0Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_MACAHR0Bits B;
}MM32_ENET_MACAHR0;

//MAC Filter Address Low Register 0
typedef struct
{
	Strict_32Bit MACADDL			:32;
}MM32_ENET_MACALR0Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_MACALR0Bits B;
}MM32_ENET_MACALR0;

//MAC Filter Address High Register 0
typedef struct
{
	Strict_32Bit MACADDH			:16;
	Strict_32Bit _reserved_0			:8;
	Strict_32Bit MBYTEC			:6;
	Strict_32Bit SELE			:1;
	Strict_32Bit ADDE			:1;
}MM32_ENET_MACAHR1Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_MACAHR1Bits B;
}MM32_ENET_MACAHR1;

//MAC Filter Address Low Register 0
typedef struct
{
	Strict_32Bit MACADDL			:32;
}MM32_ENET_MACALR1Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_MACALR1Bits B;
}MM32_ENET_MACALR1;

//MAC Filter Address High Register 0
typedef struct
{
	Strict_32Bit MACADDH			:16;
	Strict_32Bit _reserved_0			:8;
	Strict_32Bit MBYTEC			:6;
	Strict_32Bit SELE			:1;
	Strict_32Bit ADDE			:1;
}MM32_ENET_MACAHR2Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_MACAHR2Bits B;
}MM32_ENET_MACAHR2;

//MAC Filter Address Low Register 0
typedef struct
{
	Strict_32Bit MACADDL			:32;
}MM32_ENET_MACALR2Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_MACALR2Bits B;
}MM32_ENET_MACALR2;

//MAC Filter Address High Register 0
typedef struct
{
	Strict_32Bit MACADDH			:16;
	Strict_32Bit _reserved_0			:8;
	Strict_32Bit MBYTEC			:6;
	Strict_32Bit SELE			:1;
	Strict_32Bit ADDE			:1;
}MM32_ENET_MACAHR3Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_MACAHR3Bits B;
}MM32_ENET_MACAHR3;

//MAC Filter Address Low Register 0
typedef struct
{
	Strict_32Bit MACADDL			:32;
}MM32_ENET_MACALR3Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_MACALR3Bits B;
}MM32_ENET_MACALR3;

//MAC Filter Address High Register 0
typedef struct
{
	Strict_32Bit MACADDH			:16;
	Strict_32Bit _reserved_0			:8;
	Strict_32Bit MBYTEC			:6;
	Strict_32Bit SELE			:1;
	Strict_32Bit ADDE			:1;
}MM32_ENET_MACAHR4Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_MACAHR4Bits B;
}MM32_ENET_MACAHR4;

//MAC Filter Address Low Register 0
typedef struct
{
	Strict_32Bit MACADDL			:32;
}MM32_ENET_MACALR4Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_MACALR4Bits B;
}MM32_ENET_MACALR4;

//MAC Filter Address High Register 0
typedef struct
{
	Strict_32Bit MACADDH			:16;
	Strict_32Bit _reserved_0			:8;
	Strict_32Bit MBYTEC			:6;
	Strict_32Bit SELE			:1;
	Strict_32Bit ADDE			:1;
}MM32_ENET_MACAHR5Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_MACAHR5Bits B;
}MM32_ENET_MACAHR5;

//MAC Filter Address Low Register 0
typedef struct
{
	Strict_32Bit MACADDL			:32;
}MM32_ENET_MACALR5Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_MACALR5Bits B;
}MM32_ENET_MACALR5;

//MAC HASH table high register
typedef struct
{
	Strict_32Bit MACHTABH			:32;
}MM32_ENET_MACHTHRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_MACHTHRBits B;
}MM32_ENET_MACHTHR;

//MAC HASH table low register
typedef struct
{
	Strict_32Bit MACHTABL			:32;
}MM32_ENET_MACHTLRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_MACHTLRBits B;
}MM32_ENET_MACHTLR;

//MAC VLAN TAG send register
typedef struct
{
	Strict_32Bit VLANV			:16;
	Strict_32Bit VLANC			:2;
	Strict_32Bit VLANS			:1;
	Strict_32Bit _reserved_0			:13;
}MM32_ENET_MACVLTTRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_MACVLTTRBits B;
}MM32_ENET_MACVLTTR;

//MAC VLAN TAG Receive Register
typedef struct
{
	Strict_32Bit VLFLT			:16;
	Strict_32Bit VTSEL			:1;
	Strict_32Bit VTIM			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit VTHM			:1;
	Strict_32Bit _reserved_1			:12;
}MM32_ENET_MACVLTRRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_MACVLTRRBits B;
}MM32_ENET_MACVLTRR;

//MAC VLAN HASH Table Register
typedef struct
{
	Strict_32Bit VLHTAB			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_ENET_MACVLHTRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_MACVLHTRBits B;
}MM32_ENET_MACVLHTR;

//DMA work mode register
typedef struct
{
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit STR			:1;
	Strict_32Bit OSF			:1;
	Strict_32Bit RTC			:2;
	Strict_32Bit DGF			:1;
	Strict_32Bit FUF			:1;
	Strict_32Bit FEF			:1;
	Strict_32Bit _reserved_1			:5;
	Strict_32Bit STT			:1;
	Strict_32Bit TTC			:3;
	Strict_32Bit _reserved_2			:3;
	Strict_32Bit FTF			:1;
	Strict_32Bit TSF			:1;
	Strict_32Bit _reserved_3			:2;
	Strict_32Bit DFRF			:1;
	Strict_32Bit RSF			:1;
	Strict_32Bit DTCOE			:1;
	Strict_32Bit _reserved_4			:5;
}MM32_ENET_DMAMDRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_DMAMDRBits B;
}MM32_ENET_DMAMDR;

//DMA bus control register
typedef struct
{
	Strict_32Bit SR			:1;
	Strict_32Bit DMAA			:1;
	Strict_32Bit DSL			:5;
	Strict_32Bit DSEN			:1;
	Strict_32Bit TPBL			:6;
	Strict_32Bit FTPR			:2;
	Strict_32Bit FBST			:1;
	Strict_32Bit RPBL			:6;
	Strict_32Bit SPBL			:1;
	Strict_32Bit MPBL			:1;
	Strict_32Bit AAL			:1;
	Strict_32Bit MBST			:1;
	Strict_32Bit TXPR			:1;
	Strict_32Bit _reserved_0			:4;
}MM32_ENET_DMABSRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_DMABSRBits B;
}MM32_ENET_DMABSR;

//DMA status register
typedef struct
{
	Strict_32Bit TCS			:1;
	Strict_32Bit TSS			:1;
	Strict_32Bit TUS			:1;
	Strict_32Bit TJS			:1;
	Strict_32Bit OVS			:1;
	Strict_32Bit UNS			:1;
	Strict_32Bit RCS			:1;
	Strict_32Bit RUS			:1;
	Strict_32Bit RSS			:1;
	Strict_32Bit RWS			:1;
	Strict_32Bit ETS			:1;
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit FBS			:1;
	Strict_32Bit ERS			:1;
	Strict_32Bit AIS			:1;
	Strict_32Bit NIS			:1;
	Strict_32Bit RPS			:3;
	Strict_32Bit TPS			:3;
	Strict_32Bit EBUS			:3;
	Strict_32Bit _reserved_1			:1;
	Strict_32Bit MMCS			:1;
	Strict_32Bit PMTS			:1;
	Strict_32Bit PTPS			:1;
	Strict_32Bit _reserved_2			:2;
}MM32_ENET_DMASRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_DMASRBits B;
}MM32_ENET_DMASR;

//DMA Interrupt Register
typedef struct
{
	Strict_32Bit TCE			:1;
	Strict_32Bit TSE			:1;
	Strict_32Bit TUE			:1;
	Strict_32Bit TJE			:1;
	Strict_32Bit OVE			:1;
	Strict_32Bit UNE			:1;
	Strict_32Bit RCE			:1;
	Strict_32Bit RUE			:1;
	Strict_32Bit RSE			:1;
	Strict_32Bit RWE			:1;
	Strict_32Bit ETE			:1;
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit FBE			:1;
	Strict_32Bit ERE			:1;
	Strict_32Bit AIE			:1;
	Strict_32Bit NIE			:1;
	Strict_32Bit _reserved_1			:15;
}MM32_ENET_DMAIRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_DMAIRBits B;
}MM32_ENET_DMAIR;

//DMA Frame Loss Statistics Register
typedef struct
{
	Strict_32Bit BUAC			:16;
	Strict_32Bit BUAF			:1;
	Strict_32Bit OVFC			:11;
	Strict_32Bit OVFF			:1;
	Strict_32Bit _reserved_0			:3;
}MM32_ENET_DMAFLCRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_DMAFLCRBits B;
}MM32_ENET_DMAFLCR;

//DMA Watchdog Timing Register
typedef struct
{
	Strict_32Bit RIWT			:32;
}MM32_ENET_DMAWDTRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_DMAWDTRBits B;
}MM32_ENET_DMAWDTR;

//DMA Receive Polling Register
typedef struct
{
	Strict_32Bit RXPD			:32;
}MM32_ENET_DMARXPDRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_DMARXPDRBits B;
}MM32_ENET_DMARXPDR;

//DMA transmit polling register
typedef struct
{
	Strict_32Bit TXPD			:32;
}MM32_ENET_DMATXPDRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_DMATXPDRBits B;
}MM32_ENET_DMATXPDR;

//DMA Receive Descriptor Address Register
typedef struct
{
	Strict_32Bit RXDSA			:32;
}MM32_ENET_DMARXDSARBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_DMARXDSARBits B;
}MM32_ENET_DMARXDSAR;

//DMA transmit descriptor address register
typedef struct
{
	Strict_32Bit TXDSA			:32;
}MM32_ENET_DMATXDSARBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_DMATXDSARBits B;
}MM32_ENET_DMATXDSAR;

//DMA current receive descriptor address register
typedef struct
{
	Strict_32Bit CURRXDSA			:32;
}MM32_ENET_DMACURRXDSARBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_DMACURRXDSARBits B;
}MM32_ENET_DMACURRXDSAR;

//DMA current transmit descriptor address register
typedef struct
{
	Strict_32Bit CURTXDSA			:32;
}MM32_ENET_DMACURTXDSARBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_DMACURTXDSARBits B;
}MM32_ENET_DMACURTXDSAR;

//DMA current receive buffer address register
typedef struct
{
	Strict_32Bit CURRXBFA			:32;
}MM32_ENET_DMACURRXBFARBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_DMACURRXBFARBits B;
}MM32_ENET_DMACURRXBFAR;

//DMA current send buffer address register
typedef struct
{
	Strict_32Bit CURTXBFA			:32;
}MM32_ENET_DMACURTXBFARBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_DMACURTXBFARBits B;
}MM32_ENET_DMACURTXBFAR;

//PTP Control Register
typedef struct
{
	Strict_32Bit PTPEN			:1;
	Strict_32Bit PTPCS			:1;
	Strict_32Bit PTPINI			:1;
	Strict_32Bit PTPUP			:1;
	Strict_32Bit PTPINT			:1;
	Strict_32Bit PTPADUP			:1;
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit PTPEALL			:1;
	Strict_32Bit PTPNSS			:1;
	Strict_32Bit PTPVER			:1;
	Strict_32Bit PTPETH			:1;
	Strict_32Bit PTPIPV6			:1;
	Strict_32Bit PTPIPV4			:1;
	Strict_32Bit PTPTYPS			:4;
	Strict_32Bit PTPDAF			:1;
	Strict_32Bit _reserved_1			:13;
}MM32_ENET_PTPCRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_PTPCRBits B;
}MM32_ENET_PTPCR;

//PTP Status Register
typedef struct
{
	Strict_32Bit TSOVF			:1;
	Strict_32Bit TSTA0			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit TSER0			:1;
	Strict_32Bit TSTA1			:1;
	Strict_32Bit TSER1			:1;
	Strict_32Bit _reserved_1			:26;
}MM32_ENET_PTPSRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_PTPSRBits B;
}MM32_ENET_PTPSR;

//PTP Basic Addend Register
typedef struct
{
	Strict_32Bit BSADD			:32;
}MM32_ENET_PTPBSARBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_PTPBSARBits B;
}MM32_ENET_PTPBSAR;

//PTP subsecond adder register
typedef struct
{
	Strict_32Bit NSADD			:8;
	Strict_32Bit _reserved_0			:24;
}MM32_ENET_PTPNSARBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_PTPNSARBits B;
}MM32_ENET_PTPNSAR;

//PTP System Second Register
typedef struct
{
	Strict_32Bit SBSEC			:32;
}MM32_ENET_PTPSBSRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_PTPSBSRBits B;
}MM32_ENET_PTPSBSR;

//PTP System Subsecond Register
typedef struct
{
	Strict_32Bit SNSEC			:31;
	Strict_32Bit _reserved_0			:1;
}MM32_ENET_PTPSNSRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_PTPSNSRBits B;
}MM32_ENET_PTPSNSR;

//PTP Update Seconds Register
typedef struct
{
	Strict_32Bit UBSEC			:32;
}MM32_ENET_PTPUBSRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_PTPUBSRBits B;
}MM32_ENET_PTPUBSR;

//PTP update subsecond register
typedef struct
{
	Strict_32Bit UNSEC			:31;
	Strict_32Bit UPNSEC			:1;
}MM32_ENET_PTPUNSRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_PTPUNSRBits B;
}MM32_ENET_PTPUNSR;

//PTP Target Seconds Register 0
typedef struct
{
	Strict_32Bit TBSEC			:32;
}MM32_ENET_PTPTBSRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_PTPTBSRBits B;
}MM32_ENET_PTPTBSR;

//PTP Target Subsecond Register 0
typedef struct
{
	Strict_32Bit TNSEC			:31;
	Strict_32Bit _reserved_0			:1;
}MM32_ENET_PTPTNSRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_PTPTNSRBits B;
}MM32_ENET_PTPTNSR;

//PTP PPS Control Register
typedef struct
{
	Strict_32Bit PPSOUT0			:4;
	Strict_32Bit PPSOMD			:1;
	Strict_32Bit TTSEL0			:2;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit PPSOUT1			:3;
	Strict_32Bit _reserved_1			:2;
	Strict_32Bit TTSEL1			:2;
	Strict_32Bit _reserved_2			:17;
}MM32_ENET_PTPPPSRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_PTPPPSRBits B;
}MM32_ENET_PTPPPSR;

//MAC PMT Control Register
typedef struct
{
	Strict_32Bit PWDN			:1;
	Strict_32Bit MPEN			:1;
	Strict_32Bit WKEN			:1;
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit MPFR			:1;
	Strict_32Bit WKFR			:1;
	Strict_32Bit _reserved_1			:2;
	Strict_32Bit GLUB			:1;
	Strict_32Bit RTWKTR			:1;
	Strict_32Bit _reserved_2			:13;
	Strict_32Bit RTWKPT			:3;
	Strict_32Bit _reserved_3			:4;
	Strict_32Bit RTWKFR			:1;
}MM32_ENET_PMTCRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_PMTCRBits B;
}MM32_ENET_PMTCR;

//MAC Remote Wakeup Frame Filter Register
typedef struct
{
	Strict_32Bit RTWKFLT			:32;
}MM32_ENET_PMTRWFRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_PMTRWFRBits B;
}MM32_ENET_PMTRWFR;

//MMC Control Register
typedef struct
{
	Strict_32Bit CRST			:1;
	Strict_32Bit COSR			:1;
	Strict_32Bit CRRST			:1;
	Strict_32Bit CFIX			:1;
	Strict_32Bit CPSET			:1;
	Strict_32Bit CPSEL			:1;
	Strict_32Bit _reserved_0			:26;
}MM32_ENET_MMCCRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_MMCCRBits B;
}MM32_ENET_MMCCR;

//MMC Receive Status Register
typedef struct
{
	Strict_32Bit _reserved_0			:5;
	Strict_32Bit RCRCEIS			:1;
	Strict_32Bit RALIEIS			:1;
	Strict_32Bit _reserved_1			:10;
	Strict_32Bit RUGIS			:1;
	Strict_32Bit _reserved_2			:14;
}MM32_ENET_MMCRSRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_MMCRSRBits B;
}MM32_ENET_MMCRSR;

//MMC Transmit Status Register
typedef struct
{
	Strict_32Bit _reserved_0			:14;
	Strict_32Bit TGSCIS			:1;
	Strict_32Bit TGMCIS			:1;
	Strict_32Bit _reserved_1			:5;
	Strict_32Bit TAGIS			:1;
	Strict_32Bit _reserved_2			:10;
}MM32_ENET_MMCTSRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_MMCTSRBits B;
}MM32_ENET_MMCTSR;

//MMC receive interrupt register
typedef struct
{
	Strict_32Bit _reserved_0			:5;
	Strict_32Bit RCRCEIM			:1;
	Strict_32Bit RALIEIM			:1;
	Strict_32Bit _reserved_1			:10;
	Strict_32Bit RUGIM			:1;
	Strict_32Bit _reserved_2			:14;
}MM32_ENET_MMCRIRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_MMCRIRBits B;
}MM32_ENET_MMCRIR;

//MMC Transmit Interrupt Register
typedef struct
{
	Strict_32Bit _reserved_0			:14;
	Strict_32Bit TGSCIM			:1;
	Strict_32Bit TGMCIM			:1;
	Strict_32Bit _reserved_1			:5;
	Strict_32Bit TAGIM			:1;
	Strict_32Bit _reserved_2			:10;
}MM32_ENET_MMCTIRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_MMCTIRBits B;
}MM32_ENET_MMCTIR;

//MMC Receive Unicast Good Frame Statistics Register
typedef struct
{
	Strict_32Bit MMCRUG			:32;
}MM32_ENET_MMCRUGRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_MMCRUGRBits B;
}MM32_ENET_MMCRUGR;

//MMC Alignment Error Received Frame Statistics Register
typedef struct
{
	Strict_32Bit RALIE			:32;
}MM32_ENET_MMCRALIERBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_MMCRALIERBits B;
}MM32_ENET_MMCRALIER;

//MMC CRC Error Received Frame Statistics Register
typedef struct
{
	Strict_32Bit RCRCE			:32;
}MM32_ENET_MMCRCRCERBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_MMCRCRCERBits B;
}MM32_ENET_MMCRCRCER;

//MMC sends good frame pass statistics register
typedef struct
{
	Strict_32Bit MMCTG			:32;
}MM32_ENET_MMCTGRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_MMCTGRBits B;
}MM32_ENET_MMCTGR;

//MMC sends a good frame statistics register after a single collision error
typedef struct
{
	Strict_32Bit TGSC			:32;
}MM32_ENET_MMCTGSCRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_MMCTGSCRBits B;
}MM32_ENET_MMCTGSCR;

//MMC sends good frame statistics register after multiple collision errors
typedef struct
{
	Strict_32Bit TGMC			:32;
}MM32_ENET_MMCTGMCRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_ENET_MMCTGMCRBits B;
}MM32_ENET_MMCTGMCR;


#endif

#ifndef _MM32_ENETREG_H_
#define _MM32_ENETREG_H_

#include "MM32_ENETRegdef.h"

//MAC SMI Address Register
#define	ENET_MACSMIAR		(*(MM32_ENET_MACSMIAR*)(0x40028000+0x0010))

//MAC SMI Data Register
#define	ENET_MACSMIDR		(*(MM32_ENET_MACSMIDR*)(0x40028000+0x0014))

//MAC Control Register
#define	ENET_MACCR		(*(MM32_ENET_MACCR*)(0x40028000+0x0000))

//MAC Status Register
#define	ENET_MACSR		(*(MM32_ENET_MACSR*)(0x40028000+0x0024))

//MAC Flow Control Register
#define	ENET_MACFCR		(*(MM32_ENET_MACFCR*)(0x40028000+0x0018))

//MAC Interrupt Status Register
#define	ENET_MACISR		(*(MM32_ENET_MACISR*)(0x40028000+0x0038))

//MAC Interrupt Mask Register
#define	ENET_MACIMR		(*(MM32_ENET_MACIMR*)(0x40028000+0x003C))

//MAC Address Filtering Control Register
#define	ENET_MACAFR		(*(MM32_ENET_MACAFR*)(0x40028000+0x0004))

//MAC Filter Address High Register 0
#define	ENET_MACAHR0		(*(MM32_ENET_MACAHR0*)(0x40028000+0x0040))

//MAC Filter Address Low Register 0
#define	ENET_MACALR0		(*(MM32_ENET_MACALR0*)(0x40028000+0x0044))

//MAC Filter Address High Register 0
#define	ENET_MACAHR1		(*(MM32_ENET_MACAHR1*)(0x40028000+0x48))

//MAC Filter Address Low Register 0
#define	ENET_MACALR1		(*(MM32_ENET_MACALR1*)(0x40028000+0x4C))

//MAC Filter Address High Register 0
#define	ENET_MACAHR2		(*(MM32_ENET_MACAHR2*)(0x40028000+0x50))

//MAC Filter Address Low Register 0
#define	ENET_MACALR2		(*(MM32_ENET_MACALR2*)(0x40028000+0x54))

//MAC Filter Address High Register 0
#define	ENET_MACAHR3		(*(MM32_ENET_MACAHR3*)(0x40028000+0x58))

//MAC Filter Address Low Register 0
#define	ENET_MACALR3		(*(MM32_ENET_MACALR3*)(0x40028000+0x5C))

//MAC Filter Address High Register 0
#define	ENET_MACAHR4		(*(MM32_ENET_MACAHR4*)(0x40028000+0x60))

//MAC Filter Address Low Register 0
#define	ENET_MACALR4		(*(MM32_ENET_MACALR4*)(0x40028000+0x64))

//MAC Filter Address High Register 0
#define	ENET_MACAHR5		(*(MM32_ENET_MACAHR5*)(0x40028000+0x68))

//MAC Filter Address Low Register 0
#define	ENET_MACALR5		(*(MM32_ENET_MACALR5*)(0x40028000+0x6C))

//MAC HASH table high register
#define	ENET_MACHTHR		(*(MM32_ENET_MACHTHR*)(0x40028000+0x0008))

//MAC HASH table low register
#define	ENET_MACHTLR		(*(MM32_ENET_MACHTLR*)(0x40028000+0x000C))

//MAC VLAN TAG send register
#define	ENET_MACVLTTR		(*(MM32_ENET_MACVLTTR*)(0x40028000+0x0584))

//MAC VLAN TAG Receive Register
#define	ENET_MACVLTRR		(*(MM32_ENET_MACVLTRR*)(0x40028000+0x001C))

//MAC VLAN HASH Table Register
#define	ENET_MACVLHTR		(*(MM32_ENET_MACVLHTR*)(0x40028000+0x0588))

//DMA work mode register
#define	ENET_DMAMDR		(*(MM32_ENET_DMAMDR*)(0x40028000+0x1018))

//DMA bus control register
#define	ENET_DMABSR		(*(MM32_ENET_DMABSR*)(0x40028000+0x1000))

//DMA status register
#define	ENET_DMASR		(*(MM32_ENET_DMASR*)(0x40028000+0x1014))

//DMA Interrupt Register
#define	ENET_DMAIR		(*(MM32_ENET_DMAIR*)(0x40028000+0x101C))

//DMA Frame Loss Statistics Register
#define	ENET_DMAFLCR		(*(MM32_ENET_DMAFLCR*)(0x40028000+0x1020))

//DMA Watchdog Timing Register
#define	ENET_DMAWDTR		(*(MM32_ENET_DMAWDTR*)(0x40028000+0x1024))

//DMA Receive Polling Register
#define	ENET_DMARXPDR		(*(MM32_ENET_DMARXPDR*)(0x40028000+0x1008))

//DMA transmit polling register
#define	ENET_DMATXPDR		(*(MM32_ENET_DMATXPDR*)(0x40028000+0x1004))

//DMA Receive Descriptor Address Register
#define	ENET_DMARXDSAR		(*(MM32_ENET_DMARXDSAR*)(0x40028000+0x100C))

//DMA transmit descriptor address register
#define	ENET_DMATXDSAR		(*(MM32_ENET_DMATXDSAR*)(0x40028000+0x1010))

//DMA current receive descriptor address register
#define	ENET_DMACURRXDSAR		(*(MM32_ENET_DMACURRXDSAR*)(0x40028000+0x104C))

//DMA current transmit descriptor address register
#define	ENET_DMACURTXDSAR		(*(MM32_ENET_DMACURTXDSAR*)(0x40028000+0x1048))

//DMA current receive buffer address register
#define	ENET_DMACURRXBFAR		(*(MM32_ENET_DMACURRXBFAR*)(0x40028000+0x1054))

//DMA current send buffer address register
#define	ENET_DMACURTXBFAR		(*(MM32_ENET_DMACURTXBFAR*)(0x40028000+0x1050))

//PTP Control Register
#define	ENET_PTPCR		(*(MM32_ENET_PTPCR*)(0x40028000+0x0700))

//PTP Status Register
#define	ENET_PTPSR		(*(MM32_ENET_PTPSR*)(0x40028000+0x0728))

//PTP Basic Addend Register
#define	ENET_PTPBSAR		(*(MM32_ENET_PTPBSAR*)(0x40028000+0x0718))

//PTP subsecond adder register
#define	ENET_PTPNSAR		(*(MM32_ENET_PTPNSAR*)(0x40028000+0x0704))

//PTP System Second Register
#define	ENET_PTPSBSR		(*(MM32_ENET_PTPSBSR*)(0x40028000+0x0708))

//PTP System Subsecond Register
#define	ENET_PTPSNSR		(*(MM32_ENET_PTPSNSR*)(0x40028000+0x070C))

//PTP Update Seconds Register
#define	ENET_PTPUBSR		(*(MM32_ENET_PTPUBSR*)(0x40028000+0x0710))

//PTP update subsecond register
#define	ENET_PTPUNSR		(*(MM32_ENET_PTPUNSR*)(0x40028000+0x0714))

//PTP Target Seconds Register 0
#define	ENET_PTPTBSR		(*(MM32_ENET_PTPTBSR*)(0x40028000+0x071C))

//PTP Target Subsecond Register 0
#define	ENET_PTPTNSR		(*(MM32_ENET_PTPTNSR*)(0x40028000+0x0720))

//PTP PPS Control Register
#define	ENET_PTPPPSR		(*(MM32_ENET_PTPPPSR*)(0x40028000+0x072C))

//MAC PMT Control Register
#define	ENET_PMTCR		(*(MM32_ENET_PMTCR*)(0x40028000+0x002C))

//MAC Remote Wakeup Frame Filter Register
#define	ENET_PMTRWFR		(*(MM32_ENET_PMTRWFR*)(0x40028000+0x0028))

//MMC Control Register
#define	ENET_MMCCR		(*(MM32_ENET_MMCCR*)(0x40028000+0x0100))

//MMC Receive Status Register
#define	ENET_MMCRSR		(*(MM32_ENET_MMCRSR*)(0x40028000+0x0104))

//MMC Transmit Status Register
#define	ENET_MMCTSR		(*(MM32_ENET_MMCTSR*)(0x40028000+0x0108))

//MMC receive interrupt register
#define	ENET_MMCRIR		(*(MM32_ENET_MMCRIR*)(0x40028000+0x010C))

//MMC Transmit Interrupt Register
#define	ENET_MMCTIR		(*(MM32_ENET_MMCTIR*)(0x40028000+0x0110))

//MMC Receive Unicast Good Frame Statistics Register
#define	ENET_MMCRUGR		(*(MM32_ENET_MMCRUGR*)(0x40028000+0x01C4))

//MMC Alignment Error Received Frame Statistics Register
#define	ENET_MMCRALIER		(*(MM32_ENET_MMCRALIER*)(0x40028000+0x0198))

//MMC CRC Error Received Frame Statistics Register
#define	ENET_MMCRCRCER		(*(MM32_ENET_MMCRCRCER*)(0x40028000+0x0194))

//MMC sends good frame pass statistics register
#define	ENET_MMCTGR		(*(MM32_ENET_MMCTGR*)(0x40028000+0x0168))

//MMC sends a good frame statistics register after a single collision error
#define	ENET_MMCTGSCR		(*(MM32_ENET_MMCTGSCR*)(0x40028000+0x014C))

//MMC sends good frame statistics register after multiple collision errors
#define	ENET_MMCTGMCR		(*(MM32_ENET_MMCTGMCR*)(0x40028000+0x0150))


#endif

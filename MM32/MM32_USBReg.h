#ifndef _MM32_USBREG_H_
#define _MM32_USBREG_H_

#include "MM32_USBRegdef.h"

//OTG Interrupt Status Register
#define	USB_FSOTG_ISTAT		(*(MM32_USB_FSOTG_ISTAT*)(0x50000000+0x10))

//OTG Interrupt Control Register
#define	USB_FSOTG_ICTRL		(*(MM32_USB_FSOTG_ICTRL*)(0x50000000+0x14))

//OTG Status Register
#define	USB_FSOTG_STAT		(*(MM32_USB_FSOTG_STAT*)(0x50000000+0x18))

//OTG Control register
#define	USB_FSOTG_CTRL		(*(MM32_USB_FSOTG_CTRL*)(0x50000000+0x1C))

//Interrupt status register
#define	USB_FSINT_STAT		(*(MM32_USB_FSINT_STAT*)(0x50000000+0x80))

//Interrupt enable register
#define	USB_FSINT_ENB		(*(MM32_USB_FSINT_ENB*)(0x50000000+0x84))

//Error interrupt status register
#define	USB_FSERR_STAT		(*(MM32_USB_FSERR_STAT*)(0x50000000+0x88))

//Error interrupt enable register
#define	USB_FSERR_ENB		(*(MM32_USB_FSERR_ENB*)(0x50000000+0x8C))

//Status register
#define	USB_FSSTAT		(*(MM32_USB_FSSTAT*)(0x50000000+0x90))

//Control register
#define	USB_FSCTL		(*(MM32_USB_FSCTL*)(0x50000000+0x94))

//Address register
#define	USB_FSADDR		(*(MM32_USB_FSADDR*)(0x50000000+0x98))

//BDT page register 1
#define	USB_FSBDT_PAGE_01		(*(MM32_USB_FSBDT_PAGE_01*)(0x50000000+0x9C))

//Frame number register
#define	USB_FSFRM_NUML		(*(MM32_USB_FSFRM_NUML*)(0x50000000+0xA0))

//Frame number register
#define	USB_FSFRM_NUMH		(*(MM32_USB_FSFRM_NUMH*)(0x50000000+0xA4))

//Token register
#define	USB_FSTOKEN		(*(MM32_USB_FSTOKEN*)(0x50000000+0xA8))

//SOF threshold register
#define	USB_FSSOF_THLD		(*(MM32_USB_FSSOF_THLD*)(0x50000000+0xAC))

//BDT page register 2
#define	USB_FSBDT_PAGE_02		(*(MM32_USB_FSBDT_PAGE_02*)(0x50000000+0xB0))

//BDT page register 3
#define	USB_FSBDT_PAGE_03		(*(MM32_USB_FSBDT_PAGE_03*)(0x50000000+0xB4))

//Endpoint control register 0
#define	USB_FSEP0_CTL		(*(MM32_USB_FSEP0_CTL*)(0x50000000+0xC0))

//Endpoint control register 0
#define	USB_FSEP1_CTL		(*(MM32_USB_FSEP1_CTL*)(0x50000000+0xc4))

//Endpoint control register 0
#define	USB_FSEP2_CTL		(*(MM32_USB_FSEP2_CTL*)(0x50000000+0xc8))

//Endpoint control register 0
#define	USB_FSEP3_CTL		(*(MM32_USB_FSEP3_CTL*)(0x50000000+0xcc))

//Endpoint control register 0
#define	USB_FSEP4_CTL		(*(MM32_USB_FSEP4_CTL*)(0x50000000+0xd0))

//Endpoint control register 0
#define	USB_FSEP5_CTL		(*(MM32_USB_FSEP5_CTL*)(0x50000000+0xd4))

//Endpoint control register 0
#define	USB_FSEP6_CTL		(*(MM32_USB_FSEP6_CTL*)(0x50000000+0xd8))

//Endpoint control register 0
#define	USB_FSEP7_CTL		(*(MM32_USB_FSEP7_CTL*)(0x50000000+0xdc))

//Endpoint control register 0
#define	USB_FSEP8_CTL		(*(MM32_USB_FSEP8_CTL*)(0x50000000+0xe0))

//Endpoint control register 0
#define	USB_FSEP9_CTL		(*(MM32_USB_FSEP9_CTL*)(0x50000000+0xe4))

//Endpoint control register 0
#define	USB_FSEP10_CTL		(*(MM32_USB_FSEP10_CTL*)(0x50000000+0xe8))

//Endpoint control register 0
#define	USB_FSEP11_CTL		(*(MM32_USB_FSEP11_CTL*)(0x50000000+0xec))

//Endpoint control register 0
#define	USB_FSEP12_CTL		(*(MM32_USB_FSEP12_CTL*)(0x50000000+0xf0))

//Endpoint control register 0
#define	USB_FSEP13_CTL		(*(MM32_USB_FSEP13_CTL*)(0x50000000+0xf4))

//Endpoint control register 0
#define	USB_FSEP14_CTL		(*(MM32_USB_FSEP14_CTL*)(0x50000000+0xf8))

//Endpoint control register 0
#define	USB_FSEP15_CTL		(*(MM32_USB_FSEP15_CTL*)(0x50000000+0xfc))

//USB Control register
#define	USB_FSUSBCTRL		(*(MM32_USB_FSUSBCTRL*)(0x50000000+0x100))


#endif

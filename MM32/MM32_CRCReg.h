#ifndef _MM32_CRCREG_H_
#define _MM32_CRCREG_H_

#include "MM32_CRCRegdef.h"

//CRC data register
#define	CRC_DR		(*(MM32_CRC_DR*)(0x40023000+0x00))

//CRC independent data register
#define	CRC_IDR		(*(MM32_CRC_IDR*)(0x40023000+0x04))

//CRC Control Register
#define	CRC_CR		(*(MM32_CRC_CR*)(0x40023000+0x08))

//CRC initial value register
#define	CRC_IVR		(*(MM32_CRC_IVR*)(0x40023000+0x0C))

//CRC polynomial register
#define	CRC_PR		(*(MM32_CRC_PR*)(0x40023000+0x10))


#endif

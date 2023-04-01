#ifndef _MM32_CRSREG_H_
#define _MM32_CRSREG_H_

#include "MM32_CRSRegdef.h"

//CRS Control Register
#define	CRS_CR		(*(MM32_CRS_CR*)(0x40006C00+0x00))

//CRS Configuration Register
#define	CRS_CFGR		(*(MM32_CRS_CFGR*)(0x40006C00+0x04))

//CRS Interrupt Status Register
#define	CRS_lSR		(*(MM32_CRS_lSR*)(0x40006C00+0x08))

//CRS Interrupt Flag Clear Register
#define	CRS_lCR		(*(MM32_CRS_lCR*)(0x40006C00+0x0C))


#endif

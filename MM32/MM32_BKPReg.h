#ifndef _MM32_BKPREG_H_
#define _MM32_BKPREG_H_

#include "MM32_BKPRegdef.h"

//RTC Clock Calibration Register
#define	BKP_RTCCR		(*(MM32_BKP_RTCCR*)(0x40002840+0x40))

//Backup Control Register
#define	BKP_CR		(*(MM32_BKP_CR*)(0x40002840+0x44))

//Backup Control Status Register
#define	BKP_CSR		(*(MM32_BKP_CSR*)(0x40002840+0x48))

//Backup data register n
#define	BKP_DR		(*(MM32_BKP_DR*)(0x40002840+0x50))


#endif

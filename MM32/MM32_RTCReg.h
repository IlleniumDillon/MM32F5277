#ifndef _MM32_RTCREG_H_
#define _MM32_RTCREG_H_

#include "MM32_RTCRegdef.h"

//RTC control register high bits
#define	RTC_CRH		(*(MM32_RTC_CRH*)(0x40002800+0x00))

//RTC control register low bits
#define	RTC_CRL		(*(MM32_RTC_CRL*)(0x40002800+0x04))

//RTC prescaler load register high bits
#define	RTC_PRLH		(*(MM32_RTC_PRLH*)(0x40002800+0x08))

//RTC prescaler load register low bits
#define	RTC_PRLL		(*(MM32_RTC_PRLL*)(0x40002800+0x0C))

//RTC prescaler division factor register high bits
#define	RTC_DIVH		(*(MM32_RTC_DIVH*)(0x40002800+0x10))

//RTC prescaler division factor register low bits
#define	RTC_DIVL		(*(MM32_RTC_DIVL*)(0x40002800+0x14))

//RTC counter register high bits
#define	RTC_CNTH		(*(MM32_RTC_CNTH*)(0x40002800+0x18))

//RTC counter register low bits
#define	RTC_CNTL		(*(MM32_RTC_CNTL*)(0x40002800+0x1C))

//RTC alarm register high bit
#define	RTC_ALRH		(*(MM32_RTC_ALRH*)(0x40002800+0x20))

//RTC alarm register low bits
#define	RTC_ALRL		(*(MM32_RTC_ALRL*)(0x40002800+0x24))

//RTC millisecond register high bit
#define	RTC_MSRH		(*(MM32_RTC_MSRH*)(0x40002800+0x28))

//RTC millisecond register low bit
#define	RTC_MSRL		(*(MM32_RTC_MSRL*)(0x40002800+0x2C))

//RTC LSE Configuration Register
#define	RTC_LSE_CFG		(*(MM32_RTC_LSE_CFG*)(0x40002800+0x3C))


#endif

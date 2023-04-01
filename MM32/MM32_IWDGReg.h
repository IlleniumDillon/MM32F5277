#ifndef _MM32_IWDGREG_H_
#define _MM32_IWDGREG_H_

#include "MM32_IWDGRegdef.h"

//key register
#define	IWDG_KR		(*(MM32_IWDG_KR*)(0x40003000+0x00))

//Prescaler register
#define	IWDG_PR		(*(MM32_IWDG_PR*)(0x40003000+0x04))

//reload register
#define	IWDG_RLR		(*(MM32_IWDG_RLR*)(0x40003000+0x08))

//status register
#define	IWDG_SR		(*(MM32_IWDG_SR*)(0x40003000+0x0C))

//control register
#define	IWDG_CR		(*(MM32_IWDG_CR*)(0x40003000+0x10))

//Interrupt Generation Register
#define	IWDG_IGEN		(*(MM32_IWDG_IGEN*)(0x40003000+0x14))

//count register
#define	IWDG_CNT		(*(MM32_IWDG_CNT*)(0x40003000+0x18))

//Frequency division count register
#define	IWDG_PS		(*(MM32_IWDG_PS*)(0x40003000+0x1c))


#endif

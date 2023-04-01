#ifndef _MM32_FSMCREG_H_
#define _MM32_FSMCREG_H_

#include "MM32_FSMCRegdef.h"

//Memory Mask Register 0
#define	FSMC_SMSKR0		(*(MM32_FSMC_SMSKR0*)(0xA0000000+0x54))

//Memory Mask Register 0
#define	FSMC_SMSKR1		(*(MM32_FSMC_SMSKR1*)(0xA0000000+0x58))

//Memory Mask Register 0
#define	FSMC_SMSKR2		(*(MM32_FSMC_SMSKR2*)(0xA0000000+0x5C))

//Memory Mask Register 0
#define	FSMC_SMSKR3		(*(MM32_FSMC_SMSKR3*)(0xA0000000+0x60))

//Memory Timing Register 0
#define	FSMC_SMTMGR_SET0		(*(MM32_FSMC_SMTMGR_SET0*)(0xA0000000+0x94))

//Memory Timing Register 0
#define	FSMC_SMTMGR_SET1		(*(MM32_FSMC_SMTMGR_SET1*)(0xA0000000+0x98))

//Memory Timing Register 0
#define	FSMC_SMTMGR_SET2		(*(MM32_FSMC_SMTMGR_SET2*)(0xA0000000+0x9C))

//memory control register
#define	FSMC_SMCTLR		(*(MM32_FSMC_SMCTLR*)(0xA0000000+0xA4))


#endif

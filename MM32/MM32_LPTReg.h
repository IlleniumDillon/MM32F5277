#ifndef _MM32_LPTREG_H_
#define _MM32_LPTREG_H_

#include "MM32_LPTRegdef.h"

//LPTIM Configuration Register
#define	LPT_CFG		(*(MM32_LPT_CFG*)(0x4001D000+0x00))

//LPTIM Interrupt Enable Register
#define	LPT_IE		(*(MM32_LPT_IE*)(0x4001D000+0x04))

//LPTIM Interrupt Flag Register
#define	LPT_IF		(*(MM32_LPT_IF*)(0x4001D000+0x08))

//LPTIM Control Register
#define	LPT_CTRL		(*(MM32_LPT_CTRL*)(0x4001D000+0x0C))

//LPTIM count register
#define	LPT_CNT		(*(MM32_LPT_CNT*)(0x4001D000+0x10))

//LPTIM Compare Value Register
#define	LPT_CMP		(*(MM32_LPT_CMP*)(0x4001D000+0x14))

//LPTIM target value register
#define	LPT_TARGET		(*(MM32_LPT_TARGET*)(0x4001D000+0x18))


#endif

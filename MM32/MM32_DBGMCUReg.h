#ifndef _MM32_DBGMCUREG_H_
#define _MM32_DBGMCUREG_H_

#include "MM32_DBGMCURegdef.h"

//MCU_IDCODE register
#define	DBGMCU_IDCODE		(*(MM32_DBGMCU_IDCODE*)(0x40007080+0x00))

//DEBUG control register
#define	DBGMCU_CR		(*(MM32_DBGMCU_CR*)(0x40007080+0x04))


#endif

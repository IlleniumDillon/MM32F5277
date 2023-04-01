#ifndef _MM32_WWDGREG_H_
#define _MM32_WWDGREG_H_

#include "MM32_WWDGRegdef.h"

//control register
#define	WWDG_CR		(*(MM32_WWDG_CR*)(0x40002C00+0x00))

//configuration register
#define	WWDG_CFGR		(*(MM32_WWDG_CFGR*)(0x40002C00+0x04))

//status register
#define	WWDG_SR		(*(MM32_WWDG_SR*)(0x40002C00+0x08))


#endif

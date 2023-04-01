#ifndef _MM32_COMPREG_H_
#define _MM32_COMPREG_H_

#include "MM32_COMPRegdef.h"

//Comparator x (x=1, 2, 3) Control and Status Register
#define	COMP_CSR		(*(MM32_COMP_CSR*)(0x40014000+0x0C))

//Comparator External Reference Voltage Register
#define	COMP_CRV		(*(MM32_COMP_CRV*)(0x40014000+0x18))

//Comparator x (x=1, 2, 3) polling register
#define	COMP_POLL		(*(MM32_COMP_POLL*)(0x40014000+0x1C))


#endif

#ifndef _MM32_LPUREG_H_
#define _MM32_LPUREG_H_

#include "MM32_LPURegdef.h"

//LPUART Baud Rate Register
#define	LPU_LPUBAUD		(*(MM32_LPU_LPUBAUD*)(0x40010800+0x00))

//LPUART Baud Rate Modulation Control Register
#define	LPU_MODU		(*(MM32_LPU_MODU*)(0x40010800+0x04))

//LPUART Interrupt Flag Register
#define	LPU_LPUIF		(*(MM32_LPU_LPUIF*)(0x40010800+0x08))

//LPUART Status Register
#define	LPU_LPUSTA		(*(MM32_LPU_LPUSTA*)(0x40010800+0x0C))

//LPUART Control Register
#define	LPU_LPUCON		(*(MM32_LPU_LPUCON*)(0x40010800+0x10))

//LPUART transmit and receive enable register
#define	LPU_LPUEN		(*(MM32_LPU_LPUEN*)(0x40010800+0x14))

//LPUART receive data register
#define	LPU_LPURXD		(*(MM32_LPU_LPURXD*)(0x40010800+0x18))

//LPUART transmit data register
#define	LPU_LPUTXD		(*(MM32_LPU_LPUTXD*)(0x40010800+0x1C))

//LPUART data match register
#define	LPU_COMPARE		(*(MM32_LPU_COMPARE*)(0x40010800+0x20))

//LPUART Wakeup Register
#define	LPU_WKCKE		(*(MM32_LPU_WKCKE*)(0x40010800+0x24))


#endif

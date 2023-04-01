#ifndef _MM32_CORDICREG_H_
#define _MM32_CORDICREG_H_

#include "MM32_CORDICRegdef.h"

//CORDIC X Data Register
#define	CORDIC_DXR		(*(MM32_CORDIC_DXR*)(0x4002A000+0x00))

//CORDIC Y data register
#define	CORDIC_DYR		(*(MM32_CORDIC_DYR*)(0x4002A000+0x04))

//CORDIC Z data register
#define	CORDIC_DZR		(*(MM32_CORDIC_DZR*)(0x4002A000+0x08))

//CORDIC X Result Register
#define	CORDIC_RXR		(*(MM32_CORDIC_RXR*)(0x4002A000+0x0C))

//CORDIC Y result register
#define	CORDIC_RYR		(*(MM32_CORDIC_RYR*)(0x4002A000+0x10))

//CORDIC Z result register
#define	CORDIC_RZR		(*(MM32_CORDIC_RZR*)(0x4002A000+0x14))

//CORDIC Control Register
#define	CORDIC_CR		(*(MM32_CORDIC_CR*)(0x4002A000+0x18))

//CORDIC Status Register
#define	CORDIC_SR		(*(MM32_CORDIC_SR*)(0x4002A000+0x1C))


#endif

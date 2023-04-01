#ifndef _MM32_DACREG_H_
#define _MM32_DACREG_H_

#include "MM32_DACRegdef.h"

//DAC Control Register
#define	DAC_CR		(*(MM32_DAC_CR*)(0x40007400+0x00))

//DAC Software Trigger Register
#define	DAC_SWTRIGR		(*(MM32_DAC_SWTRIGR*)(0x40007400+0x04))

//12-Bit Right-Justified Data Holding Register for DAC Channel 1
#define	DAC_DHR12R1		(*(MM32_DAC_DHR12R1*)(0x40007400+0x08))

//12-Bit Left-Justified Data Holding Register for DAC Channel 1
#define	DAC_DHR12L1		(*(MM32_DAC_DHR12L1*)(0x40007400+0x0C))

//8-Bit Right-Justified Data Holding Register for DAC Channel 1
#define	DAC_DHR8R1		(*(MM32_DAC_DHR8R1*)(0x40007400+0x10))

//12-Bit Right-Justified Data Holding Register for DAC Channel 2
#define	DAC_DHR12R2		(*(MM32_DAC_DHR12R2*)(0x40007400+0x14))

//12-Bit Left-Justified Data Holding Register for DAC Channel 2
#define	DAC_DHR12L2		(*(MM32_DAC_DHR12L2*)(0x40007400+0x18))

//8-Bit Right-Justified Data Holding Register for DAC Channel 2
#define	DAC_DHR8R2		(*(MM32_DAC_DHR8R2*)(0x40007400+0x1C))

//12-Bit Right-Justified Data Holding Registers for Dual DACs
#define	DAC_DHR12RD		(*(MM32_DAC_DHR12RD*)(0x40007400+0x20))

//12-Bit Left-Justified Data Holding Registers for Dual DACs
#define	DAC_DHR12LD		(*(MM32_DAC_DHR12LD*)(0x40007400+0x24))

//8-Bit Right-Justified Data Holding Registers for Dual DACs
#define	DAC_DHR8RD		(*(MM32_DAC_DHR8RD*)(0x40007400+0x28))

//DAC Channel 1 Data Output Register
#define	DAC_DOR1		(*(MM32_DAC_DOR1*)(0x40007400+0x2C))

//DAC Channel 2 Data Output Register
#define	DAC_DOR2		(*(MM32_DAC_DOR2*)(0x40007400+0x30))


#endif

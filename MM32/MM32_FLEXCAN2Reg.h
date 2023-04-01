#ifndef _MM32_FLEXCAN2REG_H_
#define _MM32_FLEXCAN2REG_H_

#include "MM32_FLEXCAN2Regdef.h"

//Module configuration register
#define	FLEXCAN2_MCR		(*(MM32_FLEXCAN2_MCR*)(0x40018000+0x0))

//Control 1 register
#define	FLEXCAN2_CTRL1		(*(MM32_FLEXCAN2_CTRL1*)(0x40018000+0x4))

//Free running timer register
#define	FLEXCAN2_TIMER		(*(MM32_FLEXCAN2_TIMER*)(0x40018000+0x8))

//  Rx mailbox global mask register
#define	FLEXCAN2_RXMGMASK		(*(MM32_FLEXCAN2_RXMGMASK*)(0x40018000+0x10))

//  Rx 14 mask register
#define	FLEXCAN2_RX14MASK		(*(MM32_FLEXCAN2_RX14MASK*)(0x40018000+0x14))

//  Rx 15 mask register
#define	FLEXCAN2_RX15MASK		(*(MM32_FLEXCAN2_RX15MASK*)(0x40018000+0x18))

//  Error count register
#define	FLEXCAN2_ECR		(*(MM32_FLEXCAN2_ECR*)(0x40018000+0x1C))

//  Error and status 1 register
#define	FLEXCAN2_ESR1		(*(MM32_FLEXCAN2_ESR1*)(0x40018000+0x20))

//  Interrupt mask 1 register
#define	FLEXCAN2_IMASK1		(*(MM32_FLEXCAN2_IMASK1*)(0x40018000+0x28))

//  Interrupt flag 1 register
#define	FLEXCAN2_IFLAG1		(*(MM32_FLEXCAN2_IFLAG1*)(0x40018000+0x30))

//  Control 2 register
#define	FLEXCAN2_CTRL2		(*(MM32_FLEXCAN2_CTRL2*)(0x40018000+0x34))

//  Error and status 2 register
#define	FLEXCAN2_ESR2		(*(MM32_FLEXCAN2_ESR2*)(0x40018000+0x38))

//  CRC register
#define	FLEXCAN2_CRCR		(*(MM32_FLEXCAN2_CRCR*)(0x40018000+0x44))

//  Rx FIFO global mask register
#define	FLEXCAN2_RXFGMASK		(*(MM32_FLEXCAN2_RXFGMASK*)(0x40018000+0x48))

//  Rx FIFO information register
#define	FLEXCAN2_RXFIR		(*(MM32_FLEXCAN2_RXFIR*)(0x40018000+0x4C))

//  CAN bit timing register
#define	FLEXCAN2_CBT		(*(MM32_FLEXCAN2_CBT*)(0x40018000+0x50))

// Message Buffer 0 CS Register..Message Buffer 15 CS Register
#define	FLEXCAN2_CS0		(*(MM32_FLEXCAN2_CS0*)(0x40018000+0x80))

// Message Buffer 0 ID Register..Message Buffer 15 ID Register
#define	FLEXCAN2_ID0		(*(MM32_FLEXCAN2_ID0*)(0x40018000+0x84))

// Message Buffer 0 WORD0 Register..Message Buffer 15 WORD0 Register
#define	FLEXCAN2_WORD0		(*(MM32_FLEXCAN2_WORD0*)(0x40018000+0x88))

// Message Buffer 0 WORD1 Register..Message Buffer 15 WORD1 Register
#define	FLEXCAN2_WORD1		(*(MM32_FLEXCAN2_WORD1*)(0x40018000+0x8C))

// Message Buffer 0 CS Register..Message Buffer 15 CS Register
#define	FLEXCAN2_CS1		(*(MM32_FLEXCAN2_CS1*)(0x40018000+0x90))

// Message Buffer 0 ID Register..Message Buffer 15 ID Register
#define	FLEXCAN2_ID1		(*(MM32_FLEXCAN2_ID1*)(0x40018000+0x94))

// Message Buffer 0 WORD0 Register..Message Buffer 15 WORD0 Register
#define	FLEXCAN2_WORD01		(*(MM32_FLEXCAN2_WORD01*)(0x40018000+0x98))

// Message Buffer 0 WORD1 Register..Message Buffer 15 WORD1 Register
#define	FLEXCAN2_WORD11		(*(MM32_FLEXCAN2_WORD11*)(0x40018000+0x9C))

// Message Buffer 0 CS Register..Message Buffer 15 CS Register
#define	FLEXCAN2_CS2		(*(MM32_FLEXCAN2_CS2*)(0x40018000+0xA0))

// Message Buffer 0 ID Register..Message Buffer 15 ID Register
#define	FLEXCAN2_ID2		(*(MM32_FLEXCAN2_ID2*)(0x40018000+0xA4))

// Message Buffer 0 WORD0 Register..Message Buffer 15 WORD0 Register
#define	FLEXCAN2_WORD02		(*(MM32_FLEXCAN2_WORD02*)(0x40018000+0xA8))

// Message Buffer 0 WORD1 Register..Message Buffer 15 WORD1 Register
#define	FLEXCAN2_WORD12		(*(MM32_FLEXCAN2_WORD12*)(0x40018000+0xAC))

// Message Buffer 0 CS Register..Message Buffer 15 CS Register
#define	FLEXCAN2_CS3		(*(MM32_FLEXCAN2_CS3*)(0x40018000+0xB0))

// Message Buffer 0 ID Register..Message Buffer 15 ID Register
#define	FLEXCAN2_ID3		(*(MM32_FLEXCAN2_ID3*)(0x40018000+0xB4))

// Message Buffer 0 WORD0 Register..Message Buffer 15 WORD0 Register
#define	FLEXCAN2_WORD03		(*(MM32_FLEXCAN2_WORD03*)(0x40018000+0xB8))

// Message Buffer 0 WORD1 Register..Message Buffer 15 WORD1 Register
#define	FLEXCAN2_WORD13		(*(MM32_FLEXCAN2_WORD13*)(0x40018000+0xBC))

// Message Buffer 0 CS Register..Message Buffer 15 CS Register
#define	FLEXCAN2_CS4		(*(MM32_FLEXCAN2_CS4*)(0x40018000+0xC0))

// Message Buffer 0 ID Register..Message Buffer 15 ID Register
#define	FLEXCAN2_ID4		(*(MM32_FLEXCAN2_ID4*)(0x40018000+0xC4))

// Message Buffer 0 WORD0 Register..Message Buffer 15 WORD0 Register
#define	FLEXCAN2_WORD04		(*(MM32_FLEXCAN2_WORD04*)(0x40018000+0xC8))

// Message Buffer 0 WORD1 Register..Message Buffer 15 WORD1 Register
#define	FLEXCAN2_WORD14		(*(MM32_FLEXCAN2_WORD14*)(0x40018000+0xCC))

// Message Buffer 0 CS Register..Message Buffer 15 CS Register
#define	FLEXCAN2_CS5		(*(MM32_FLEXCAN2_CS5*)(0x40018000+0xD0))

// Message Buffer 0 ID Register..Message Buffer 15 ID Register
#define	FLEXCAN2_ID5		(*(MM32_FLEXCAN2_ID5*)(0x40018000+0xD4))

// Message Buffer 0 WORD0 Register..Message Buffer 15 WORD0 Register
#define	FLEXCAN2_WORD05		(*(MM32_FLEXCAN2_WORD05*)(0x40018000+0xD8))

// Message Buffer 0 WORD1 Register..Message Buffer 15 WORD1 Register
#define	FLEXCAN2_WORD15		(*(MM32_FLEXCAN2_WORD15*)(0x40018000+0xDC))

// Message Buffer 0 CS Register..Message Buffer 15 CS Register
#define	FLEXCAN2_CS6		(*(MM32_FLEXCAN2_CS6*)(0x40018000+0xE0))

// Message Buffer 0 ID Register..Message Buffer 15 ID Register
#define	FLEXCAN2_ID6		(*(MM32_FLEXCAN2_ID6*)(0x40018000+0xE4))

// Message Buffer 0 WORD0 Register..Message Buffer 15 WORD0 Register
#define	FLEXCAN2_WORD06		(*(MM32_FLEXCAN2_WORD06*)(0x40018000+0xE8))

// Message Buffer 0 WORD1 Register..Message Buffer 15 WORD1 Register
#define	FLEXCAN2_WORD16		(*(MM32_FLEXCAN2_WORD16*)(0x40018000+0xEC))

// Message Buffer 0 CS Register..Message Buffer 15 CS Register
#define	FLEXCAN2_CS7		(*(MM32_FLEXCAN2_CS7*)(0x40018000+0xF0))

// Message Buffer 0 ID Register..Message Buffer 15 ID Register
#define	FLEXCAN2_ID7		(*(MM32_FLEXCAN2_ID7*)(0x40018000+0xF4))

// Message Buffer 0 WORD0 Register..Message Buffer 15 WORD0 Register
#define	FLEXCAN2_WORD07		(*(MM32_FLEXCAN2_WORD07*)(0x40018000+0xF8))

// Message Buffer 0 WORD1 Register..Message Buffer 15 WORD1 Register
#define	FLEXCAN2_WORD17		(*(MM32_FLEXCAN2_WORD17*)(0x40018000+0xFC))

// Message Buffer 0 CS Register..Message Buffer 15 CS Register
#define	FLEXCAN2_CS8		(*(MM32_FLEXCAN2_CS8*)(0x40018000+0x100))

// Message Buffer 0 ID Register..Message Buffer 15 ID Register
#define	FLEXCAN2_ID8		(*(MM32_FLEXCAN2_ID8*)(0x40018000+0x104))

// Message Buffer 0 WORD0 Register..Message Buffer 15 WORD0 Register
#define	FLEXCAN2_WORD08		(*(MM32_FLEXCAN2_WORD08*)(0x40018000+0x108))

// Message Buffer 0 WORD1 Register..Message Buffer 15 WORD1 Register
#define	FLEXCAN2_WORD18		(*(MM32_FLEXCAN2_WORD18*)(0x40018000+0x10C))

// Message Buffer 0 CS Register..Message Buffer 15 CS Register
#define	FLEXCAN2_CS9		(*(MM32_FLEXCAN2_CS9*)(0x40018000+0x110))

// Message Buffer 0 ID Register..Message Buffer 15 ID Register
#define	FLEXCAN2_ID9		(*(MM32_FLEXCAN2_ID9*)(0x40018000+0x114))

// Message Buffer 0 WORD0 Register..Message Buffer 15 WORD0 Register
#define	FLEXCAN2_WORD09		(*(MM32_FLEXCAN2_WORD09*)(0x40018000+0x118))

// Message Buffer 0 WORD1 Register..Message Buffer 15 WORD1 Register
#define	FLEXCAN2_WORD19		(*(MM32_FLEXCAN2_WORD19*)(0x40018000+0x11C))

// Message Buffer 0 CS Register..Message Buffer 15 CS Register
#define	FLEXCAN2_CS10		(*(MM32_FLEXCAN2_CS10*)(0x40018000+0x120))

// Message Buffer 0 ID Register..Message Buffer 15 ID Register
#define	FLEXCAN2_ID10		(*(MM32_FLEXCAN2_ID10*)(0x40018000+0x124))

// Message Buffer 0 WORD0 Register..Message Buffer 15 WORD0 Register
#define	FLEXCAN2_WORD010		(*(MM32_FLEXCAN2_WORD010*)(0x40018000+0x128))

// Message Buffer 0 WORD1 Register..Message Buffer 15 WORD1 Register
#define	FLEXCAN2_WORD110		(*(MM32_FLEXCAN2_WORD110*)(0x40018000+0x12C))

// Message Buffer 0 CS Register..Message Buffer 15 CS Register
#define	FLEXCAN2_CS11		(*(MM32_FLEXCAN2_CS11*)(0x40018000+0x130))

// Message Buffer 0 ID Register..Message Buffer 15 ID Register
#define	FLEXCAN2_ID11		(*(MM32_FLEXCAN2_ID11*)(0x40018000+0x134))

// Message Buffer 0 WORD0 Register..Message Buffer 15 WORD0 Register
#define	FLEXCAN2_WORD011		(*(MM32_FLEXCAN2_WORD011*)(0x40018000+0x138))

// Message Buffer 0 WORD1 Register..Message Buffer 15 WORD1 Register
#define	FLEXCAN2_WORD111		(*(MM32_FLEXCAN2_WORD111*)(0x40018000+0x13C))

// Message Buffer 0 CS Register..Message Buffer 15 CS Register
#define	FLEXCAN2_CS12		(*(MM32_FLEXCAN2_CS12*)(0x40018000+0x140))

// Message Buffer 0 ID Register..Message Buffer 15 ID Register
#define	FLEXCAN2_ID12		(*(MM32_FLEXCAN2_ID12*)(0x40018000+0x144))

// Message Buffer 0 WORD0 Register..Message Buffer 15 WORD0 Register
#define	FLEXCAN2_WORD012		(*(MM32_FLEXCAN2_WORD012*)(0x40018000+0x148))

// Message Buffer 0 WORD1 Register..Message Buffer 15 WORD1 Register
#define	FLEXCAN2_WORD112		(*(MM32_FLEXCAN2_WORD112*)(0x40018000+0x14C))

// Message Buffer 0 CS Register..Message Buffer 15 CS Register
#define	FLEXCAN2_CS13		(*(MM32_FLEXCAN2_CS13*)(0x40018000+0x150))

// Message Buffer 0 ID Register..Message Buffer 15 ID Register
#define	FLEXCAN2_ID13		(*(MM32_FLEXCAN2_ID13*)(0x40018000+0x154))

// Message Buffer 0 WORD0 Register..Message Buffer 15 WORD0 Register
#define	FLEXCAN2_WORD013		(*(MM32_FLEXCAN2_WORD013*)(0x40018000+0x158))

// Message Buffer 0 WORD1 Register..Message Buffer 15 WORD1 Register
#define	FLEXCAN2_WORD113		(*(MM32_FLEXCAN2_WORD113*)(0x40018000+0x15C))

// Message Buffer 0 CS Register..Message Buffer 15 CS Register
#define	FLEXCAN2_CS14		(*(MM32_FLEXCAN2_CS14*)(0x40018000+0x160))

// Message Buffer 0 ID Register..Message Buffer 15 ID Register
#define	FLEXCAN2_ID14		(*(MM32_FLEXCAN2_ID14*)(0x40018000+0x164))

// Message Buffer 0 WORD0 Register..Message Buffer 15 WORD0 Register
#define	FLEXCAN2_WORD014		(*(MM32_FLEXCAN2_WORD014*)(0x40018000+0x168))

// Message Buffer 0 WORD1 Register..Message Buffer 15 WORD1 Register
#define	FLEXCAN2_WORD114		(*(MM32_FLEXCAN2_WORD114*)(0x40018000+0x16C))

// Message Buffer 0 CS Register..Message Buffer 15 CS Register
#define	FLEXCAN2_CS15		(*(MM32_FLEXCAN2_CS15*)(0x40018000+0x170))

// Message Buffer 0 ID Register..Message Buffer 15 ID Register
#define	FLEXCAN2_ID15		(*(MM32_FLEXCAN2_ID15*)(0x40018000+0x174))

// Message Buffer 0 WORD0 Register..Message Buffer 15 WORD0 Register
#define	FLEXCAN2_WORD015		(*(MM32_FLEXCAN2_WORD015*)(0x40018000+0x178))

// Message Buffer 0 WORD1 Register..Message Buffer 15 WORD1 Register
#define	FLEXCAN2_WORD115		(*(MM32_FLEXCAN2_WORD115*)(0x40018000+0x17C))

//  R0 single mask register
#define	FLEXCAN2_RXIMR0		(*(MM32_FLEXCAN2_RXIMR0*)(0x40018000+0x880))

//  R0 single mask register
#define	FLEXCAN2_RXIMR1		(*(MM32_FLEXCAN2_RXIMR1*)(0x40018000+0x884))

//  R0 single mask register
#define	FLEXCAN2_RXIMR2		(*(MM32_FLEXCAN2_RXIMR2*)(0x40018000+0x888))

//  R0 single mask register
#define	FLEXCAN2_RXIMR3		(*(MM32_FLEXCAN2_RXIMR3*)(0x40018000+0x88C))

//  R0 single mask register
#define	FLEXCAN2_RXIMR4		(*(MM32_FLEXCAN2_RXIMR4*)(0x40018000+0x890))

//  R0 single mask register
#define	FLEXCAN2_RXIMR5		(*(MM32_FLEXCAN2_RXIMR5*)(0x40018000+0x894))

//  R0 single mask register
#define	FLEXCAN2_RXIMR6		(*(MM32_FLEXCAN2_RXIMR6*)(0x40018000+0x898))

//  R0 single mask register
#define	FLEXCAN2_RXIMR7		(*(MM32_FLEXCAN2_RXIMR7*)(0x40018000+0x89C))

//  R0 single mask register
#define	FLEXCAN2_RXIMR8		(*(MM32_FLEXCAN2_RXIMR8*)(0x40018000+0x8A0))

//  R0 single mask register
#define	FLEXCAN2_RXIMR9		(*(MM32_FLEXCAN2_RXIMR9*)(0x40018000+0x8A4))

//  R0 single mask register
#define	FLEXCAN2_RXIMR10		(*(MM32_FLEXCAN2_RXIMR10*)(0x40018000+0x8A8))

//  R0 single mask register
#define	FLEXCAN2_RXIMR11		(*(MM32_FLEXCAN2_RXIMR11*)(0x40018000+0x8AC))

//  R0 single mask register
#define	FLEXCAN2_RXIMR12		(*(MM32_FLEXCAN2_RXIMR12*)(0x40018000+0x8B0))

//  R0 single mask register
#define	FLEXCAN2_RXIMR13		(*(MM32_FLEXCAN2_RXIMR13*)(0x40018000+0x8B4))

//  R0 single mask register
#define	FLEXCAN2_RXIMR14		(*(MM32_FLEXCAN2_RXIMR14*)(0x40018000+0x8B8))

//  R0 single mask register
#define	FLEXCAN2_RXIMR15		(*(MM32_FLEXCAN2_RXIMR15*)(0x40018000+0x8BC))


#endif

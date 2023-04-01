/*
 * @Author: IlleniumDillon 147900130@qq.com
 * @Date: 2023-02-28 19:42:07
 * @LastEditors: IlleniumDillon 147900130@qq.com
 * @LastEditTime: 2023-03-04 14:35:24
 * @FilePath: \buildd:\ARMFPGA\MM32F5277_Keil\MM32\MM32_MDSReg.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef _MM32_MDSREG_H_
#define _MM32_MDSREG_H_

#include "MM32_MDSRegdef.h"

//Trigger Channel 1 Control Register
#define	MDS_TRIG1CR		(*(MM32_MDS_TRIG1CR*)(0x4001FC00+0x000))

//Trigger Channel 1 Control Register
#define	MDS_TRIG2CR		(*(MM32_MDS_TRIG2CR*)(0x4001FC00+0x04))

//Trigger Channel 1 Control Register
#define	MDS_TRIG3CR		(*(MM32_MDS_TRIG3CR*)(0x4001FC00+0x08))

//Trigger Channel 1 Control Register
#define	MDS_TRIG4CR		(*(MM32_MDS_TRIG4CR*)(0x4001FC00+0x0C))

//Trigger Channel 1 Control Register
#define	MDS_TRIG5CR		(*(MM32_MDS_TRIG5CR*)(0x4001FC00+0x10))

//Trigger Channel 1 Control Register
#define	MDS_TRIG6CR		(*(MM32_MDS_TRIG6CR*)(0x4001FC00+0x14))

//Trigger Channel 1 Control Register
#define	MDS_TRIG7CR		(*(MM32_MDS_TRIG7CR*)(0x4001FC00+0x18))

//Trigger Channel 1 Control Register
#define	MDS_TRIG8CR		(*(MM32_MDS_TRIG8CR*)(0x4001FC00+0x1C))

//Trigger channel CLU1 logic operation input control register
#define	MDS_TRIG_CLU1SEL		(*(MM32_MDS_TRIG_CLU1SEL*)(0x4001FC00+0x080))

//Trigger channel CLU1 logic operation input control register
#define	MDS_TRIG_CLU2SEL		(*(MM32_MDS_TRIG_CLU2SEL*)(0x4001FC00+0x84))

//Trigger channel CLU1 logic operation input control register
#define	MDS_TRIG_CLU3SEL		(*(MM32_MDS_TRIG_CLU3SEL*)(0x4001FC00+0x88))

//Trigger channel CLU1 logic operation input control register
#define	MDS_TRIG_CLU4SEL		(*(MM32_MDS_TRIG_CLU4SEL*)(0x4001FC00+0x8C))

// Trigger Control Register
#define	MDS_TRIG_CLU1CFG		(*(MM32_MDS_TRIG_CLU1CFG*)(0x4001FC00+0xC0))

// Trigger Control Register
#define	MDS_TRIG_CLU2CFG		(*(MM32_MDS_TRIG_CLU1CFG*)(0x4001FC00+0xC4))

// Trigger Control Register
#define	MDS_TRIG_CLU3CFG		(*(MM32_MDS_TRIG_CLU1CFG*)(0x4001FC00+0xC8))

// Trigger Control Register
#define	MDS_TRIG_CLU4CFG		(*(MM32_MDS_TRIG_CLU1CFG*)(0x4001FC00+0xCC))

//Software Trigger Control Register
#define	MDS_SWTRIG		(*(MM32_MDS_SWTRIG*)(0x4001FC00+0x0FC))

//Connect Channel 1 Control Register
#define	MDS_CONN1CR		(*(MM32_MDS_CONN1CR*)(0x4001FC00+0x100))

//Connect Channel 1 Control Register
#define	MDS_CONN2CR		(*(MM32_MDS_CONN2CR*)(0x4001FC00+0x104))

//Connect Channel 1 Control Register
#define	MDS_CONN3CR		(*(MM32_MDS_CONN3CR*)(0x4001FC00+0x108))

//Connect Channel 1 Control Register
#define	MDS_CONN4CR		(*(MM32_MDS_CONN4CR*)(0x4001FC00+0x10C))

//Connect Channel 1 Control Register
#define	MDS_CONN5CR		(*(MM32_MDS_CONN5CR*)(0x4001FC00+0x110))

//Connect Channel 1 Control Register
#define	MDS_CONN6CR		(*(MM32_MDS_CONN6CR*)(0x4001FC00+0x114))

//Connect Channel 1 Control Register
#define	MDS_CONN7CR		(*(MM32_MDS_CONN7CR*)(0x4001FC00+0x118))

//Connection channel CLU1 logic operation input control register
#define	MDS_CONN_CLU1SEL		(*(MM32_MDS_CONN_CLU1SEL*)(0x4001FC00+0x180))

//Connection channel CLU1 logic operation input control register
#define	MDS_CONN_CLU2SEL		(*(MM32_MDS_CONN_CLU2SEL*)(0x4001FC00+0x184))

//Connection channel CLU1 logic operation input control register
#define	MDS_CONN_CLU3SEL		(*(MM32_MDS_CONN_CLU3SEL*)(0x4001FC00+0x188))

//Connection channel CLU1 logic operation input control register
#define	MDS_CONN_CLU4SEL		(*(MM32_MDS_CONN_CLU4SEL*)(0x4001FC00+0x18C))

//Connection Channel CLU1 Logic Operation Configuration Register
#define	MDS_CONN_CLU1CFG		(*(MM32_MDS_CONN_CLU1CFG*)(0x4001FC00+0x1C0))

//Connection Channel CLU1 Logic Operation Configuration Register
#define	MDS_CONN_CLU2CFG		(*(MM32_MDS_CONN_CLU2CFG*)(0x4001FC00+0x1C4))

//Connection Channel CLU1 Logic Operation Configuration Register
#define	MDS_CONN_CLU3CFG		(*(MM32_MDS_CONN_CLU3CFG*)(0x4001FC00+0x1C8))

//Connection Channel CLU1 Logic Operation Configuration Register
#define	MDS_CONN_CLU4CFG		(*(MM32_MDS_CONN_CLU4CFG*)(0x4001FC00+0x1CC))


#endif

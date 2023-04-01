#ifndef _MM32_MDSREGDEF_H_
#define _MM32_MDSREGDEF_H_

#include "MM32_RegTypedef.h"
//Trigger Channel 1 Control Register
typedef struct
{
	Strict_32Bit TRGSEL			:6;
	Strict_32Bit _reserved_0			:10;
	Strict_32Bit CLUEN			:1;
	Strict_32Bit CLUSEL			:2;
	Strict_32Bit _reserved_1			:5;
	Strict_32Bit EDGESEL			:2;
	Strict_32Bit _reserved_2			:6;
}MM32_MDS_TRIG1CRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_MDS_TRIG1CRBits B;
}MM32_MDS_TRIG1CR;

//Trigger Channel 1 Control Register
typedef struct
{
	Strict_32Bit TRGSEL			:6;
	Strict_32Bit _reserved_0			:10;
	Strict_32Bit CLUEN			:1;
	Strict_32Bit CLUSEL			:2;
	Strict_32Bit _reserved_1			:5;
	Strict_32Bit EDGESEL			:2;
	Strict_32Bit _reserved_2			:6;
}MM32_MDS_TRIG2CRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_MDS_TRIG2CRBits B;
}MM32_MDS_TRIG2CR;

//Trigger Channel 1 Control Register
typedef struct
{
	Strict_32Bit TRGSEL			:6;
	Strict_32Bit _reserved_0			:10;
	Strict_32Bit CLUEN			:1;
	Strict_32Bit CLUSEL			:2;
	Strict_32Bit _reserved_1			:5;
	Strict_32Bit EDGESEL			:2;
	Strict_32Bit _reserved_2			:6;
}MM32_MDS_TRIG3CRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_MDS_TRIG3CRBits B;
}MM32_MDS_TRIG3CR;

//Trigger Channel 1 Control Register
typedef struct
{
	Strict_32Bit TRGSEL			:6;
	Strict_32Bit _reserved_0			:10;
	Strict_32Bit CLUEN			:1;
	Strict_32Bit CLUSEL			:2;
	Strict_32Bit _reserved_1			:5;
	Strict_32Bit EDGESEL			:2;
	Strict_32Bit _reserved_2			:6;
}MM32_MDS_TRIG4CRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_MDS_TRIG4CRBits B;
}MM32_MDS_TRIG4CR;

//Trigger Channel 1 Control Register
typedef struct
{
	Strict_32Bit TRGSEL			:6;
	Strict_32Bit _reserved_0			:10;
	Strict_32Bit CLUEN			:1;
	Strict_32Bit CLUSEL			:2;
	Strict_32Bit _reserved_1			:5;
	Strict_32Bit EDGESEL			:2;
	Strict_32Bit _reserved_2			:6;
}MM32_MDS_TRIG5CRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_MDS_TRIG5CRBits B;
}MM32_MDS_TRIG5CR;

//Trigger Channel 1 Control Register
typedef struct
{
	Strict_32Bit TRGSEL			:6;
	Strict_32Bit _reserved_0			:10;
	Strict_32Bit CLUEN			:1;
	Strict_32Bit CLUSEL			:2;
	Strict_32Bit _reserved_1			:5;
	Strict_32Bit EDGESEL			:2;
	Strict_32Bit _reserved_2			:6;
}MM32_MDS_TRIG6CRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_MDS_TRIG6CRBits B;
}MM32_MDS_TRIG6CR;

//Trigger Channel 1 Control Register
typedef struct
{
	Strict_32Bit TRGSEL			:6;
	Strict_32Bit _reserved_0			:10;
	Strict_32Bit CLUEN			:1;
	Strict_32Bit CLUSEL			:2;
	Strict_32Bit _reserved_1			:5;
	Strict_32Bit EDGESEL			:2;
	Strict_32Bit _reserved_2			:6;
}MM32_MDS_TRIG7CRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_MDS_TRIG7CRBits B;
}MM32_MDS_TRIG7CR;

//Trigger Channel 1 Control Register
typedef struct
{
	Strict_32Bit TRGSEL			:6;
	Strict_32Bit _reserved_0			:10;
	Strict_32Bit CLUEN			:1;
	Strict_32Bit CLUSEL			:2;
	Strict_32Bit _reserved_1			:5;
	Strict_32Bit EDGESEL			:2;
	Strict_32Bit _reserved_2			:6;
}MM32_MDS_TRIG8CRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_MDS_TRIG8CRBits B;
}MM32_MDS_TRIG8CR;

//Trigger channel CLU1 logic operation input control register
typedef struct
{
	Strict_32Bit CLUIN0_SEL			:8;
	Strict_32Bit CLUIN1_SEL			:8;
	Strict_32Bit CLUIN2_SEL			:8;
	Strict_32Bit CLUIN3_SEL			:8;
}MM32_MDS_TRIG_CLU1SELBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_MDS_TRIG_CLU1SELBits B;
}MM32_MDS_TRIG_CLU1SEL;

//Trigger channel CLU1 logic operation input control register
typedef struct
{
	Strict_32Bit CLUIN0_SEL			:8;
	Strict_32Bit CLUIN1_SEL			:8;
	Strict_32Bit CLUIN2_SEL			:8;
	Strict_32Bit CLUIN3_SEL			:8;
}MM32_MDS_TRIG_CLU2SELBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_MDS_TRIG_CLU2SELBits B;
}MM32_MDS_TRIG_CLU2SEL;

//Trigger channel CLU1 logic operation input control register
typedef struct
{
	Strict_32Bit CLUIN0_SEL			:8;
	Strict_32Bit CLUIN1_SEL			:8;
	Strict_32Bit CLUIN2_SEL			:8;
	Strict_32Bit CLUIN3_SEL			:8;
}MM32_MDS_TRIG_CLU3SELBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_MDS_TRIG_CLU3SELBits B;
}MM32_MDS_TRIG_CLU3SEL;

//Trigger channel CLU1 logic operation input control register
typedef struct
{
	Strict_32Bit CLUIN0_SEL			:8;
	Strict_32Bit CLUIN1_SEL			:8;
	Strict_32Bit CLUIN2_SEL			:8;
	Strict_32Bit CLUIN3_SEL			:8;
}MM32_MDS_TRIG_CLU4SELBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_MDS_TRIG_CLU4SELBits B;
}MM32_MDS_TRIG_CLU4SEL;

// Trigger Control Register
typedef struct
{
	Strict_32Bit CLUIN0_ED			:2;
	Strict_32Bit _reserved_0			:6;
	Strict_32Bit CLUIN1_ED			:2;
	Strict_32Bit _reserved_1			:6;
	Strict_32Bit CLUIN2_ED			:2;
	Strict_32Bit _reserved_2			:6;
	Strict_32Bit CLUIN3_ED			:2;
	Strict_32Bit _reserved_3			:6;
}MM32_MDS_TRIG_CLU1CFGBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_MDS_TRIG_CLU1CFGBits B;
}MM32_MDS_TRIG_CLU1CFG;

//Software Trigger Control Register
typedef struct
{
	Strict_32Bit SW_TRIG			:1;
	Strict_32Bit _reserved_0			:31;
}MM32_MDS_SWTRIGBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_MDS_SWTRIGBits B;
}MM32_MDS_SWTRIG;

//Connect Channel 1 Control Register
typedef struct
{
	Strict_32Bit TRGSEL			:6;
	Strict_32Bit _reserved_0			:10;
	Strict_32Bit CLUEN			:1;
	Strict_32Bit CLUSEL			:2;
	Strict_32Bit _reserved_1			:13;
}MM32_MDS_CONN1CRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_MDS_CONN1CRBits B;
}MM32_MDS_CONN1CR;

//Connect Channel 1 Control Register
typedef struct
{
	Strict_32Bit TRGSEL			:6;
	Strict_32Bit _reserved_0			:10;
	Strict_32Bit CLUEN			:1;
	Strict_32Bit CLUSEL			:2;
	Strict_32Bit _reserved_1			:13;
}MM32_MDS_CONN2CRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_MDS_CONN2CRBits B;
}MM32_MDS_CONN2CR;

//Connect Channel 1 Control Register
typedef struct
{
	Strict_32Bit TRGSEL			:6;
	Strict_32Bit _reserved_0			:10;
	Strict_32Bit CLUEN			:1;
	Strict_32Bit CLUSEL			:2;
	Strict_32Bit _reserved_1			:13;
}MM32_MDS_CONN3CRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_MDS_CONN3CRBits B;
}MM32_MDS_CONN3CR;

//Connect Channel 1 Control Register
typedef struct
{
	Strict_32Bit TRGSEL			:6;
	Strict_32Bit _reserved_0			:10;
	Strict_32Bit CLUEN			:1;
	Strict_32Bit CLUSEL			:2;
	Strict_32Bit _reserved_1			:13;
}MM32_MDS_CONN4CRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_MDS_CONN4CRBits B;
}MM32_MDS_CONN4CR;

//Connect Channel 1 Control Register
typedef struct
{
	Strict_32Bit TRGSEL			:6;
	Strict_32Bit _reserved_0			:10;
	Strict_32Bit CLUEN			:1;
	Strict_32Bit CLUSEL			:2;
	Strict_32Bit _reserved_1			:13;
}MM32_MDS_CONN5CRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_MDS_CONN5CRBits B;
}MM32_MDS_CONN5CR;

//Connect Channel 1 Control Register
typedef struct
{
	Strict_32Bit TRGSEL			:6;
	Strict_32Bit _reserved_0			:10;
	Strict_32Bit CLUEN			:1;
	Strict_32Bit CLUSEL			:2;
	Strict_32Bit _reserved_1			:13;
}MM32_MDS_CONN6CRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_MDS_CONN6CRBits B;
}MM32_MDS_CONN6CR;

//Connect Channel 1 Control Register
typedef struct
{
	Strict_32Bit TRGSEL			:6;
	Strict_32Bit _reserved_0			:10;
	Strict_32Bit CLUEN			:1;
	Strict_32Bit CLUSEL			:2;
	Strict_32Bit _reserved_1			:13;
}MM32_MDS_CONN7CRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_MDS_CONN7CRBits B;
}MM32_MDS_CONN7CR;

//Connection channel CLU1 logic operation input control register
typedef struct
{
	Strict_32Bit CLUIN0_SEL			:8;
	Strict_32Bit CLUIN1_SEL			:8;
	Strict_32Bit CLUIN2_SEL			:8;
	Strict_32Bit CLUIN3_SEL			:8;
}MM32_MDS_CONN_CLU1SELBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_MDS_CONN_CLU1SELBits B;
}MM32_MDS_CONN_CLU1SEL;

//Connection channel CLU1 logic operation input control register
typedef struct
{
	Strict_32Bit CLUIN0_SEL			:8;
	Strict_32Bit CLUIN1_SEL			:8;
	Strict_32Bit CLUIN2_SEL			:8;
	Strict_32Bit CLUIN3_SEL			:8;
}MM32_MDS_CONN_CLU2SELBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_MDS_CONN_CLU2SELBits B;
}MM32_MDS_CONN_CLU2SEL;

//Connection channel CLU1 logic operation input control register
typedef struct
{
	Strict_32Bit CLUIN0_SEL			:8;
	Strict_32Bit CLUIN1_SEL			:8;
	Strict_32Bit CLUIN2_SEL			:8;
	Strict_32Bit CLUIN3_SEL			:8;
}MM32_MDS_CONN_CLU3SELBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_MDS_CONN_CLU3SELBits B;
}MM32_MDS_CONN_CLU3SEL;

//Connection channel CLU1 logic operation input control register
typedef struct
{
	Strict_32Bit CLUIN0_SEL			:8;
	Strict_32Bit CLUIN1_SEL			:8;
	Strict_32Bit CLUIN2_SEL			:8;
	Strict_32Bit CLUIN3_SEL			:8;
}MM32_MDS_CONN_CLU4SELBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_MDS_CONN_CLU4SELBits B;
}MM32_MDS_CONN_CLU4SEL;

//Connection Channel CLU1 Logic Operation Configuration Register
typedef struct
{
	Strict_32Bit CLMODE			:2;
	Strict_32Bit _reserved_0			:6;
	Strict_32Bit INV0			:1;
	Strict_32Bit INV1			:1;
	Strict_32Bit INV2			:1;
	Strict_32Bit INV3			:1;
	Strict_32Bit _reserved_1			:20;
}MM32_MDS_CONN_CLU1CFGBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_MDS_CONN_CLU1CFGBits B;
}MM32_MDS_CONN_CLU1CFG;

//Connection Channel CLU1 Logic Operation Configuration Register
typedef struct
{
	Strict_32Bit CLMODE			:2;
	Strict_32Bit _reserved_0			:6;
	Strict_32Bit INV0			:1;
	Strict_32Bit INV1			:1;
	Strict_32Bit INV2			:1;
	Strict_32Bit INV3			:1;
	Strict_32Bit _reserved_1			:20;
}MM32_MDS_CONN_CLU2CFGBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_MDS_CONN_CLU2CFGBits B;
}MM32_MDS_CONN_CLU2CFG;

//Connection Channel CLU1 Logic Operation Configuration Register
typedef struct
{
	Strict_32Bit CLMODE			:2;
	Strict_32Bit _reserved_0			:6;
	Strict_32Bit INV0			:1;
	Strict_32Bit INV1			:1;
	Strict_32Bit INV2			:1;
	Strict_32Bit INV3			:1;
	Strict_32Bit _reserved_1			:20;
}MM32_MDS_CONN_CLU3CFGBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_MDS_CONN_CLU3CFGBits B;
}MM32_MDS_CONN_CLU3CFG;

//Connection Channel CLU1 Logic Operation Configuration Register
typedef struct
{
	Strict_32Bit CLMODE			:2;
	Strict_32Bit _reserved_0			:6;
	Strict_32Bit INV0			:1;
	Strict_32Bit INV1			:1;
	Strict_32Bit INV2			:1;
	Strict_32Bit INV3			:1;
	Strict_32Bit _reserved_1			:20;
}MM32_MDS_CONN_CLU4CFGBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_MDS_CONN_CLU4CFGBits B;
}MM32_MDS_CONN_CLU4CFG;


#endif

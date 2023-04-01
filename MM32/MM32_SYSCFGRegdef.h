#ifndef _MM32_SYSCFGREGDEF_H_
#define _MM32_SYSCFGREGDEF_H_

#include "MM32_RegTypedef.h"
//SYSCFG Configuration Register
typedef struct
{
	Strict_32Bit USBFSVBUSOWDIS			:1;
	Strict_32Bit USBFSIDOWDIS			:1;
	Strict_32Bit USBFSVBUSORV			:1;
	Strict_32Bit USBFSIDORV			:1;
	Strict_32Bit _reserved_0			:12;
	Strict_32Bit CAN1_SPV			:1;
	Strict_32Bit CAN1_TEST			:1;
	Strict_32Bit CAN1_STOP			:1;
	Strict_32Bit CAN2_SPV			:1;
	Strict_32Bit FCAN2_TEST			:1;
	Strict_32Bit CAN2_STOP			:1;
	Strict_32Bit _reserved_1			:6;
	Strict_32Bit FC_ODATAEN			:1;
	Strict_32Bit FCMODESEL			:2;
	Strict_32Bit _reserved_2			:1;
}MM32_SYSCFG_CFGR1Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_SYSCFG_CFGR1Bits B;
}MM32_SYSCFG_CFGR1;

//External Interrupt Configuration Register 1
typedef struct
{
	Strict_32Bit EXTIx			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_SYSCFG_EXTICR1Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_SYSCFG_EXTICR1Bits B;
}MM32_SYSCFG_EXTICR1;

//External Interrupt Configuration Register 2
typedef struct
{
	Strict_32Bit EXTIx			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_SYSCFG_EXTICR2Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_SYSCFG_EXTICR2Bits B;
}MM32_SYSCFG_EXTICR2;

//External Interrupt Configuration Register 3
typedef struct
{
	Strict_32Bit EXTIx			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_SYSCFG_EXTICR3Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_SYSCFG_EXTICR3Bits B;
}MM32_SYSCFG_EXTICR3;

//External Interrupt Configuration Register 4
typedef struct
{
	Strict_32Bit EXTIx			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_SYSCFG_EXTICR4Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_SYSCFG_EXTICR4Bits B;
}MM32_SYSCFG_EXTICR4;

//SYSCFG Configuration Register 2
typedef struct
{
	Strict_32Bit _reserved_0			:16;
	Strict_32Bit I2C1_MODE_SEL			:1;
	Strict_32Bit I2C2_MODE_SEL			:1;
	Strict_32Bit _reserved_1			:2;
	Strict_32Bit ENETMIIRMIISE			:1;
	Strict_32Bit ENETSPDSEL			:1;
	Strict_32Bit _reserved_2			:3;
	Strict_32Bit QSPI_AUTOIDLE_EN			:1;
	Strict_32Bit _reserved_3			:6;
}MM32_SYSCFG_CFGR2Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_SYSCFG_CFGR2Bits B;
}MM32_SYSCFG_CFGR2;

//Power Detect Configuration Status Register
typedef struct
{
	Strict_32Bit PVDE			:1;
	Strict_32Bit PLS			:4;
	Strict_32Bit PVDO			:1;
	Strict_32Bit VDTO			:1;
	Strict_32Bit _reserved_0			:1;
	Strict_32Bit VDTE			:1;
	Strict_32Bit VDTLS			:2;
	Strict_32Bit VBAT_DIV3_EN			:1;
	Strict_32Bit _reserved_1			:20;
}MM32_SYSCFG_PDETCSRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_SYSCFG_PDETCSRBits B;
}MM32_SYSCFG_PDETCSR;

//VOSDLY configuration register
typedef struct
{
	Strict_32Bit VOSDLY_CNT			:10;
	Strict_32Bit _reserved_0			:22;
}MM32_SYSCFG_VOSDLYBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_SYSCFG_VOSDLYBits B;
}MM32_SYSCFG_VOSDLY;

//DAM remap register
typedef struct
{
	Strict_32Bit TIM1_TRIG_RMP			:1;
	Strict_32Bit TIM1_COM_RMP			:1;
	Strict_32Bit TIM2_UP_RMP			:2;
	Strict_32Bit TIM2_CC3_RMP			:1;
	Strict_32Bit TIM2_CC4_RMP			:1;
	Strict_32Bit _reserved_0			:2;
	Strict_32Bit TIM5_UP_RMP			:1;
	Strict_32Bit _reserved_1			:1;
	Strict_32Bit TIM6_UP_RMP			:1;
	Strict_32Bit _reserved_2			:1;
	Strict_32Bit TIM7_UP_RMP			:1;
	Strict_32Bit TIM8_TRIG_RMP			:1;
	Strict_32Bit TIM8_UP_RMP			:1;
	Strict_32Bit TIM8_COM_RMP			:1;
	Strict_32Bit UART4_RX_RMP			:1;
	Strict_32Bit UART4_TX_RMP			:1;
	Strict_32Bit _reserved_3			:2;
	Strict_32Bit UART6_RX_RMP			:1;
	Strict_32Bit UART6_TX_RMP			:1;
	Strict_32Bit UART7_RX_TMP			:1;
	Strict_32Bit UART7_TX_RMP			:1;
	Strict_32Bit _reserved_4			:4;
	Strict_32Bit DAC_CH1_RMP			:1;
	Strict_32Bit DAC_CH2_RMP			:1;
	Strict_32Bit _reserved_5			:2;
}MM32_SYSCFG_DMARMPBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_SYSCFG_DMARMPBits B;
}MM32_SYSCFG_DMARMP;

//Bus Priority Configuration Register
typedef struct
{
	Strict_32Bit PRI_M1			:3;
	Strict_32Bit PRI_M2			:3;
	Strict_32Bit PRI_M3			:3;
	Strict_32Bit PRI_M4			:3;
	Strict_32Bit PRI_M5			:3;
	Strict_32Bit PRI_M6			:3;
	Strict_32Bit _reserved_0			:14;
}MM32_SYSCFG_BUS_PRIBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_SYSCFG_BUS_PRIBits B;
}MM32_SYSCFG_BUS_PRI;


#endif

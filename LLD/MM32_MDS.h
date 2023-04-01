#ifndef _MM32_MDS_H_
#define _MM32_MDS_H_

#include <MM32_Registers.h>
#include <MM32_MDS_PinMap.h>

#define MDS_CLU_IN_LEN 4u

typedef enum
{
    MDS_TRIGGER_IN_LOGIC_0  =  0u,
    MDS_TRIGGER_IN_LOGIC_1  =  1u,
    MDS_TRIGGER_IN_SW       =  2u,
    MDS_TRIGGER_IN_TIM1_CC1 =  3u,
    MDS_TRIGGER_IN_TIM1_CC2 =  4u,
    MDS_TRIGGER_IN_TIM1_CC3 =  5u,
    MDS_TRIGGER_IN_TIM1_CC4 =  6u,
    MDS_TRIGGER_IN_TIM1_CC5 =  7u,
    MDS_TRIGGER_IN_TIM2_CC1 =  8u,
    MDS_TRIGGER_IN_TIM2_CC2 =  9u,
    MDS_TRIGGER_IN_TIM2_CC3 =  10u,
    MDS_TRIGGER_IN_TIM2_CC4 =  11u,
    MDS_TRIGGER_IN_TIM3_CC1 =  12u,
    MDS_TRIGGER_IN_TIM3_CC2 =  13u,
    MDS_TRIGGER_IN_TIM3_CC3 =  14u,
    MDS_TRIGGER_IN_TIM3_CC4 =  15u,
    MDS_TRIGGER_IN_TIM4_CC1 =  16u,
    MDS_TRIGGER_IN_TIM4_CC2 =  17u,
    MDS_TRIGGER_IN_TIM4_CC3 =  18u,
    MDS_TRIGGER_IN_TIM4_CC4 =  19u,
    MDS_TRIGGER_IN_TIM5_CC1 =  20u,
    MDS_TRIGGER_IN_TIM5_CC2 =  21u,
    MDS_TRIGGER_IN_TIM5_CC3 =  22u,
    MDS_TRIGGER_IN_TIM5_CC4 =  23u,
    MDS_TRIGGER_IN_TIM8_CC1 =  24u,
    MDS_TRIGGER_IN_TIM8_CC2 =  25u,
    MDS_TRIGGER_IN_TIM8_CC3 =  26u,
    MDS_TRIGGER_IN_TIM8_CC4 =  27u,
    MDS_TRIGGER_IN_TIM8_CC5 =  28u,
    MDS_TRIGGER_IN_TIM1_OUT =  29u,
    MDS_TRIGGER_IN_TIM2_OUT =  30u,
    MDS_TRIGGER_IN_TIM3_OUT =  31u,
    MDS_TRIGGER_IN_TIM4_OUT =  32u,
    MDS_TRIGGER_IN_TIM5_OUT =  33u,
    MDS_TRIGGER_IN_TIM8_OUT =  36u,
    MDS_TRIGGER_IN_EXTI0    =  37u,
    MDS_TRIGGER_IN_EXTI1    =  38u,
    MDS_TRIGGER_IN_EXTI2    =  39u,
    MDS_TRIGGER_IN_EXTI3    =  40u,
    MDS_TRIGGER_IN_EXTI4    =  41u,
    MDS_TRIGGER_IN_EXTI5    =  42u,
    MDS_TRIGGER_IN_EXTI6    =  43u,
    MDS_TRIGGER_IN_EXTI7    =  44u,
    MDS_TRIGGER_IN_EXTI8    =  45u,
    MDS_TRIGGER_IN_EXTI9    =  46u,
    MDS_TRIGGER_IN_EXTI10   =  47u,
    MDS_TRIGGER_IN_EXTI11   =  48u,
    MDS_TRIGGER_IN_EXTI12   =  49u,
    MDS_TRIGGER_IN_EXTI13   =  50u,
    MDS_TRIGGER_IN_EXTI14   =  51u,
    MDS_TRIGGER_IN_EXTI15   =  52u,
    MDS_TRIGGER_IN_CLU0     =  (0u << 17u),
    MDS_TRIGGER_IN_CLU1     =  (1u << 17u),
    MDS_TRIGGER_IN_CLU2     =  (2u << 17u),
    MDS_TRIGGER_IN_CLU3     =  (3u << 17u),
}MM32_MDS_TiggerSource;

typedef enum
{
    MDS_TRIGGER_RISING = 0,
    MDS_TRIGGER_FALLING = 1,
    MDS_TRIGGER_BOTH = 2
}MM32_MDS_TriggerMode;

typedef enum
{
    MDS_TRIGGER_OUT_ADC1_EXT_TRIGGER = 0,
    MDS_TRIGGER_OUT_ADC1_INJECT_EXT_TRIGGER = 1,
    MDS_TRIGGER_OUT_ADC2_EXT_TRIGGER = 2,
    MDS_TRIGGER_OUT_ADC2_INJECT_EXT_TRIGGER = 3,
    MDS_TRIGGER_OUT_DAC1_EXT_TRIGGER = 6,
    MDS_TRIGGER_OUT_DAC2_EXT_TRIGGER = 7,
}MM32_MDS_TriggerChannel;

typedef enum
{
    MDS_CONN_IN_LOGIC_0         =     0u,
    MDS_CONN_IN_LOGIC_1         =     1u,
    MDS_CONN_IN_TIM1_CH1_OUT    =     2u,
    MDS_CONN_IN_TIM1_CH1N_OUT   =     3u,
    MDS_CONN_IN_TIM1_CH2_OUT    =     4u,
    MDS_CONN_IN_TIM1_CH2N_OUT   =     5u,
    MDS_CONN_IN_TIM1_CH3_OUT    =     6u,
    MDS_CONN_IN_TIM1_CH3N_OUT   =     7u,
    MDS_CONN_IN_TIM1_CH4_OUT    =     8u,
    MDS_CONN_IN_TIM1_CH4N_OUT   =     9u,
    MDS_CONN_IN_TIM2_CH1_OUT    =     10u,
    MDS_CONN_IN_TIM2_CH2_OUT    =     11u,
    MDS_CONN_IN_TIM2_CH3_OUT    =     12u,
    MDS_CONN_IN_TIM2_CH4_OUT    =     13u,
    MDS_CONN_IN_TIM3_CH4_OUT    =     14u,
    MDS_CONN_IN_TIM4_CH4_OUT    =     15u,
    MDS_CONN_IN_TIM5_CH4_OUT    =     16u,
    MDS_CONN_IN_TIM8_CH4_OUT    =     17u,
    MDS_CONN_IN_MDS_IN0         =     18u,
    MDS_CONN_IN_MDS_IN1         =     19u,
    MDS_CONN_IN_MDS_IN2         =     20u,
    MDS_CONN_IN_MDS_IN3         =     21u,
    MDS_CONN_IN_CLU0            =     (0u << 17u),
    MDS_CONN_IN_CLU1            =     (1u << 17u),
    MDS_CONN_IN_CLU2            =     (2u << 17u),
    MDS_CONN_IN_CLU3            =     (3u << 17u),
}MM32_MDS_ConnectSource;

typedef enum
{
    MDS_CONN_OUT_COMP1_BLANK    =   0u,
    MDS_CONN_OUT_COMP2_BLANK    =   1u,
    MDS_CONN_OUT_COMP3_BLANK    =   2u,
    MDS_CONN_OUT_MDS_OUT0       =  3u,
    MDS_CONN_OUT_MDS_OUT1       =  4u,
    MDS_CONN_OUT_MDS_OUT2       =  5u,
    MDS_CONN_OUT_MDS_OUT3       =  6u,
}MM32_MDS_ConnectChannel;

typedef enum
{
    MDS_CLU_0 = 0,
    MDS_CLU_1 = 1,
    MDS_CLU_2 = 2,
    MDS_CLU_3 = 3
}MM32_MDS_CLUChannel;

typedef enum
{
    MDS_CLU_OROR = 0,
    MDS_CLU_ANDOR = 1,
    MDS_CLU_ORXOR = 2,
    MDS_CLU_ANDAND = 3
}MM32_MDS_CLUMode;

#define	MDS_TRIGxCR(x)		(*(MM32_MDS_TRIG1CR*)(0x4001FC00+0x004 * x))
#define	MDS_TRIG_CLUxSEL(x)		(*(MM32_MDS_TRIG_CLU1SEL*)(0x4001FC00+0x080 + 0x004*x))
#define	MDS_TRIG_CLUxCFG(x)		(*(MM32_MDS_TRIG_CLU1CFG*)(0x4001FC00+0xC0 + 0x04*x))
#define	MDS_CONNxCR(x)		(*(MM32_MDS_CONN1CR*)(0x4001FC00+0x100+0x004*x))
#define	MDS_CONN_CLUxSEL(x)		(*(MM32_MDS_CONN_CLU1SEL*)(0x4001FC00+0x180+0x04*x))
#define	MDS_CONN_CLUxCFG(x)		(*(MM32_MDS_CONN_CLU1CFG*)(0x4001FC00+0x1C0+0x04*x))

void MM32_MDS_TriggerConfig(MM32_MDS_TriggerChannel ch, MM32_MDS_TriggerMode mode, MM32_MDS_TiggerSource source);

void MM32_MDS_ConnectConfig(MM32_MDS_ConnectChannel ch, MM32_MDS_ConnectSource source);

void MM32_MDS_SoftTrigger(void);

void MM32_MDS_TriggerCLUConfig(MM32_MDS_CLUChannel ch, MM32_MDS_TiggerSource source[4], MM32_MDS_TriggerMode mode[4], MM32_MDS_TriggerChannel out);

void MM32_MDS_ConnectCLUConfig(MM32_MDS_CLUChannel ch, MM32_MDS_CLUMode mode, MM32_MDS_ConnectSource source[4], uint8_t inv[4], MM32_MDS_ConnectChannel out);

#endif
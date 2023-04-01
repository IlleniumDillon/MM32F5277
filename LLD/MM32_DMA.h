#ifndef _MM32_DMA_H_
#define _MM32_DMA_H_

#include <MM32_Registers.h>
#include <common.h>

typedef enum
{
    DMA1 = 0x40020000,
    DMA2 = 0x40020400,
}MM32_DMA_Moudle;

#define DMA1_CH1_ADC1   (1)
#define DMA1_CH1_UART6_RX   (1)
#define DMA1_CH1_TIM2_CC3   (1)
#define DMA1_CH1_TIM4_CC1   (1)

#define DMA1_CH2_ADC2   (2)
#define DMA1_CH2_SPI1_RX    (2)
#define DMA1_CH2_UART3_TX   (2)
#define DMA1_CH2_TIM1_CC1   (2)
#define DMA1_CH2_TIM2_UP    (2)
#define DMA1_CH2_TIM3_CC3   (2)

#define DMA1_CH3_SPI1_TX    (3)
#define DMA1_CH3_UART3_RX   (3)
#define DMA1_CH3_TIM1_CC2   (3)
#define DMA1_CH3_TIM2_UP_TIM2_CC3   (3)
#define DMA1_CH3_TIM3_CC4_TIM3_UP   (3)

#define DMA1_CH4_SPI2_RX    (4)
#define DMA1_CH4_UART1_TX   (4)
#define DMA1_CH4_I2C2_TX    (4)
#define DMA1_CH4_TIM1_CC4_TIM1_TRIG_TIM1_COM    (4)
#define DMA1_CH4_TIM4_CC2   (4)

#define DMA1_CH5_SPI2_TX    (5)
#define DMA1_CH5_UART1_RX   (5)
#define DMA1_CH5_I2C2_RX    (5)
#define DMA1_CH5_TIM1_UP    (5)
#define DMA1_CH5_TIM2_CC1   (5)
#define DMA1_CH5_TIM4_CC3   (5)

#define DMA1_CH6_UART2_RX   (6)
#define DMA1_CH6_I2C1_TX    (6)
#define DMA1_CH6_TIM1_CC3   (6)
#define DMA1_CH6_TIM3_CC1_TIM3_TRIG (6)

#define DMA1_CH7_UART2_TX   (7)
#define DMA1_CH7_I2C1_RX    (7)
#define DMA1_CH7_TIM1_TRIG  (7)
#define DMA1_CH7_TIM2_CC2_TIM2_CC4  (7)
#define DMA1_CH7_TIM4_UP    (7)

#define DMA1_CH8_UART6_TX   (8)
#define DMA1_CH8_TIM1_COM   (8)
#define DMA1_CH8_TIM2_UP_TIM2_CC4   (8)
#define DMA1_CH8_TIM3_CC2   (8)
#define DMA1_CH8_TIM4_CC4   (8)
#define DMA1_CH8_FlexCAN1_RX    (8)

#define DMA2_CH1_SPI3_RX    (1)
#define DMA2_CH1_UART5_RX_UART7_RX  (1)
#define DMA2_CH1_TIM5_CC4_TIM5_TRIG (1)
#define DMA2_CH1_TIM8_CC3_TIM8_UP   (1)

#define DMA2_CH2_SPI3_TX    (2)
#define DMA2_CH2_UART5_TX_UART7_TX  (2)
#define DMA2_CH2_TIM5_CC3_TIM5_UP   (2)
#define DMA2_CH2_TIM8_CC4_TIM8_TRIG_TIM8_COM    (2)

#define DMA2_CH3_UART4_RX   (3)
#define DMA2_CH3_TIM6_UP_DAC_CH1    (3)
#define DMA2_CH3_TIM8_CC1   (3)

#define DMA2_CH4_UART6_TX_LPUART_TX (4)
#define DMA2_CH4_TIM5_CC2   (4)
#define DMA2_CH4_TIM7_UP_DAC_CH2    (4)

#define DMA2_CH5_UART4_TX   (5)
#define DMA2_CH5_TIM5_CC1   (5)
#define DMA2_CH5_TIM8_CC2   (5)

#define DMA2_CH6_UART6_RX_LPUART_RX (6)
#define DMA2_CH6_TIM5_UP    (6)
#define DMA2_CH6_TIM6_UP    (6)
#define DMA2_CH6_TIM7_UP    (6)
#define DMA2_CH6_TIM8_UP    (6)
#define DMA2_CH6_FlexCAN2_RX    (6)

#define DMA2_CH7_UART7_RX_UART4_RX  (7)
#define DMA2_CH7_DAC_CH1    (7)
#define DMA2_CH7_DAC_CH2    (7)
#define DMA2_CH7_TIM8_TRIG  (7)

#define DMA2_CH8_UART7_TX_UART4_TX  (8)
#define DMA2_CH8_TIM8_COM   (8)
#define DMA2_CH8_QSPI   (8)

#define DMAx_ISR(x)         (*(MM32_DMA1_ISR*)(x+0x00))
#define DMAx_IFCR(x)        (*(MM32_DMA1_IFCR*)(x+0x04))
#define DMAx_CCRy(x,y)      (*(MM32_DMA1_CCR1*)(x+0x08+20*(y-1)))
#define DMAx_CNDTRy(x,y)    (*(MM32_DMA1_CNDTR1*)(x+0x0C+20*(y-1)))
#define DMAx_CPARy(x,y)     (*(MM32_DMA1_CPAR1*)(x+0x10+20*(y-1)))
#define DMAx_CMARy(x,y)     (*(MM32_DMA1_CMAR1*)(x+0x14+20*(y-1)))

typedef struct
{
    uint8_t enableTCI;
    uint8_t enableHTI;
    uint8_t enableTEI;
    uint8_t dir;
    uint8_t circ;
    uint8_t pinc;
    uint8_t minc;
    uint8_t psize;
    uint8_t msize;
    uint8_t pl;
    uint8_t mem2mem;
    uint8_t are;
    uint8_t bursten;
}MM32_DMA_ChannelConfig;

void MM32_DMA_ChannelInit(MM32_DMA_Moudle moudle, uint8_t ch,MM32_DMA_ChannelConfig* config);

void MM32_DMA_ConfigXfer(MM32_DMA_Moudle moudle, uint8_t ch, void* pAddress, void* mAddress, uint16_t count);

void MM32_DMA_StartChannel(MM32_DMA_Moudle moudle, uint8_t ch);

void MM32_DMA_StopChannel(MM32_DMA_Moudle moudle, uint8_t ch);

#endif
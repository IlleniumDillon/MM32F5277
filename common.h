#ifndef _COMMON_H_
#define _COMMON_H_

#define NUMBER_OF_INT_VECTORS 76                 /**< Number of interrupts in the Vector table */

typedef enum IRQ {
  Reset_IRQn                            = -15,                                   /*!< reset */
  NMI_IRQn                              = -14,                                   /*!< Non-Maskable Interrupt/RCC Clock Security System (CSS) connected to NMI vector */
  HardFault_IRQn                        = -13,                                   /*!< All types of failures */
  MemManage_IRQn                        = -12,                                   /*!< memory management */
  BusFault_IRQn                         = -11,                                   /*!< Prefetch failed, memory access failed */
  UsageFault_IRQn                       = -10,                                   /*!< undefined instruction or illegal status */
  SVCall_IRQn                           = -5,                                    /*!< System service calls via SWI instructions */
  DebugMonitor_IRQn                     = -4,                                    /*!< debug monitor */
  PendSV_IRQn                           = -2,                                    /*!< Suspendable system services */
  SysTick_IRQn                          = -1,                                    /*!< System tick timer */
  WWDG_IWDG_IRQn                        = 0,                                     /*!< Watchdog interrupt (IWDG is EXTI21) */
  PVD_IRQn                              = 1,                                     /*!< Supply Voltage Detect (PVD) Interrupt (EXTI16) */
  BKP_TAMPER_IRQn                       = 2,                                     /*!< BKP intrusion detection interrupted */
  RTC_IRQn                              = 3,                                     /*!< RTC global interrupt */
  FLASH_IRQn                            = 4,                                     /*!< Flash Global Interrupt */
  RCC_CRS_IRQn                          = 5,                                     /*!< RCC and CRS global interrupt */
  EXTI0_IRQn                            = 6,                                     /*!< EXTI line 0 interrupt */
  EXTI1_IRQn                            = 7,                                     /*!< EXTI line 1 interrupt */
  EXTI2_IRQn                            = 8,                                     /*!< EXTI line 2 interrupt */
  EXTI3_IRQn                            = 9,                                     /*!< EXTI line 3 interrupt */
  EXTI4_IRQn                            = 10,                                    /*!< EXTI line 4 interrupt */
  DMA1_CH1_IRQn                         = 11,                                    /*!< DMA1 channel 1 global interrupt */
  DMA1_CH2_IRQn                         = 12,                                    /*!< DMA1 channel 2 global interrupt */
  DMA1_CH3_IRQn                         = 13,                                    /*!< DMA1 channel 3 global interrupt */
  DMA1_CH4_IRQn                         = 14,                                    /*!< DMA1 channel 4 global interrupt */
  DMA1_CH5_IRQn                         = 15,                                    /*!< DMA1 channel 5 global interrupt */
  DMA1_CH6_IRQn                         = 16,                                    /*!< DMA1 channel 6 global interrupt */
  DMA1_CH7_IRQn                         = 17,                                    /*!< DMA1 channel 7 global interrupt */
  ADC1_2_IRQn                           = 18,                                    /*!< ADC1/2 global interrupt */
  DMA1_CH8_IRQn                         = 20,                                    /*!< DMA1 channel 8 global interrupt */
  FlexCAN1_IRQn                         = 21,                                    /*!< FlexCAN1 global interrupt */
  EXTI9_5_IRQn                          = 23,                                    /*!< EXTI line[9:5] interrupt */
  TIM1_BRK_IRQn                         = 24,                                    /*!< TIM1 brake interrupt */
  TIM1_UP_IRQn                          = 25,                                    /*!< TIM1 update interrupted */
  TIM1_TRG_COM_IRQn                     = 26,                                    /*!< TIM1 trigger/COM interrupt */
  TIM1_CC_IRQn                          = 27,                                    /*!< TIM1 capture compare interrupt */
  TIM2_IRQn                             = 28,                                    /*!< TIM2 global interrupt */
  TIM3_IRQn                             = 29,                                    /*!< TIM3 global interrupt */
  TIM4_IRQn                             = 30,                                    /*!< TIM4 global interrupt */
  I2C1_IRQn                             = 31,                                    /*!< I2C1 global interrupt */
  I2C2_IRQn                             = 33,                                    /*!< I2C2 global interrupt */
  SPI1_IRQn                             = 35,                                    /*!< SPI1 global interrupt */
  SPI2_IRQn                             = 36,                                    /*!< SPI2 global interrupt */
  UART1_IRQn                            = 37,                                    /*!< UART1 global interrupt */
  UART2_IRQn                            = 38,                                    /*!< UART2 global interrupt */
  UART3_IRQn                            = 39,                                    /*!< UART3 global interrupt */
  EXTI15_10_IRQn                        = 40,                                    /*!< Interrupt on EXTI line[15:10] */
  RTC_ALR_IRQn                          = 41,                                    /*!< RTC Alarm Interrupt (EXTI17) */
  USB_WKUP_IRQn                         = 42,                                    /*!< USB Wakeup Interrupt (EXTI18) */
  TIM8_BRK_IRQn                         = 43,                                    /*!< TIM8 brake interrupt */
  TIM8_UP_IRQn                          = 44,                                    /*!< TIM8 update interrupted */
  TIM8_TRG_COM_IRQn                     = 45,                                    /*!< TIM8 trigger/COM interrupt */
  TIM8_CC_IRQn                          = 46,                                    /*!< TIM8 capture compare interrupt */
  TIM5_IRQn                             = 50,                                    /*!< TIM5 global interrupt */
  SPI3_IRQn                             = 51,                                    /*!< SPI3 global interrupt */
  UART4_IRQn                            = 52,                                    /*!< UART4 global interrupt */
  UART5_IRQn                            = 53,                                    /*!< UART5 global interrupt */
  TIM6_IRQn                             = 54,                                    /*!< TIM6 global interrupt */
  TIM7_IRQn                             = 55,                                    /*!< TIM7 global interrupt */
  DMA2_CH1_IRQn                         = 56,                                    /*!< DMA2 channel 1 global interrupt */
  DMA2_CH2_IRQn                         = 57,                                    /*!< DMA2 channel 2 global interrupt */
  DMA2_CH3_IRQn                         = 58,                                    /*!< DMA2 channel 3 global interrupt */
  DMA2_CH4_IRQn                         = 59,                                    /*!< DMA2 channel 4 global interrupt */
  DMA2_CH5_IRQn                         = 60,                                    /*!< DMA2 channel 5 global interrupt */
  ENET_IRQn                             = 61,                                    /*!< ENET global interrupt */
  ENET_WKUP_IRQn                        = 62,                                    /*!< ENET wake-up interrupt (EXTI25) */
  COMP_IRQn                             = 64,                                    /*!< Comparator 1/2/3 Global Interrupts (EXTI19/20/24) */
  FlexCAN2_IRQn                         = 65,                                    /*!< FLexCAN2 global interrupt */
  USB_FS_IRQn                           = 67,                                    /*!< USB OTG global interrupt */
  DMA2_CH6_IRQn                         = 68,                                    /*!< DMA2 channel 6 global interrupt */
  DMA2_CH7_IRQn                         = 69,                                    /*!< DMA2 channel 7 global interrupt */
  DMA2_CH8_IRQn                         = 70,                                    /*!< DMA2 channel 8 global interrupt */
  UART6_IRQn                            = 71,                                    /*!< UART6 global interrupt */
  UART7_IRQn                            = 82,                                    /*!< UART7 global interrupt */
  QSPI_IRQn                             = 95,                                    /*!< QSPI global interrupt */
  LPTIM_IRQn                            = 102,                                   /*!< LPTIM global interrupt (EXTI22) */
  LPUART_IRQn                           = 104,                                   /*!< LPUART global interrupt (EXTI23) */
} IRQn_Type;

#if   defined (__CC_ARM)
  #pragma push
  #pragma anon_unions
#elif defined (__ICCARM__)
  #pragma language=extended
#elif defined(__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050)
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wc11-extensions"
  #pragma clang diagnostic ignored "-Wreserved-id-macro"
#elif defined (__GNUC__)
  /* anonymous unions are enabled by default */
#elif defined (__TMS470__)
  /* anonymous unions are enabled by default */
#elif defined (__TASKING__)
  #pragma warning 586
#elif defined (__CSMC__)
  /* anonymous unions are enabled by default */
#else
  #warning Not supported compiler type
#endif

#define __STAR_REV                0x0100U   /* Core revision r1p0 */
#define __SAUREGION_PRESENT       0U        /* SAU regions present */
#define __MPU_PRESENT             1U        /* MPU present */
#define __VTOR_PRESENT            1U        /* VTOR present */
#define __NVIC_PRIO_BITS          3U        /* Number of Bits used for Priority Levels */
#define __Vendor_SysTickConfig    0U        /* Set to 1 if different SysTick Config is used */
#define __FPU_PRESENT             1U        /* FPU present */
#define __DSP_PRESENT             1U        /* DSP extension present */
#define __ICACHE_PRESENT          1U        /* Define if an ICACHE is present or not */
#define __DCACHE_PRESENT          1U        /* Define if an DCACHE is present or not */

#include "core_starmc1.h"                /* Core Peripheral Access Layer */
#include <stdint.h>
#include <stdio.h>

#define __disable_irq             \
      {                           \
          __asm(                  \
            "MOV R0, #1\n\t"      \
            "MSR PRIMASK, R0\n\t" \
          );                      \
      }

#define __enable_irq              \
      {                           \
          __asm(                  \
            "MOV R0, #0\n\t"      \
            "MSR PRIMASK, R0\n\t" \
          );                      \
      }

extern unsigned int SystemCoreClock;

#define delayms(x)  __SystickDelay(SystemCoreClock/1000*(x))
#define delayus(x)  __SystickDelay(SystemCoreClock/1000000*(x))

void __SystickDelay(uint32_t ticks);

#endif
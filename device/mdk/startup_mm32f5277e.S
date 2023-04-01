/******************************************************************************
 * @file     startup_ARMv8MML.S
 * @brief    CMSIS-Core Device Startup File for Cortex-ARMv8MML Device
 * @version  V2.0.0
 * @date     26. May 2021
 ******************************************************************************/
/*
 * Copyright (c) 2009-2021 Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

                .syntax  unified
                .arch    armv8-m.main

                #define __INITIAL_SP     Image$$ARM_LIB_STACK$$ZI$$Limit
                #define __STACK_LIMIT    Image$$ARM_LIB_STACK$$ZI$$Base
                #if defined (__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U)
                #define __STACK_SEAL     Image$$STACKSEAL$$ZI$$Base
                #endif

                .section RESET
                .align   2
                .globl   __Vectors
                .globl   __Vectors_End
                .globl   __Vectors_Size
__Vectors:
                .long    __INITIAL_SP                       /*     Initial Stack Pointer */
                .long	Isr_ResetHandler
				.long	Isr_NMIHandler
				.long	Isr_HardFaultHandler
				.long	Isr_MemManageHandler
				.long	Isr_BusFaultHandler
				.long	Isr_UsageFaultHandler

				.long	0
				.long	0
				.long	0
				.long	0
				.long	Isr_SVCHandler
				.long	Isr_DebugMonHandler
				.long	0
				.long	Isr_PendSVHandler
				.long	Isr_SysTickHandler
				.long	Isr_WWDG_IWDGHandler
				.long	Isr_PVDHandler
				.long	Isr_BKP_TAMPERHandler
				.long	Isr_RTCHandler
				.long	Isr_FLASHHandler
				.long	Isr_RCC_CRSHandler
				.long	Isr_EXTI0Handler
				.long	Isr_EXTI1Handler
				.long	Isr_EXTI2Handler
				.long	Isr_EXTI3Handler
				.long	Isr_EXTI4Handler
				.long	Isr_DMA1_CH1Handler
				.long	Isr_DMA1_CH2Handler
				.long	Isr_DMA1_CH3Handler
				.long	Isr_DMA1_CH4Handler
				.long	Isr_DMA1_CH5Handler
				.long	Isr_DMA1_CH6Handler
				.long	Isr_DMA1_CH7Handler
				.long	Isr_ADC1_2Handler
				.long	0
				.long	Isr_DMA1_CH8Handler
				.long	Isr_FLEXCAN1Handler
				.long	0
				.long	Isr_EXTI9_5Handler
				.long	Isr_TIM1_BRKHandler
				.long	Isr_TIM1_UPHandler
				.long	Isr_TIM1_TRG_COMHandler
				.long	Isr_TIM1_CCHandler
				.long	Isr_TIM2Handler
				.long	Isr_TIM3Handler
				.long	Isr_TIM4Handler
				.long	Isr_I2C1Handler
				.long	0
				.long	Isr_I2C2Handler
				.long	0
				.long	Isr_SPI1Handler
				.long	Isr_SPI2Handler
				.long	Isr_UART1Handler
				.long	Isr_UART2Handler
				.long	Isr_UART3Handler
				.long	Isr_EXTI15_10Handler
				.long	Isr_RTC_ALRHandler
				.long	0
				.long	Isr_TIM8_BRKHandler
				.long	Isr_TIM8_UPHandler
				.long	Isr_TIM8_TRG_COMHandler
				.long	Isr_TIM8_CCHandler
				.long	0
				.long	0
				.long	0
				.long	Isr_TIM5Handler
				.long	Isr_SPI3Handler
				.long	Isr_UART4Handler
				.long	Isr_UART5Handler
				.long	Isr_TIM6Handler
				.long	Isr_TIM7Handler
				.long	Isr_DMA2_CH1Handler
				.long	Isr_DMA2_CH2Handler
				.long	Isr_DMA2_CH3Handler
				.long	Isr_DMA2_CH4Handler
				.long	Isr_DMA2_CH5Handler
				.long	Isr_ENETHandler
				.long	Isr_ENET_WKUPHandler
				.long	0
				.long	Isr_COMPHandler
				.long	Isr_FLEXCAN2Handler
				.long	0
				.long	Isr_USB_FSHandler
				.long	Isr_DMA2_CH6Handler
				.long	Isr_DMA2_CH7Handler
				.long	Isr_DMA2_CH8Handler
				.long	Isr_UART6Handler
				.long	0
				.long	0
				.long	0
				.long	0
				.long	0
				.long	0
				.long	0
				.long	0
				.long	0
				.long	0
				.long	Isr_UART7Handler
				.long	0
				.long	0
				.long	0
				.long	0
				.long	0
				.long	0
				.long	0
				.long	0
				.long	0
				.long	0
				.long	0
				.long	0
				.long	Isr_QSPIHandler
				.long	0
				.long	0
				.long	0
				.long	0
				.long	0
				.long	0
				.long	Isr_LPTIMHandler
				.long	0
				.long	Isr_LPUARTHandler

                .space   (470 * 4)                          /* Interrupts 10 .. 480 are left out */
__Vectors_End:
                .equ     __Vectors_Size, __Vectors_End - __Vectors
                .size    __Vectors, . - __Vectors


                .thumb
                .section .text
                .align   2

                .thumb_func
                .type    Isr_ResetHandler, %function
                .globl   Isr_ResetHandler
                .fnstart
Isr_ResetHandler:
                ldr      r0, =__INITIAL_SP
                msr      psp, r0

                ldr      r0, =__STACK_LIMIT
                msr      msplim, r0
                msr      psplim, r0

                #if defined (__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U)
                ldr      r0, =__STACK_SEAL
                ldr      r1, =0xFEF5EDA5U
                strd     r1,r1,[r0,#0]
                #endif

                bl       SystemInit

                bl       __main

                .fnend
                .size    Isr_ResetHandler, . - Isr_ResetHandler


/* The default macro is not used for HardFault_Handler
 * because this results in a poor debug illusion.
 */
                .thumb_func
                .type    Isr_HardFaultHandler, %function
                .weak    Isr_HardFaultHandler
                .fnstart
Isr_HardFaultHandler:
                BX LR 
                .fnend
                .size    Isr_HardFaultHandler, . - Isr_HardFaultHandler

                .thumb_func
                .type    Default_Handler, %function
                .weak    Default_Handler
                .fnstart
Default_Handler:
                b        .
                .fnend
                .size    Default_Handler, . - Default_Handler

/* Macro to define default exception/interrupt handlers.
 * Default handler are weak symbols with an endless loop.
 * They can be overwritten by real handlers.
 */
                .macro   Set_Default_Handler  Handler_Name
                .weak    \Handler_Name
                .set     \Handler_Name, Default_Handler
                .endm


/* Default exception/interrupt handler */

				Set_Default_Handler	Isr_NMIHandler
				Set_Default_Handler	Isr_MemManageHandler
				Set_Default_Handler	Isr_BusFaultHandler
				Set_Default_Handler	Isr_UsageFaultHandler
				Set_Default_Handler	Isr_SVCHandler
				Set_Default_Handler	Isr_DebugMonHandler
				Set_Default_Handler	Isr_PendSVHandler
				Set_Default_Handler	Isr_SysTickHandler
				Set_Default_Handler	Isr_ADC1_2Handler
				Set_Default_Handler	Isr_BKP_TAMPERHandler
				Set_Default_Handler	Isr_COMPHandler
				Set_Default_Handler	Isr_RCC_CRSHandler
				Set_Default_Handler	Isr_DMA1_CH1Handler
				Set_Default_Handler	Isr_DMA1_CH2Handler
				Set_Default_Handler	Isr_DMA1_CH3Handler
				Set_Default_Handler	Isr_DMA1_CH4Handler
				Set_Default_Handler	Isr_DMA1_CH5Handler
				Set_Default_Handler	Isr_DMA1_CH6Handler
				Set_Default_Handler	Isr_DMA1_CH7Handler
				Set_Default_Handler	Isr_DMA1_CH8Handler
				Set_Default_Handler	Isr_DMA2_CH1Handler
				Set_Default_Handler	Isr_DMA2_CH2Handler
				Set_Default_Handler	Isr_DMA2_CH3Handler
				Set_Default_Handler	Isr_DMA2_CH4Handler
				Set_Default_Handler	Isr_DMA2_CH5Handler
				Set_Default_Handler	Isr_DMA2_CH6Handler
				Set_Default_Handler	Isr_DMA2_CH7Handler
				Set_Default_Handler	Isr_DMA2_CH8Handler
				Set_Default_Handler	Isr_ENETHandler
				Set_Default_Handler	Isr_ENET_WKUPHandler
				Set_Default_Handler	Isr_EXTI0Handler
				Set_Default_Handler	Isr_EXTI1Handler
				Set_Default_Handler	Isr_EXTI2Handler
				Set_Default_Handler	Isr_EXTI3Handler
				Set_Default_Handler	Isr_EXTI4Handler
				Set_Default_Handler	Isr_EXTI9_5Handler
				Set_Default_Handler	Isr_EXTI15_10Handler
				Set_Default_Handler	Isr_FLASHHandler
				Set_Default_Handler	Isr_FLEXCAN1Handler
				Set_Default_Handler	Isr_FLEXCAN2Handler
				Set_Default_Handler	Isr_I2C1Handler
				Set_Default_Handler	Isr_I2C2Handler
				Set_Default_Handler	Isr_WWDG_IWDGHandler
				Set_Default_Handler	Isr_LPTIMHandler
				Set_Default_Handler	Isr_LPUARTHandler
				Set_Default_Handler	Isr_PVDHandler
				Set_Default_Handler	Isr_QSPIHandler
				Set_Default_Handler	Isr_RTCHandler
				Set_Default_Handler	Isr_RTC_ALRHandler
				Set_Default_Handler	Isr_SPI1Handler
				Set_Default_Handler	Isr_SPI2Handler
				Set_Default_Handler	Isr_SPI3Handler
				Set_Default_Handler	Isr_TIM1_BRKHandler
				Set_Default_Handler	Isr_TIM1_UPHandler
				Set_Default_Handler	Isr_TIM1_TRG_COMHandler
				Set_Default_Handler	Isr_TIM1_CCHandler
				Set_Default_Handler	Isr_TIM8_BRKHandler
				Set_Default_Handler	Isr_TIM8_UPHandler
				Set_Default_Handler	Isr_TIM8_TRG_COMHandler
				Set_Default_Handler	Isr_TIM8_CCHandler
				Set_Default_Handler	Isr_TIM2Handler
				Set_Default_Handler	Isr_TIM5Handler
				Set_Default_Handler	Isr_TIM3Handler
				Set_Default_Handler	Isr_TIM4Handler
				Set_Default_Handler	Isr_TIM6Handler
				Set_Default_Handler	Isr_TIM7Handler
				Set_Default_Handler	Isr_UART1Handler
				Set_Default_Handler	Isr_UART2Handler
				Set_Default_Handler	Isr_UART3Handler
				Set_Default_Handler	Isr_UART4Handler
				Set_Default_Handler	Isr_UART5Handler
				Set_Default_Handler	Isr_UART6Handler
				Set_Default_Handler	Isr_UART7Handler
				Set_Default_Handler	Isr_USB_FSHandler

                .end

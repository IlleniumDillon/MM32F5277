/*
 * @Author: IlleniumDillon 147900130@qq.com
 * @Date: 2023-02-28 19:42:07
 * @LastEditors: IlleniumDillon 147900130@qq.com
 * @LastEditTime: 2023-03-27 17:44:27
 * @FilePath: \buildd:\ARMFPGA\MM32F5277_Keil\ISR\MM32_Isr.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "MM32_Isr.h"

// ADC1_2 global interrupt
void Isr_ADC1_2Handler(void)
{
	while(1);
}

// BKP tamper interrupt
void Isr_BKP_TAMPERHandler(void)
{
	while(1);
}

// COMP1_2_3 global interrupt
void Isr_COMPHandler(void)
{
	while(1);
}

// RCC and CRS global interrupt
void Isr_RCC_CRSHandler(void)
{
	while(1);
}

// DMA1 channel 1 global interrupt
void Isr_DMA1_CH1Handler(void)
{
	while(1);
}

// DMA1 channel 2 global interrupt
void Isr_DMA1_CH2Handler(void)
{
	while(1);
}

// DMA1 channel 3 global interrupt
void Isr_DMA1_CH3Handler(void)
{
	while(1);
}

// DMA1 channel 4 global interrupt
void Isr_DMA1_CH4Handler(void)
{
	while(1);
}

// DMA1 channel 5 global interrupt
void Isr_DMA1_CH5Handler(void)
{
	while(1);
}

// DMA1 channel 6 global interrupt
void Isr_DMA1_CH6Handler(void)
{
	while(1);
}

// DMA1 channel 7 global interrupt
void Isr_DMA1_CH7Handler(void)
{
	while(1);
}

// DMA1 channel 8 global interrupt
void Isr_DMA1_CH8Handler(void)
{
	while(1);
}

// DMA2 channel 1 global interrupt
void Isr_DMA2_CH1Handler(void)
{
	while(1);
}

// DMA2 channel 2 global interrupt
void Isr_DMA2_CH2Handler(void)
{
	while(1);
}

// DMA2 channel 3 global interrupt
void Isr_DMA2_CH3Handler(void)
{
	while(1);
}

// DMA2 channel 4 global interrupt
void Isr_DMA2_CH4Handler(void)
{
	while(1);
}

// DMA2 channel 5 global interrupt
void Isr_DMA2_CH5Handler(void)
{
	while(1);
}

// DMA2 channel 6 global interrupt
void Isr_DMA2_CH6Handler(void)
{
	while(1);
}

// DMA2 channel 7 global interrupt
void Isr_DMA2_CH7Handler(void)
{
	while(1);
}

// DMA2 channel 8 global interrupt
void Isr_DMA2_CH8Handler(void)
{
	while(1);
}

//ENET global interrupt
void Isr_ENETHandler(void)
{
	while(1);
}

//ENET wakeup global interrupt
void Isr_ENET_WKUPHandler(void)
{
	while(1);
}

//EXTI line0 interrupt
void Isr_EXTI0Handler(void)
{
	EXTI_PR.B.PR |= 0X01 << 0;
}

//EXTI line1 interrupt
void Isr_EXTI1Handler(void)
{
	EXTI_PR.B.PR |= 0X01 << 1;
}

//EXTI line2 interrupt
void Isr_EXTI2Handler(void)
{
	EXTI_PR.B.PR |= 0X01 << 2;
}

//EXTI line3 interrupt
void Isr_EXTI3Handler(void)
{
	EXTI_PR.B.PR |= 0X01 << 3;
}

//EXTI line4 interrupt
void Isr_EXTI4Handler(void)
{
	EXTI_PR.B.PR |= 0X01 << 4;
}

//EXTI line5_6_7_8_9 interrupt
void Isr_EXTI9_5Handler(void)
{
	if (EXTI_PR.B.PR & (0X01 << 5))
	{
		EXTI_PR.B.PR |= 0X01 << 5;
	}
	if (EXTI_PR.B.PR & (0X01 << 6))
	{
		EXTI_PR.B.PR |= 0X01 << 6;
	}
	if (EXTI_PR.B.PR & (0X01 << 7))
	{
		EXTI_PR.B.PR |= 0X01 << 7;
	}
	if (EXTI_PR.B.PR & (0X01 << 8))
	{
		EXTI_PR.B.PR |= 0X01 << 8;
	}
	if (EXTI_PR.B.PR & (0X01 << 9))
	{
		EXTI_PR.B.PR |= 0X01 << 9;
	}
	
}

//EXTI line10_11_12_13_14_15 interrupt
void Isr_EXTI15_10Handler(void)
{
	if (EXTI_PR.B.PR & (0X01 << 10))
	{
		EXTI_PR.B.PR |= 0X01 << 10;
	}
	if (EXTI_PR.B.PR & (0X01 << 11))
	{
		EXTI_PR.B.PR |= 0X01 << 11;
	}
	if (EXTI_PR.B.PR & (0X01 << 12))
	{
		EXTI_PR.B.PR |= 0X01 << 12;
	}
	if (EXTI_PR.B.PR & (0X01 << 13))
	{
		EXTI_PR.B.PR |= 0X01 << 13;
	}
	if (EXTI_PR.B.PR & (0X01 << 14))
	{
		EXTI_PR.B.PR |= 0X01 << 14;
	}
	if (EXTI_PR.B.PR & (0X01 << 15))
	{
		EXTI_PR.B.PR |= 0X01 << 15;
	}
}

//Flash global interrupt
void Isr_FLASHHandler(void)
{
	while(1);
}

//FLEXCAN1 global interrupt
void Isr_FLEXCAN1Handler(void)
{
	while(1);
}

//FLEXCAN2 global interrupt
void Isr_FLEXCAN2Handler(void)
{
	while(1);
}

//I2C1 global interrupt
void Isr_I2C1Handler(void)
{
	while(1);
}

//I2C2 global interrupt
void Isr_I2C2Handler(void)
{
	while(1);
}

//WWDG_IWDG global interrupt
void Isr_WWDG_IWDGHandler(void)
{
	while(1);
}

//LPTIM global interrupt
void Isr_LPTIMHandler(void)
{
	while(1);
}

//LPUART global interrupt
void Isr_LPUARTHandler(void)
{
	while(1);
}

//PVD and EXTI16 global interrupt
void Isr_PVDHandler(void)
{
	while(1);
}

//QSPI global interrupt
void Isr_QSPIHandler(void)
{
	while(1);
}

//RTC global interrupt
void Isr_RTCHandler(void)
{
	while(1);
}

//RTC_ALR global interrupt
void Isr_RTC_ALRHandler(void)
{
	while(1);
}

//SPI1 global interrupt
void Isr_SPI1Handler(void)
{
	while(1);
}

//SPI2 global interrupt
void Isr_SPI2Handler(void)
{
	while(1);
}

//SPI3 global interrupt
void Isr_SPI3Handler(void)
{
	while(1);
}

//TIM1 break global interrupt
void Isr_TIM1_BRKHandler(void)
{
	while(1);
}

//TIM1 update global interrupt
void Isr_TIM1_UPHandler(void)
{
	while(1);
}

//TIM1 trigger com global interrupt
void Isr_TIM1_TRG_COMHandler(void)
{
	while(1);
}

//TIM1 capture compare global interrupt
void Isr_TIM1_CCHandler(void)
{
	while(1);
}

//TIM8_BRK global interrupt
void Isr_TIM8_BRKHandler(void)
{
	while(1);
}

//TIM8_UP global interrupt
void Isr_TIM8_UPHandler(void)
{
	while(1);
}

//TIM8_TRG_COM global interrupt
void Isr_TIM8_TRG_COMHandler(void)
{
	while(1);
}

//TIM8_CC global interrupt
void Isr_TIM8_CCHandler(void)
{
	while(1);
}

//TIM2 global interrupt
void Isr_TIM2Handler(void)
{
	while(1);
}

//TIM5 global interrupt
void Isr_TIM5Handler(void)
{
	while(1);
}

//TIM3 global interrupt
void Isr_TIM3Handler(void)
{
	while(1);
}

//TIM4 global interrupt
void Isr_TIM4Handler(void)
{
	while(1);
}

//TIM6 global interrupt
void Isr_TIM6Handler(void)
{
	TIM6_SR.B.UIF = 0;
	extern void CTRL_Update(void);
	CTRL_Update();
}

//TIM7 global interrupt
void Isr_TIM7Handler(void)
{
	TIM7_SR.B.UIF = 0;
	extern void CTRL_HostUploadDebugInfo();
	CTRL_HostUploadDebugInfo();
}

//UART1 global interrupt
void Isr_UART1Handler(void)
{
	if(UART1_ISR.B.TX_INTF == 1)
	{
		UART1_ICR.B.TX_ICLR = 1;
	}
	else if(UART1_ISR.B.RX_INTF == 1)
	{
		UART1_ICR.B.RX_ICLR = 1;
	}
}

//UART2 global interrupt
void Isr_UART2Handler(void)
{
	/*if(UART2_ISR.B.TX_INTF == 1)
	{
		UART2_ICR.B.TX_ICLR = 1;
	}*/
	/*if(UART2_ISR.B.RX_INTF == 1)
	{
		UART2_ICR.B.RX_ICLR = 1;
		extern void CTRL_HostGetTarget();
		CTRL_HostGetTarget();
	}*/
	
	if(UART2_ISR.B.RXIDLE_INTF == 1)
	{
		UART2_ICR.B.RXIDLE_ICLR = 1;
		extern void CTRL_HostGetTarget();
		CTRL_HostGetTarget();
	}
}

//UART3 global interrupt
void Isr_UART3Handler(void)
{
	if(UART3_ISR.B.TX_INTF == 1)
	{
		UART3_ICR.B.TX_ICLR = 1;
	}
	else if(UART3_ISR.B.RX_INTF == 1)
	{
		UART3_ICR.B.RX_ICLR = 1;
	}
}

//UART4 global interrupt
void Isr_UART4Handler(void)
{
	if(UART4_ISR.B.TX_INTF == 1)
	{
		UART4_ICR.B.TX_ICLR = 1;
	}
	else if(UART4_ISR.B.RX_INTF == 1)
	{
		UART4_ICR.B.RX_ICLR = 1;
	}
}

//UART5 global interrupt
void Isr_UART5Handler(void)
{
	if(UART5_ISR.B.TX_INTF == 1)
	{
		UART5_ICR.B.TX_ICLR = 1;
	}
	else if(UART5_ISR.B.RX_INTF == 1)
	{
		UART5_ICR.B.RX_ICLR = 1;
	}
}

//UART6 global interrupt
void Isr_UART6Handler(void)
{
	if(UART6_ISR.B.TX_INTF == 1)
	{
		UART6_ICR.B.TX_ICLR = 1;
	}
	else if(UART6_ISR.B.RX_INTF == 1)
	{
		UART6_ICR.B.RX_ICLR = 1;
	}
}

//UART7 global interrupt
void Isr_UART7Handler(void)
{
	if(UART7_ISR.B.TX_INTF == 1)
	{
		UART7_ICR.B.TX_ICLR = 1;
	}
	else if(UART7_ISR.B.RX_INTF == 1)
	{
		UART7_ICR.B.RX_ICLR = 1;
	}
}

//USB FS OTG global interrupt
void Isr_USB_FSHandler(void)
{
	while(1);
}


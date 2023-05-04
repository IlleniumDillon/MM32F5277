/*
 * @Author: IlleniumDillon 147900130@qq.com
 * @Date: 2023-03-22 18:30:35
 * @LastEditors: IlleniumDillon 147900130@qq.com
 * @LastEditTime: 2023-04-04 16:54:34
 * @FilePath: \buildd:\ARMFPGA\MM32F5277_Keil\CTRL\CTRL_host.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "CTRL_host.h"

uint8_t hostTxBuffer[13] = {0xff,0x5a,0xff,0xa5,2,0,0,0,0,0,0,0,0};

float* pfeedBackX = (float*)&hostTxBuffer[5];
float* pfeedBackY = (float*)&hostTxBuffer[9];

uint8_t hostRxBuffer[10] = {0};

uint8_t indx = 0;

void CTRL_HostInit(void)
{
	UARTx_GCR(UART2).B.DMAMODE = 1;
    MM32_UART_Init(&UART2_TX_PD5,&UART2_RX_PD6,NULL,NULL,921600);
    
    MM32_DMA_ChannelConfig connfig = {.bursten = 0,
                                    .are = 0,
                                    .mem2mem = 0,
                                    .pl = 0,
                                    .msize = 0,
                                    .psize = 2,
                                    .minc = 1,
                                    .pinc = 0,
                                    .circ = 0,
                                    .dir = 1,
                                    .enableTEI = 0,
                                    .enableHTI = 0,
                                    .enableTCI = 0};
    MM32_DMA_ChannelInit(DMA1,DMA1_CH7_UART2_TX,&connfig);
    //MM32_UART_RXIsrInit(UART2);
																		
    UARTx_IER(UART2).B.RXIDLE_IEN = 1;
    MM32_DMA_ChannelConfig connfigrx = {.bursten = 0,
                                    .are = 0,
                                    .mem2mem = 0,
                                    .pl = 2,
                                    .msize = 0,
                                    .psize = 2,
                                    .minc = 1,
                                    .pinc = 0,
                                    .circ = 1,
                                    .dir = 0,
                                    .enableTEI = 0,
                                    .enableHTI = 0,
                                    .enableTCI = 0};
    MM32_DMA_ChannelInit(DMA1,DMA1_CH6_UART2_RX,&connfigrx);
    MM32_DMA_ConfigXfer(DMA1,DMA1_CH6_UART2_RX,&UART2_RDR,hostRxBuffer,10);
    MM32_DMA_StartChannel(DMA1,DMA1_CH6_UART2_RX);
																		
																		
    MM32_TIM_InitTimerTask(TIM7,HOSTFREQ);
    MM32_TIM_Enable(TIM7);
}

void CTRL_HostUploadDebugInfo(void)
{
		extern uint16_t ADC1_Value;
		extern uint16_t ADC2_Value;
		* pfeedBackX = ADC1_Value / 4096.0 * 10;
		* pfeedBackY = ADC2_Value / 4096.0 * 10;
    while(DMAx_CNDTRy(DMA1,DMA1_CH7_UART2_TX).B.NDT!=0);
    MM32_DMA_ConfigXfer(DMA1,DMA1_CH7_UART2_TX,&UART2_TDR,hostTxBuffer,13);
    MM32_DMA_StartChannel(DMA1,DMA1_CH7_UART2_TX);
}

void CTRL_HostGetTarget(void)
{
    //static uint8_t indx = 0;
    /*hostRxBuffer[indx] = UARTx_RDR(UART2).B.RXREG;
    if(indx == 0)
    {
        if(hostRxBuffer[indx] == 0x5a) 
        {
            indx++;
        }
        else
        {
            return;
        }
    }
    else if(indx == 9)
    {
        if(hostRxBuffer[indx] == 0xa5) 
        {
						indx = 0;
            target_X = *((float*)&hostRxBuffer[1]);
            target_Y = *((float*)&hostRxBuffer[5]);
        }
        else
        {
						indx = 0;
            return;
        }
    }
    else
    {
        indx++;
    }*/
		
		if(DMAx_ISR(DMA1).B.TCIF6 == 1)
		{
			DMAx_IFCR(DMA1).B.CTCIF6 = 1;
			if(hostRxBuffer[0] == 0x5a && hostRxBuffer[9] == 0xa5)
			{
				target_X = *((float*)&hostRxBuffer[1]);
				target_Y = *((float*)&hostRxBuffer[5]);
			}
		}
		else
		{
			
		}
}
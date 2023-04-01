/*
 * @Author: IlleniumDillon 147900130@qq.com
 * @Date: 2023-03-22 18:30:35
 * @LastEditors: IlleniumDillon 147900130@qq.com
 * @LastEditTime: 2023-03-27 17:48:59
 * @FilePath: \buildd:\ARMFPGA\MM32F5277_Keil\CTRL\CTRL_host.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "CTRL_host.h"

uint8_t hostTxBuffer[37] = {0xff,0x5a,0xff,0xa5,2,0,0,0,0,0,0,0,0
                            ,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

float* pfeedBackX = (float*)&hostTxBuffer[5];
float* pfeedBackY = (float*)&hostTxBuffer[9];
float* ptargetX = (float*)&hostTxBuffer[13];
float* ptargetY = (float*)&hostTxBuffer[17];
float* pctrloutX = (float*)&hostTxBuffer[21];
float* pctrloutY = (float*)&hostTxBuffer[25];
float* pbpfX = (float*)&hostTxBuffer[29];
float* pbpfY = (float*)&hostTxBuffer[33];

uint8_t hostRxBuffer[10] = {0};

void CTRL_HostInit(void)
{
	UARTx_GCR(UART2).B.DMAMODE = 1;
    MM32_UART_Init(&UART2_TX_PD5,&UART2_RX_PD6,NULL,NULL,921600);
    
    MM32_DMA_ChannelConfig connfig = {.bursten = 0,
                                    .are = 0,
                                    .mem2mem = 0,
                                    .pl = 3,
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
    MM32_UART_RXIsrInit(UART2);
    
}

void CTRL_HostUploadDebugInfo(void)
{
    while(DMAx_CNDTRy(DMA1,DMA1_CH7_UART2_TX).B.NDT!=0);
    MM32_DMA_ConfigXfer(DMA1,DMA1_CH7_UART2_TX,&UART2_TDR,hostTxBuffer,13);
    MM32_DMA_StartChannel(DMA1,DMA1_CH7_UART2_TX);
}

void CTRL_HostGetTarget(void)
{
    static uint8_t indx = 0;
    hostRxBuffer[indx] = MM32_UART_Read8(UART2);
    if(indx == 0)
    {
        if(hostRxBuffer[indx] == '{') 
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
        indx = 0;
        if(hostRxBuffer[indx] == '}') 
        {
            target_X = *((float*)&hostRxBuffer[1]);
            target_Y = *((float*)&hostRxBuffer[5]);
        }
        else
        {
            return;
        }
    }
    else
    {
        indx++;
    }
}
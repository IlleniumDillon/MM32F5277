/*
 * @Author: IlleniumDillon 147900130@qq.com
 * @Date: 2023-01-09 12:27:41
 * @LastEditors: IlleniumDillon 147900130@qq.com
 * @LastEditTime: 2023-03-19 10:59:11
 * @FilePath: \EmbeddedTag\port\eTag_port.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "eTag.h"

#include <stdio.h>
#include <MM32_UART.h>

void eTag_portInit(void)
{
    /*输出端口初始化*/
    MM32_UART_Init(&UART1_TX_PB6,&UART1_RX_PB7,NULL,NULL,115200);
}

void eTag_portDeinit(void)
{
    /*输出端口失能*/
    UART1_GCR.B.UARTEN = 0;
}

void eTag_portOutput(const char *log, size_t size)
{
    /*端口输出方法*/
    MM32_UART_WriteData(UART1,(uint8_t*)log,size);
}

const char *eTag_portGetTime(void) 
{
    /*访问系统时间方法*/
    
}

extern void eTag_portShowTime(void)
{
    char timeStr[20];
    size_t len = 0;
    uint32_t time = (RTC_CNTH.B.CNT << 16) + RTC_CNTL.B.CNT;

    len = sprintf(timeStr,"[%u]",time);
    eTag_portOutput(timeStr,len);
}
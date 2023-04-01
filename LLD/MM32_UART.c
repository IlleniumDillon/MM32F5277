#include "MM32_UART.h"

void MM32_UART_Init(MM32_UART_Pin* tx, MM32_UART_Pin* rx, MM32_UART_Pin* cts, MM32_UART_Pin* rts, uint32_t baud)
{
    if(tx!=NULL)
    {
        MM32_GPIO_AFPinInit(tx, AF_PUSHPULL);
    }
    if(rx!=NULL)
    {
        MM32_GPIO_AFPinInit(rx, INPUT_FLOATING);
    }
    if(cts!=NULL)
    {
        MM32_GPIO_AFPinInit(cts, INPUT_FLOATING);
    }
    if(rts!=NULL)
    {
        MM32_GPIO_AFPinInit(rts, AF_PUSHPULL);
    }

    extern unsigned int SystemCoreClock;

    //使能UART
    UARTx_GCR(tx->periBase).B.UARTEN = 1;
    //8位传输
    UARTx_CCR(tx->periBase).B.CHAR = 3;
    
    //配置波特率
    UARTx_BRR(tx->periBase).B.DIV_Mantissa = (SystemCoreClock/baud)/16;
    UARTx_FRA(tx->periBase).B.DIV_Fraction = (SystemCoreClock/baud)%16;
    
    //使能RX、TX
    UARTx_GCR(tx->periBase).B.RXEN = 1;
    UARTx_GCR(tx->periBase).B.TXEN = 1;
}

void MM32_UART_Write8(MM32_UART_PortNum num, uint8_t data)
{
    while(UARTx_CSR(num).B.TXFULL);
    UARTx_TDR(num).B.TXREG = data;
}

uint8_t MM32_UART_Read8(MM32_UART_PortNum num)
{
    while(UARTx_CSR(num).B.RXAVL!=1);
    return UARTx_RDR(num).B.RXREG;
}

void MM32_UART_WriteData(MM32_UART_PortNum num, uint8_t* pdata, uint32_t size)
{
    for(size_t i = 0; i <size; i++)
    {
        MM32_UART_Write8(num,pdata[i]);
    }
}

void MM32_UART_ReadData(MM32_UART_PortNum num, uint8_t* pdata, uint32_t size)
{
    for(size_t i = 0; i <size; i++)
    {
        pdata[i] = MM32_UART_Read8(num);
    }
}

void MM32_UART_TXIsrInit(MM32_UART_PortNum num)
{
    UARTx_IER(num).B.TX_IEN = 1;
    // switch (num)
    // {
    // case UART1:
    //     NVIC_EnableIRQ(UART1_IRQn);
    //     break;
    // case UART2:
    //     NVIC_EnableIRQ(UART2_IRQn);
    //     break;
    // case UART3:
    //     NVIC_EnableIRQ(UART3_IRQn);
    //     break;
    // case UART4:
    //     NVIC_EnableIRQ(UART4_IRQn);
    //     break;
    // case UART5:
    //     NVIC_EnableIRQ(UART5_IRQn);
    //     break;
    // case UART6:
    //     NVIC_EnableIRQ(UART6_IRQn);
    //     break;
    // case UART7:
    //     NVIC_EnableIRQ(UART7_IRQn);
    //     break;
    // default:
    //     break;
    // }
}

void MM32_UART_RXIsrInit(MM32_UART_PortNum num)
{
    UARTx_IER(num).B.RX_IEN = 1;
    // switch (num)
    // {
    // case UART1:
    //     NVIC_EnableIRQ(UART1_IRQn);
    //     break;
    // case UART2:
    //     NVIC_EnableIRQ(UART2_IRQn);
    //     break;
    // case UART3:
    //     NVIC_EnableIRQ(UART3_IRQn);
    //     break;
    // case UART4:
    //     NVIC_EnableIRQ(UART4_IRQn);
    //     break;
    // case UART5:
    //     NVIC_EnableIRQ(UART5_IRQn);
    //     break;
    // case UART6:
    //     NVIC_EnableIRQ(UART6_IRQn);
    //     break;
    // case UART7:
    //     NVIC_EnableIRQ(UART7_IRQn);
    //     break;
    // default:
    //     break;
    // }
}
#ifndef _MM32_UART_H_
#define _MM32_UART_H_

#include <MM32_Registers.h>
#include <common.h>
#include <MM32_UART_PinMap.h>
#include <MM32_GPIO.h>

#define UARTx_TDR(x) (*(MM32_UART1_TDR*)(x + 0x00))
#define UARTx_RDR(x) (*(MM32_UART1_RDR*)(x + 0x04))
#define UARTx_CSR(x) (*(MM32_UART1_CSR*)(x + 0x08))
#define UARTx_ISR(x) (*(MM32_UART1_ISR*)(x + 0x0C))
#define UARTx_IER(x) (*(MM32_UART1_IER*)(x + 0x10))
#define UARTx_ICR(x) (*(MM32_UART1_ICR*)(x + 0x14))
#define UARTx_GCR(x) (*(MM32_UART1_GCR*)(x + 0x18))
#define UARTx_CCR(x) (*(MM32_UART1_CCR*)(x + 0x1C))
#define UARTx_BRR(x) (*(MM32_UART1_BRR*)(x + 0x20))
#define UARTx_FRA(x) (*(MM32_UART1_FRA*)(x + 0x24))
#define UARTx_RXADDR(x) (*(MM32_UART1_RXADDR*)(x + 0x28))
#define UARTx_RXMASK(x) (*(MM32_UART1_RXMASK*)(x + 0x2C))
#define UARTx_SCR(x) (*(MM32_UART1_SCR*)(x + 0x30))
#define UARTx_IDLR(x) (*(MM32_UART1_IDLR*)(x + 0x34))
#define UARTx_ABRCR(x) (*(MM32_UART1_ABRCR*)(x + 0x38))
#define UARTx_IRDA(x) (*(MM32_UART1_IRDA*)(x + 0x3C))

#define UARTx_EnableDmaMode(x) (UARTx_GCR(x).B.DMAMODE = 1)

void MM32_UART_Init(MM32_UART_Pin* tx, MM32_UART_Pin* rx, MM32_UART_Pin* cts, MM32_UART_Pin* rts, uint32_t baud);

void MM32_UART_Write8(MM32_UART_PortNum num, uint8_t data);

uint8_t MM32_UART_Read8(MM32_UART_PortNum num);

void MM32_UART_WriteData(MM32_UART_PortNum num, uint8_t* pdata, uint32_t size);

void MM32_UART_ReadData(MM32_UART_PortNum num, uint8_t* pdata, uint32_t size);

void MM32_UART_TXIsrInit(MM32_UART_PortNum num);

void MM32_UART_RXIsrInit(MM32_UART_PortNum num);

#endif
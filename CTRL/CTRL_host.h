#ifndef _CTRL_HOST_H_
#define _CTRL_HOST_H_

#include <MM32_UART.h>
#include <MM32_DMA.h>
#include <MM32_TIM.h>
#include <CTRL_para.h>

extern float* pfeedBackX;
extern float* pfeedBackY;

#define HOSTPERIOD (0.02)
#define HOSTFREQ (1/HOSTPERIOD)

void CTRL_HostInit(void);

void CTRL_HostUploadDebugInfo(void);

void CTRL_HostGetTarget(void);

#endif
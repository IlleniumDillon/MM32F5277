#ifndef _CTRL_HOST_H_
#define _CTRL_HOST_H_

#include <MM32_UART.h>
#include <MM32_DMA.h>
#include <CTRL_para.h>

extern float* pfeedBackX;
extern float* pfeedBackY;
extern float* ptargetX;
extern float* ptargetY;
extern float* pctrloutX;
extern float* pctrloutY;
extern float* pbpfX;
extern float* pbpfY;

void CTRL_HostInit(void);

void CTRL_HostUploadDebugInfo(void);

void CTRL_HostGetTarget(void);

#endif
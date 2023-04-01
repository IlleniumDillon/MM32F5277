/*
 * @Author: IlleniumDillon 147900130@qq.com
 * @Date: 2023-03-19 17:46:54
 * @LastEditors: IlleniumDillon 147900130@qq.com
 * @LastEditTime: 2023-03-29 18:53:54
 * @FilePath: \buildd:\ARMFPGA\MM32F5277_Keil\CTRL\CTRL.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "CTRL.h"

tf_function_t BPF_X;
tf_function_t BPF_Y;

tf_function_t CTRL_X;
tf_function_t CTRL_Y;

uint8_t CTRL_initFlag = 0;

uint16_t ADC1_Value = 0;
uint16_t ADC2_Value = 0;

void CTRL_PinInit(void)
{
    MM32_DAC_Init(&DAC1_OUT_PA4);
    MM32_DAC_Init(&DAC2_OUT_PA5);

    /*MM32_ADC_OneShotInit(&ADC1_IN8_PB0);
    MM32_ADC_OneShotInit(&ADC2_IN9_PB1);*/

    MM32_ADC_ScanWithDmaInit(&ADC1_IN8_PB0);
    MM32_ADC_ScanWithDmaInit(&ADC2_IN9_PB1);

    MM32_DMA_ChannelConfig connfig = {.bursten = 0,
                                    .are = 1,
                                    .mem2mem = 0,
                                    .pl = 3,
                                    .msize = 1,
                                    .psize = 2,
                                    .minc = 0,
                                    .pinc = 0,
                                    .circ = 1,
                                    .dir = 0,
                                    .enableTEI = 0,
                                    .enableHTI = 0,
                                    .enableTCI = 0};
    MM32_DMA_ChannelInit(DMA1,DMA1_CH1_ADC1,&connfig);
    MM32_DMA_ConfigXfer(DMA1,DMA1_CH1_ADC1,&ADC1_ADDATA,&ADC1_Value,1);
    MM32_DMA_StartChannel(DMA1,DMA1_CH1_ADC1);
    MM32_DMA_ChannelInit(DMA1,DMA1_CH2_ADC2,&connfig);
    MM32_DMA_ConfigXfer(DMA1,DMA1_CH2_ADC2,&ADC2_ADDATA,&ADC2_Value,1);
    MM32_DMA_StartChannel(DMA1,DMA1_CH2_ADC2);

    CTRL_HostInit();
}

void CTRL_Init(char argc, char *argv)
{
    float num[3],den[3];

    if(CTRL_initFlag)
    {
        tf_deinit(&BPF_X);
        tf_deinit(&BPF_Y);
        tf_deinit(&CTRL_X);
        tf_deinit(&CTRL_Y);
    }

    num[0]=BPF_X_NUM_Z2;
    num[1]=BPF_X_NUM_Z1;
    num[2]=BPF_X_NUM_Z0;
    den[0]=BPF_X_DEN_Z2;
    den[1]=BPF_X_DEN_Z1;
    den[2]=BPF_X_DEN_Z0;
    tf_initZFunction_ND(&BPF_X,num,3,den,3,1,CTRL_PERIOD);
    num[0]=BPF_Y_NUM_Z2;
    num[1]=BPF_Y_NUM_Z1;
    num[2]=BPF_Y_NUM_Z0;
    den[0]=BPF_Y_DEN_Z2;
    den[1]=BPF_Y_DEN_Z1;
    den[2]=BPF_Y_DEN_Z0;
    tf_initZFunction_ND(&BPF_Y,num,3,den,3,1,CTRL_PERIOD);

    num[0]=CTRL_X_NUM_Z1;
    num[1]=CTRL_X_NUM_Z0;
    den[0]=CTRL_X_DEN_Z2;
    den[1]=CTRL_X_DEN_Z1;
    den[2]=CTRL_X_DEN_Z0;
    tf_initZFunction_ND(&CTRL_X,num,2,den,3,1,CTRL_PERIOD);
    th_setLimit(&CTRL_X,0,10);
    num[0]=CTRL_Y_NUM_Z1;
    num[1]=CTRL_Y_NUM_Z0;
    den[0]=CTRL_Y_DEN_Z2;
    den[1]=CTRL_Y_DEN_Z1;
    den[2]=CTRL_Y_DEN_Z0;
    tf_initZFunction_ND(&CTRL_Y,num,2,den,3,1,CTRL_PERIOD);
    th_setLimit(&CTRL_Y,0,10);

    CTRL_initFlag = 1;
}SHELL_CMD_EXPORT(init,CTRL_Init);

void CTRL_Reset(void)
{
    if(CTRL_initFlag)
    {
        tf_deinit(&BPF_X);
        tf_deinit(&BPF_Y);
        tf_deinit(&CTRL_X);
        tf_deinit(&CTRL_Y);
        CTRL_initFlag = 0;
    }
}

void CTRL_Start(char argc, char *argv)
{
    //CTRL_Init();
    MM32_TIM_InitTimerTask(TIM6,CTRL_FREQ);
    MM32_TIM_Enable(TIM6);
    MM32_ADC_ScanStart(&ADC1_IN8_PB0);
		MM32_ADC_ScanStart(&ADC2_IN9_PB1);
}SHELL_CMD_EXPORT(start,CTRL_Start);

void CTRL_Stop(char argc, char *argv)
{
    MM32_TIM_Disable(TIM6);
    MM32_ADC_ScanStop(&ADC1_IN8_PB0);
		MM32_ADC_ScanStop(&ADC2_IN9_PB1);
}SHELL_CMD_EXPORT(stop,CTRL_Stop);

void CTRL_Update(void)
{
    /**ptargetX = target_X;
    *ptargetY = target_Y;

    *pfeedBackX = (float)MM32_ADC_OneShotGetValue(&ADC1_IN8_PB0) / 4096.0 * 10;
    *pfeedBackY = (float)MM32_ADC_OneShotGetValue(&ADC2_IN9_PB1) / 4096.0 * 10;

    float err_X = target_X - *pfeedBackX;
    float err_Y = target_Y - *pfeedBackY;

    *pctrloutX = tf_update(&CTRL_X,err_X);
    *pctrloutY = tf_update(&CTRL_Y,err_Y);

    *pbpfX = tf_update(&BPF_X,*pctrloutX);
    *pbpfY = tf_update(&BPF_Y,*pctrloutY);

		MM32_DAC_SetDualValue((*pbpfX)/10.0*4096.0,(*pbpfY)/10.0*4096.0);*/
	
		//float fbx = (float)MM32_ADC_OneShotGetValue(&ADC1_IN8_PB0) / 4096.0 * 10;
		//float fby = (float)MM32_ADC_OneShotGetValue(&ADC2_IN9_PB1) / 4096.0 * 10;
		//float erx = target_X - fbx;
		//float ery = target_Y - fby;
		//float cox = tf_update(&CTRL_X,erx);
		//float coy = tf_update(&CTRL_Y,ery);
		//float bpx = tf_update(&BPF_X,cox);
		//float bpy = tf_update(&BPF_Y,coy);
		
		//if(bpx>9.9) bpx = 9.9;
		//if(bpx<0) bpx = 0;
		//if(bpy>9.9) bpy = 9.9;
		//if(bpy<0) bpy = 0;
		float bpy = tf_update(&BPF_Y,target_Y);
		if(bpy>9.9) bpy = 9.9;
		if(bpy<0) bpy = 0;
		MM32_DAC_SetDualValue(target_X/10.0*4096.0,bpy/10.0*4096.0);

    //CTRL_HostUploadDebugInfo();
}

void CTRL_Step(char argc, char *argv)
{
    static uint8_t i = 0;
		if(i == 0)
		{
			target_Y = 5;
			i = 1;
		}
		else
		{
			target_Y = 1;
			i = 0;
		}
}SHELL_CMD_EXPORT(step,CTRL_Step);
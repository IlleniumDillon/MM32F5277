/*
 * @Author: IlleniumDillon 147900130@qq.com
 * @Date: 2023-03-19 17:47:25
 * @LastEditors: IlleniumDillon 147900130@qq.com
 * @LastEditTime: 2023-03-28 17:41:19
 * @FilePath: \buildd:\ARMFPGA\MM32F5277_Keil\CTRL\CTRL_para.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "CTRL_para.h"
#include "eParameter.h"

PARA_EXPORT_START();

float CTRL_X_NUM_Z1;PARA_EXPORT(CTRL_X_NUM_Z1,1,0,1e12,-1e12);
float CTRL_X_NUM_Z0;PARA_EXPORT(CTRL_X_NUM_Z0,2,0,1e12,-1e12);
float CTRL_X_DEN_Z2;PARA_EXPORT(CTRL_X_DEN_Z2,3,0,1e12,-1e12);
float CTRL_X_DEN_Z1;PARA_EXPORT(CTRL_X_DEN_Z1,4,0,1e12,-1e12);
float CTRL_X_DEN_Z0;PARA_EXPORT(CTRL_X_DEN_Z0,5,0,1e12,-1e12);

float CTRL_Y_NUM_Z1;PARA_EXPORT(CTRL_Y_NUM_Z1,6,0.742366899766239,1e12,-1e12);
float CTRL_Y_NUM_Z0;PARA_EXPORT(CTRL_Y_NUM_Z0,7,-0.741504184117001,1e12,-1e12);
float CTRL_Y_DEN_Z2;PARA_EXPORT(CTRL_Y_DEN_Z2,8,1,1e12,-1e12);
float CTRL_Y_DEN_Z1;PARA_EXPORT(CTRL_Y_DEN_Z1,9,-1.99950012497917,1e12,-1e12);
float CTRL_Y_DEN_Z0;PARA_EXPORT(CTRL_Y_DEN_Z0,10,0.999500124979169,1e12,-1e12);

float BPF_X_NUM_Z2;PARA_EXPORT(BPF_X_NUM_Z2,11,0,1e12,-1e12);
float BPF_X_NUM_Z1;PARA_EXPORT(BPF_X_NUM_Z1,12,0,1e12,-1e12);
float BPF_X_NUM_Z0;PARA_EXPORT(BPF_X_NUM_Z0,13,0,1e12,-1e12);
float BPF_X_DEN_Z2;PARA_EXPORT(BPF_X_DEN_Z2,14,0,1e12,-1e12);
float BPF_X_DEN_Z1;PARA_EXPORT(BPF_X_DEN_Z1,15,0,1e12,-1e12);
float BPF_X_DEN_Z0;PARA_EXPORT(BPF_X_DEN_Z0,16,0,1e12,-1e12);

float BPF_Y_NUM_Z2;PARA_EXPORT(BPF_Y_NUM_Z2,17,1,1e12,-1e12);
float BPF_Y_NUM_Z1;PARA_EXPORT(BPF_Y_NUM_Z1,18,-1.86574050322485,1e12,-1e12);
float BPF_Y_NUM_Z0;PARA_EXPORT(BPF_Y_NUM_Z0,19,0.936502139112460,1e12,-1e12);
float BPF_Y_DEN_Z2;PARA_EXPORT(BPF_Y_DEN_Z2,20,1,1e12,-1e12);
float BPF_Y_DEN_Z1;PARA_EXPORT(BPF_Y_DEN_Z1,21,-1.37856732822962,1e12,-1e12);
float BPF_Y_DEN_Z0;PARA_EXPORT(BPF_Y_DEN_Z0,22,0.449328964117222,1e12,-1e12);

float target_X;PARA_EXPORT(target_X,23,1,10,0);
float target_Y;PARA_EXPORT(target_Y,24,1,10,0);

PARA_USED const parameterFlash PARA_SECTION("__empty") empty[6];

PARA_EXPORT_END();
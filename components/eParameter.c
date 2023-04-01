/*
 * @Author: IlleniumDillon 147900130@qq.com
 * @Date: 2023-01-16 20:34:36
 * @LastEditors: IlleniumDillon 147900130@qq.com
 * @LastEditTime: 2023-03-20 16:07:19
 * @FilePath: \Embeddedparameter\src\eParameter.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "eParameter.h"
#include <MM32_CRC_POLY.h>
#include <eTag.h>
#include <stdlib.h>

const char Tag[] = "para";

parameterShadow paraShadows[PARA_NUM] = {0};

void ePara_Init(void)
{
    MM32_CRC_Config(CRC_PLOY_32,CRC_32_MPEG_2,0xFFFFFFFF,0,0,0);
    for(size_t i = 0; _para_start_add[i].name[0] != 0; i++)
    {
        CRC_CR.B.RST = 1;
        for(uint8_t j = 0; j < strlen(_para_start_add[i].name); j++) MM32_CRC_PushData(_para_start_add[i].name[j]);
        paraShadows[i].hash = MM32_CRC_GetCRC();
        paraShadows[i].limitH = _para_start_add[i].limitH;
        paraShadows[i].limitL = _para_start_add[i].limitL;
        paraShadows[i].value = _para_start_add[i].value;
        paraShadows[i].ramAddr = _para_start_add[i].ramAddr;
        *paraShadows[i].ramAddr = paraShadows[i].value;
    }
    eTag_i(Tag,"para Init Done.");
}

void ePara_List(char argc, char *argv)
{
    for(size_t i = 0; _para_start_add[i].name[0] != 0; i++)
    {
        shell_printf("name:\t%s,\tvalue:\t%f,\tshadow:%f.\r\n",_para_start_add[i].name, *paraShadows[i].ramAddr,paraShadows[i].value);
    }
}SHELL_CMD_EXPORT(paraList,ePara_List);

void ePara_Set(char argc, char *argv)
{
    if (argc == 3)
	{
        char* p = &argv[argv[1]];
        MM32_CRC_Config(CRC_PLOY_32,CRC_32_MPEG_2,0xFFFFFFFF,0,0,0);
        for(uint8_t j = 0; j < strlen(p); j++) MM32_CRC_PushData(p[j]);
        uint32_t hash = MM32_CRC_GetCRC();
        int indx = -1;
        for(int i = 0; i < PARA_NUM; i++)
        {
            if(paraShadows[i].hash==0)break;
            if(paraShadows[i].hash == hash)
            {
                indx = i;
                break;
            }
        }
        if(indx == -1)
        {
            shell_printf("name invalid\r\n");
            return;
        }

        p = &argv[argv[2]];    
        paraShadows[indx].value = atof(p);

        if(paraShadows[indx].value > paraShadows[indx].limitH)
        {
            paraShadows[indx].value = paraShadows[indx].limitH;
            eTag_w(Tag,"over limitH.\r\n");
        }
        if(paraShadows[indx].value < paraShadows[indx].limitL)
        {
            paraShadows[indx].value = paraShadows[indx].limitL;
            eTag_w(Tag,"under limitL.\r\n");
        }
        shell_printf("paraSet Done!\r\n");
    }
    else
    {
        shell_printf("paraSet need more arguments!\r\n");
    }
}SHELL_CMD_EXPORT(paraSet,ePara_Set);

void ePara_Valid(char argc, char *argv)
{
    for(size_t i = 0; _para_start_add[i].name[0] != 0; i++)
    {
        *paraShadows[i].ramAddr = paraShadows[i].value;
    }
    shell_printf("Valid Done.\r\n");
}SHELL_CMD_EXPORT(paraValid,ePara_Valid);

void ePara_Save(char argc, char *argv)
{
    parameterFlash temp[PARA_NUM+2];
    memcpy(temp,&_para_start_,(PARA_NUM+2) * sizeof(parameterFlash));
    for(int i = 0; i < PARA_NUM; i++)
    {
        temp[i+1].value = paraShadows[i].value;
        temp[i+1].limitH = paraShadows[i].limitH;
        temp[i+1].limitL = paraShadows[i].limitL;
    }
    //MM32_FLASH_ErasePage(((uint32_t)&_para_start_ - FLASH_MEM_BASE) / FLASH_PAGE_SIZE);
    MM32_FLASH_EraseAddr((uint32_t)&_para_start_);
    MM32_FLASH_Program((uint32_t)&_para_start_,(uint16_t*)temp,(PARA_NUM+2) * sizeof(parameterFlash) / 2);
    shell_printf("Save Done.\r\n");
}SHELL_CMD_EXPORT(paraSave,ePara_Save);

void ePara_Load(char argc, char *argv)
{
    ePara_Init();
}SHELL_CMD_EXPORT(paraLoad,ePara_Load);

void ePara_Dump(char argc, char *argv)
{
    eTag_hexDump("para",32,&_para_start_,0x100);
}SHELL_CMD_EXPORT(paraDump,ePara_Dump);
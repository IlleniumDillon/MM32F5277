#include "MM32_FSMC.h"

void MM32_FSMC_Init(MM32_FSMC_DeviceConfig* config)
{
    for(uint8_t i = 0; i < 26; i++)
    {
        if(config->FSMC_A[i]!=0)
        {
            MM32_GPIO_AFPinInit(config->FSMC_A[i],AF_PUSHPULL);
        }
    }
    for(uint8_t i = 0; i < 16; i++)
    {
        if(config->FSMC_DATA[i]!=0)
        {
            MM32_GPIO_AFPinInit(config->FSMC_DATA[i],AF_PUSHPULL);
        }
    }
    for(uint8_t i = 0; i < 4; i++)
    {
        if(config->FSMC_NCS[i]!=0)
        {
            MM32_GPIO_AFPinInit(config->FSMC_NCS[i],AF_PUSHPULL);
        }
    }
    for(uint8_t i = 0; i < 2; i++)
    {
        if(config->FSMC_NBS[i]!=0)
        {
            MM32_GPIO_AFPinInit(config->FSMC_NBS[i],AF_PUSHPULL);
        }
    }
    if(config->FSMC_NOE!=0)
    {
        MM32_GPIO_AFPinInit(config->FSMC_NOE,AF_PUSHPULL);
    }
    if(config->FSMC_NWE!=0)
    {
        MM32_GPIO_AFPinInit(config->FSMC_NWE,AF_PUSHPULL);
    }
    if(config->FSMC_NADV!=0)
    {
        MM32_GPIO_AFPinInit(config->FSMC_NADV,AF_PUSHPULL);
    }
    if(config->FSMC_NWAIT!=0)
    {
        MM32_GPIO_AFPinInit(config->FSMC_NWAIT,AF_PUSHPULL);
        FSMC_SMTMGR_SET0.B.READY_MODE = 1;
    }
    else
    {
        FSMC_SMTMGR_SET0.B.READY_MODE = 0;
    }

    FSMC_SMTMGR_SET0.B.SM_READ_PIPE = config->SM_READ_PIPE;
    FSMC_SMTMGR_SET0.B.t_wp = config->T_WP;
    FSMC_SMTMGR_SET0.B.t_wr = config->T_WR;
    FSMC_SMTMGR_SET0.B.t_as = config->T_AS;
    FSMC_SMTMGR_SET0.B.t_rc = config->T_RC;

    FSMC_SMSKR0.B.MEM_SIZE = config->memSize;
    FSMC_SMSKR1.B.MEM_SIZE = config->memSize;
    FSMC_SMSKR2.B.MEM_SIZE = config->memSize;
    FSMC_SMSKR3.B.MEM_SIZE = config->memSize;

    FSMC_SMSKR0.B.MEM_TYPE = config->deviceType;
    FSMC_SMSKR1.B.MEM_TYPE = config->deviceType;
    FSMC_SMSKR2.B.MEM_TYPE = config->deviceType;
    FSMC_SMSKR3.B.MEM_TYPE = config->deviceType;

    FSMC_SMCTLR.B.SMDW0 = config->width;
    
    FSMC_SMSKR0.B.REG_SELECT = 0;
    FSMC_SMSKR1.B.REG_SELECT = 0;
    FSMC_SMSKR2.B.REG_SELECT = 0;
    FSMC_SMSKR3.B.REG_SELECT = 0;
}

void MM32_FSMC_Write16(MM32_FSMC_Banks bank, uint32_t address, uint16_t data)
{
    *((uint16_t *)(bank + address)) = data;
}

void MM32_FSMC_Write8(MM32_FSMC_Banks bank, uint32_t address, uint8_t data)
{
    *((uint8_t *)(bank + address)) = data;
}

uint16_t MM32_FSMC_Read16(MM32_FSMC_Banks bank, uint32_t address)
{
    return *((uint16_t *)(bank + address));
}

uint8_t MM32_FSMC_Read8(MM32_FSMC_Banks bank, uint32_t address)
{
    return *((uint8_t *)(bank + address));
}
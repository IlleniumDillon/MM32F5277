/*
 * @Author: IlleniumDillon 147900130@qq.com
 * @Date: 2023-03-02 11:07:38
 * @LastEditors: IlleniumDillon 147900130@qq.com
 * @LastEditTime: 2023-03-19 23:21:45
 * @FilePath: \buildd:\ARMFPGA\MM32F5277_Keil\LLD\MM32_FLASH.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "MM32_FLASH.h"

void MM32_FLASH_EraseAll(void)
{
    __disable_irq;
    while(FLASH_CR.B.LOCK == 1) MM32_FLASH_Unlock;

    FLASH_CR.B.MER = 1;
    FLASH_CR.B.STRT = 1;
    while(FLASH_SR.B.BSY == 1);

    FLASH_CR.B.MER = 0;

    //FLASH_CR.B.LOCK = 1;
    __enable_irq;
}

void MM32_FLASH_ErasePage(uint8_t pageNum)
{
    __disable_irq;
    while(FLASH_CR.B.LOCK == 1) MM32_FLASH_Unlock;

    FLASH_CR.B.PER = 1;
    FLASH_AR.U = FLASH_PAGE_ADDR(pageNum);
    FLASH_CR.B.STRT = 1;
    while(FLASH_SR.B.BSY == 1);

    FLASH_CR.B.PER = 0;

    //FLASH_CR.B.LOCK = 1;
    __enable_irq;
}

void MM32_FLASH_EraseAddr(uint32_t addr)
{
    __disable_irq;
    while(FLASH_CR.B.LOCK == 1) MM32_FLASH_Unlock;

    FLASH_CR.B.PER = 1;
    FLASH_AR.U = addr;
    FLASH_CR.B.STRT = 1;
    while(FLASH_SR.B.BSY == 1);

    FLASH_CR.B.PER = 0;

    //FLASH_CR.B.LOCK = 1;
    __enable_irq;
}

void MM32_FLASH_Program(uint32_t addr, uint16_t* dataPtr, uint32_t num)
{
    __disable_irq;
    while(FLASH_CR.B.LOCK == 1) MM32_FLASH_Unlock;

    for (uint32_t i = 0; i < num; i++)
    {
        FLASH_CR.B.PG = 1;
        ((uint16_t*)addr)[i] = dataPtr[i];
        while(FLASH_SR.B.BSY == 1);
        FLASH_CR.B.PG = 0;
    }

    //FLASH_CR.B.LOCK = 1;
    __enable_irq;
}
/*
 * @Author: IlleniumDillon 147900130@qq.com
 * @Date: 2023-03-02 13:22:52
 * @LastEditors: IlleniumDillon 147900130@qq.com
 * @LastEditTime: 2023-04-01 19:57:57
 * @FilePath: \buildd:\ARMFPGA\MM32F5277_Keil\LLD\MM32_FSMC.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef _MM32_FSMC_H_
#define _MM32_FSMC_H_

#include <MM32_Registers.h>

#include <MM32_GPIO.h>
#include <MM32_FSMC_PinMap.h>

typedef enum
{
    FSMC_BANK0 = 0x60000000,
    FSMC_BANK1 = 0x64000000,
    FSMC_BANK2 = 0x68000000,
    FSMC_BANK3 = 0x6C000000
}MM32_FSMC_Banks;

typedef enum
{
    FSMC_SRAM = 1,
    FSMC_NORFLASH = 2,
    FSMC_OTHERTYPE = 3,
}MM32_FSMC_DeviceType;

typedef enum
{
    FSMC_NODEVICE = 0,
    FSMC_64KB,
    FSMC_128KB,
    FSMC_256KB,
    FSMC_512KB,
    FSMC_1MB,
    FSMC_2MB,
    FSMC_4MB,
    FSMC_8MB,
    FSMC_16MB,
    FSMC_32MB,
    FSMC_64MB,
    FSMC_OTHERSIZE,
}MM32_FSMC_MemSize;

typedef enum
{
    FSMC_16BITS = 0,
    FSMC_8BITS = 4,
}MM32_FSMC_BusWidth;

typedef struct 
{
    MM32_FSMC_Pin* FSMC_A[26];
    MM32_FSMC_Pin* FSMC_DATA[16];
    MM32_FSMC_Pin* FSMC_NCS[4];
    MM32_FSMC_Pin* FSMC_NBS[2];
    MM32_FSMC_Pin* FSMC_NOE;
    MM32_FSMC_Pin* FSMC_NWE;
    MM32_FSMC_Pin* FSMC_NADV;
    MM32_FSMC_Pin* FSMC_NWAIT;

    MM32_FSMC_DeviceType deviceType;
    MM32_FSMC_MemSize memSize;
    MM32_FSMC_BusWidth width;

    uint8_t SM_READ_PIPE;
    uint8_t T_WP;
    uint8_t T_WR;
    uint8_t T_AS;
    uint8_t T_RC;
}MM32_FSMC_DeviceConfig;

void MM32_FSMC_Init(MM32_FSMC_DeviceConfig* config);

void MM32_FSMC_Write16(MM32_FSMC_Banks bank, uint32_t address, uint16_t data);
void MM32_FSMC_Write8(MM32_FSMC_Banks bank, uint32_t address, uint8_t data);

uint16_t MM32_FSMC_Read16(MM32_FSMC_Banks bank, uint32_t address);
uint8_t MM32_FSMC_Read8(MM32_FSMC_Banks bank, uint32_t address);

#endif
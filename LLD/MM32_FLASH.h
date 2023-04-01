/*
 * @Author: IlleniumDillon 147900130@qq.com
 * @Date: 2023-03-02 11:07:01
 * @LastEditors: IlleniumDillon 147900130@qq.com
 * @LastEditTime: 2023-03-19 23:22:28
 * @FilePath: \buildd:\ARMFPGA\MM32F5277_Keil\LLD\MM32_FLASH.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef _MM32_FLASH_H_
#define _MM32_FLASH_H_

#include <MM32_Registers.h>
#include <common.h>

///@brief FLASH 存储区基地址
#define FLASH_MEM_BASE (0x08000000)
///@brief FLASH 页数
#define FLASH_PAGE_NUM (256)
///@brief FLASH 页空间
#define FLASH_PAGE_SIZE (0X0400)
///@brief FLASH 页地址
///@note pageNum (0 ~ 255)
#define FLASH_PAGE_ADDR(pageNum) (FLASH_MEM_BASE + FLASH_PAGE_SIZE * FLASH_PAGE_SIZE)

///@brief FLASH 解锁密码
#define FLASH_KEY1 (0x45670123)
#define FLASH_KEY2 (0xCDEF89AB)

/**
 * @brief FLASH 解锁
 */
#define MM32_FLASH_Unlock               \
        {                               \
            FLASH_KEYR.U = FLASH_KEY1;  \
            FLASH_KEYR.U = FLASH_KEY2;  \
        }

/**
 * @brief FLASH 锁定
 */
#define MM32_FLASH_Lock (FLASH_CR.B.LOCK = 1)

/**
 * @brief FLASH 全片擦除
 * 
 */
void MM32_FLASH_EraseAll(void);

/**
 * @brief FLASH 页擦除
 * 
 * @param pageNum 页号（0~255）
 */
void MM32_FLASH_ErasePage(uint8_t pageNum);
void MM32_FLASH_EraseAddr(uint32_t addr);

/**
 * @brief FLASH 编程
 * 
 * @param addr 写入地址
 * @param dataPtr 内容（半字）
 * @param num 半字数
 * 
 * @note 编程前先执行擦除
 */
void MM32_FLASH_Program(uint32_t addr, uint16_t* dataPtr, uint32_t num);

#endif
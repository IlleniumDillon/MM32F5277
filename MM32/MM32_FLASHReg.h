/*
 * @Author: IlleniumDillon 147900130@qq.com
 * @Date: 2023-02-28 19:42:07
 * @LastEditors: IlleniumDillon 147900130@qq.com
 * @LastEditTime: 2023-03-02 11:59:21
 * @FilePath: \buildd:\ARMFPGA\MM32F5277_Keil\MM32\MM32_FLASHReg.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef _MM32_FLASHREG_H_
#define _MM32_FLASHREG_H_

#include "MM32_FLASHRegdef.h"

//Flash Access Control Register
#define	FLASH_ACR		(*(MM32_FLASH_ACR*)(0x40022000+0x00))

//FPEC key register
#define	FLASH_KEYR		(*(MM32_FLASH_KEYR*)(0x40022000+0x04))

//Flash OPTKEY register
#define	FLASH_OPTKEYR		(*(MM32_FLASH_OPTKEYR*)(0x40022000+0x08))

//Flash Status Register
#define	FLASH_SR		(*(MM32_FLASH_SR*)(0x40022000+0x0C))

//Flash Control Register
#define	FLASH_CR		(*(MM32_FLASH_CR*)(0x40022000+0x10))

//Flash Address Register
#define	FLASH_AR		(*(MM32_FLASH_AR*)(0x40022000+0x14))

//option byte register
#define	FLASH_OBR		(*(MM32_FLASH_OBR*)(0x40022000+0x1C))

//write protection register
#define	FLASH_WRPR0		(*(MM32_FLASH_WRPR0*)(0x40022000+0x20))

//write protection register
#define	FLASH_WRPR1		(*(MM32_FLASH_WRPR1*)(0x40022000+0x24))


#endif

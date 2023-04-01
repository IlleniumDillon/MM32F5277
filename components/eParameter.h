/*
 * @Author: IlleniumDillon 147900130@qq.com
 * @Date: 2023-01-16 20:34:24
 * @LastEditors: IlleniumDillon 147900130@qq.com
 * @LastEditTime: 2023-03-28 16:09:44
 * @FilePath: \Embeddedparameter\include\eParameter.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef _EPARAMETER_H_
#define _EPARAMETER_H_

#include <MM32_FLASH.h>
#include <eShell.h>
#include <stdarg.h>
#include <string.h>

typedef struct
{
    uint32_t hash;
    float value;
    float limitH;
    float limitL;
    float* ramAddr;
}parameterShadow;

typedef struct
{
    char name[14];
    float value;
    float limitH;
    float limitL;
    float* ramAddr;
}parameterFlash;

#define PARA_NUM    (30)

#define PARA_USED  __attribute__((used))

#define PARA_SECTION(x)    __attribute__((section(".para." x)))

#define PARA_EXPORT_START() \
    PARA_USED const parameterFlash _para_start_ PARA_SECTION("0.end") = {0}

#define PARA_EXPORT(name, indx, value, limitH, limitL) \
    PARA_USED const parameterFlash _para_##name PARA_SECTION(#indx) = {#name, value, limitH, limitL, &name}

#define PARA_EXPORT_END() \
    PARA_USED const parameterFlash _para_end_ PARA_SECTION("_0.end") = {0}

extern const parameterFlash _para_start_;

#define _para_start_add (&_para_start_+1)

void ePara_Init(void);

void ePara_List(char argc, char *argv);

void ePara_Set(char argc, char *argv);

void ePara_Valid(char argc, char *argv);

void ePara_Save(char argc, char *argv);

void ePara_Load(char argc, char *argv);
		
void ePara_Dump(char argc, char *argv);

#endif
/*
 * @Author: IlleniumDillon 147900130@qq.com
 * @Date: 2023-01-09 12:24:29
 * @LastEditors: IlleniumDillon 147900130@qq.com
 * @LastEditTime: 2023-01-09 18:58:26
 * @FilePath: \EmbeddedTag\include\eTag.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef _ETAG_H_
#define _ETAG_H_

#include "eTag_config.h"
#include "eTag_type.h"
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * @brief 断言
 * @note 可通过eTag_setAssertHook函数自定义hook
 */
#define ETAG_ASSERT(EXPR)   \
        if(!EXPR)           \
        {                   \
            eTag_a("elog", "(%s) has assert failed at %s:%ld.", #EXPR, __FUNCTION__, __LINE__); \
            if(elog_assert_hook != NULL) elog_assert_hook(#EXPR, __FUNCTION__, __LINE__); \
            while(1);       \
        }                   \

/**
 * @brief log输出 
 */
#define elog_assert(tag, ...)   \
        eTag_output(ETAG_LEVEL_ASSERT, tag, __FILE__, __FUNCTION__, __LINE__, __VA_ARGS__)
#define elog_error(tag, ...)    \
        eTag_output(ETAG_LEVEL_ERROR, tag, __FILE__, __FUNCTION__, __LINE__, __VA_ARGS__)
#define elog_warn(tag, ...) \
        eTag_output(ETAG_LEVEL_WARN, tag, __FILE__, __FUNCTION__, __LINE__, __VA_ARGS__)
#define elog_info(tag, ...) \
        eTag_output(ETAG_LEVEL_INFO, tag, __FILE__, __FUNCTION__, __LINE__, __VA_ARGS__)
#define elog_debug(tag, ...)    \
        eTag_output(ETAG_LEVEL_DEBUG, tag, __FILE__, __FUNCTION__, __LINE__, __VA_ARGS__)
#define elog_verbose(tag, ...)  \
        eTag_output(ETAG_LEVEL_VERBOSE, tag, __FILE__, __FUNCTION__, __LINE__, __VA_ARGS__)

#define eTag_a(tag,...) elog_assert(tag, __VA_ARGS__)
#define eTag_e(tag,...) elog_error(tag, __VA_ARGS__)
#define eTag_w(tag,...) elog_warn(tag, __VA_ARGS__)
#define eTag_i(tag,...) elog_info(tag, __VA_ARGS__)
#define eTag_d(tag,...) elog_debug(tag, __VA_ARGS__)
#define eTag_v(tag,...) elog_verbose(tag, __VA_ARGS__)

#define LOG_TAG ""
#define log_a(...)  eTag_a(LOG_TAG, __VA_ARGS__)
#define log_e(...)  eTag_e(LOG_TAG, __VA_ARGS__)
#define log_w(...)  eTag_w(LOG_TAG, __VA_ARGS__)
#define log_i(...)  eTag_i(LOG_TAG, __VA_ARGS__)
#define log_d(...)  eTag_d(LOG_TAG, __VA_ARGS__)
#define log_v(...)  eTag_v(LOG_TAG, __VA_ARGS__)

/**
 * @brief hook函数指针
 */
extern void (*elog_assert_hook)(const char* expr, const char* func, size_t line);

/**
 * @brief eTag初始化
 * @note 需要完成eTag_portInit函数
 */
void eTag_init(void);

/**
 * @brief 使能eTag输出
 * @note 需要完成eTag_portOutput函数
 */
void eTag_start(void);

/**
 * @brief 终止eTag输出
 */
void eTag_stop(void);

/**
 * @brief eTag输出
 * 
 * @param level log等级
 * @param tag 标签
 * @param file 文件名
 * @param func 函数名
 * @param line 行数
 * @param format 格式字符串
 * @param ... 参数列表
 */
void eTag_output(uint8_t level, const char *tag, const char *file, const char *func,
        const long line, const char *format, ...);

/**
 * @brief 自定义断言钩子函数
 * 
 * @param hook 钩子函数指针
 */
void eTag_setAssertHook(void (*hook)(const char* expr, const char* func, size_t line));

/**
 * @brief 16进制打印存储器内容
 * 
 * @param name 块名
 * @param width 每行数据个数（8位）
 * @param buf 存储器内容指针
 * @param size 字节数
 */
void eTag_hexDump(const char *name, uint8_t width, const void *buf, uint16_t size);

#endif
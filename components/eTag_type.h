/*
 * @Author: IlleniumDillon 147900130@qq.com
 * @Date: 2023-01-09 12:27:16
 * @LastEditors: IlleniumDillon 147900130@qq.com
 * @LastEditTime: 2023-01-09 18:48:09
 * @FilePath: \EmbeddedTag\include\eTag_type.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef _ETAG_TYPE_H_
#define _ETAG_TYPE_H_

/**
 * @brief log等级定义
 */
#define ETAG_LEVEL_ASSERT   (0X01 << 0)
#define ETAG_LEVEL_ERROR   (0X01 << 1)
#define ETAG_LEVEL_WARN   (0X01 << 2)
#define ETAG_LEVEL_INFO   (0X01 << 3)
#define ETAG_LEVEL_DEBUG   (0X01 << 4)
#define ETAG_LEVEL_VERBOSE   (0X01 << 5)

/**
 * @brief 所有等级静默
 */
#define ETAG_LEVEL_SILENT   (0)
/**
 * @brief 输出所有等级
 */
#define ETAG_LEVEL_ALL  (0xFF)

/**
 * @brief 包头、包尾
 */
#define CSI_START                      "\033["
#define CSI_END                        "\033[0m"

/**
 * @brief 文本颜色定义
 */
#define F_BLACK                        "30;"
#define F_RED                          "31;"
#define F_GREEN                        "32;"
#define F_YELLOW                       "33;"
#define F_BLUE                         "34;"
#define F_MAGENTA                      "35;"
#define F_CYAN                         "36;"
#define F_WHITE                        "37;"

/**
 * @brief 背景颜色定义
 */
#define B_NULL
#define B_BLACK                        "40;"
#define B_RED                          "41;"
#define B_GREEN                        "42;"
#define B_YELLOW                       "43;"
#define B_BLUE                         "44;"
#define B_MAGENTA                      "45;"
#define B_CYAN                         "46;"
#define B_WHITE                        "47;"

/**
 * @brief 文本字体定义
 */
#define S_BOLD                         "1m"
#define S_UNDERLINE                    "4m"
#define S_BLINK                        "5m"
#define S_NORMAL                       "22m"

#endif
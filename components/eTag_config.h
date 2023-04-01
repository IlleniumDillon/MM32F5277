/*
 * @Author: IlleniumDillon 147900130@qq.com
 * @Date: 2023-01-09 12:27:00
 * @LastEditors: IlleniumDillon 147900130@qq.com
 * @LastEditTime: 2023-01-09 18:46:00
 * @FilePath: \EmbeddedTag\include\eTag_config.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef _ETAG_CONFIG_H_
#define _ETAG_CONFIG_H_

#include "eTag_type.h"

#define ETAG_OUTPUT_ENABLE  (1)
/**
 * @brief log等级屏蔽，选择要输出的log等级
 */
#define ETAG_OUTPUT_LEVEL_MASK   ( \
                                  ETAG_LEVEL_ASSERT | \
                                  ETAG_LEVEL_ERROR | \
                                  ETAG_LEVEL_WARN | \
                                  ETAG_LEVEL_INFO | \
                                  ETAG_LEVEL_DEBUG | \
                                  ETAG_LEVEL_VERBOSE \
                                ) 

#define ETAG_ASSERT_ENABLE  (1)

/**
 * @brief 输出一行内容的最大长度
 */
#define ETAG_LINE_BUF_SIZE  (1024)

/**
 * @brief 换行符
 */
#define ETAG_NEWLINE_SIGN   "\r\n"

#define ETAG_COLOR_ENABLE   (1)
/**
 * @brief log文本字体和颜色定义(详见eTag_type.h)
 */
#define ETAG_COLOR_ASSERT   (F_MAGENTA B_NULL S_NORMAL)
#define ETAG_COLOR_ERROR   (F_RED B_NULL S_NORMAL)
#define ETAG_COLOR_WARN   (F_YELLOW B_NULL S_NORMAL)
#define ETAG_COLOR_INFO   (F_CYAN B_NULL S_NORMAL)
#define ETAG_COLOR_DEBUG   (F_GREEN B_NULL S_NORMAL)
#define ETAG_COLOR_VERBOSE   (F_BLUE B_NULL S_NORMAL)

/**
 * @brief FLASH日志配置
 */
#define ETAG_FLASH_OUTPUT_ENABLE  (0)
#define ETAG_FLASH_OUTPUT_LEVEL_MASK   ( \
                                  ETAG_LEVEL_ASSERT | \
                                  ETAG_LEVEL_ERROR | \
                                  ETAG_LEVEL_WARN | \
                                  ETAG_LEVEL_INFO | \
                                  ETAG_LEVEL_DEBUG | \
                                  ETAG_LEVEL_VERBOSE \
                                ) 
#define ETAG_FLASH_ADDRESS  (0x08000000)

#endif
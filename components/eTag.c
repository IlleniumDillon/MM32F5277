/*
 * @Author: IlleniumDillon 147900130@qq.com
 * @Date: 2023-01-09 12:24:17
 * @LastEditors: IlleniumDillon 147900130@qq.com
 * @LastEditTime: 2023-01-09 18:41:07
 * @FilePath: \EmbeddedTag\src\eTag.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "eTag.h"

extern void eTag_portInit(void);
extern void eTag_portDeinit(void);
extern void eTag_portOutput(const char *log, size_t size);
extern const char *eTag_portGetTime(void) ;
extern void eTag_portShowTime(void) ;

bool startFlag = false;
static char log_buf[ETAG_LINE_BUF_SIZE] = {0};
char time_buf[9] = {0};

void (*elog_assert_hook)(const char* expr, const char* func, size_t line);

static const char *level_output_info[] = 
{
        [ETAG_LEVEL_ASSERT]  = "A/",
        [ETAG_LEVEL_ERROR]   = "E/",
        [ETAG_LEVEL_WARN]    = "W/",
        [ETAG_LEVEL_INFO]    = "I/",
        [ETAG_LEVEL_DEBUG]   = "D/",
        [ETAG_LEVEL_VERBOSE] = "V/",
};

static const char *color_output_info[] = 
{
        [ETAG_LEVEL_ASSERT]  = ETAG_COLOR_ASSERT,
        [ETAG_LEVEL_ERROR]   = ETAG_COLOR_ERROR,
        [ETAG_LEVEL_WARN]    = ETAG_COLOR_WARN,
        [ETAG_LEVEL_INFO]    = ETAG_COLOR_INFO,
        [ETAG_LEVEL_DEBUG]   = ETAG_COLOR_DEBUG,
        [ETAG_LEVEL_VERBOSE] = ETAG_COLOR_VERBOSE,
};


size_t eTag_strcpy(size_t cur_len, char *dst, const char *src)
{
    const char *src_old = src;

    //assert(dst);
    //assert(src);

    while (*src != 0) {
        /* make sure destination has enough space */
        if (cur_len++ < ETAG_LINE_BUF_SIZE) {
            *dst++ = *src++;
        } else {
            break;
        }
    }
    return src - src_old;
}

void eTag_init(void)
{
    eTag_portInit();
}

void eTag_start(void)
{
    startFlag = true;
    log_i("EasyLogger V%s is initialize success.", "");
}

void eTag_stop(void)
{
    startFlag = false;
}

void eTag_output(uint8_t level, const char *tag, const char *file, const char *func,
        const long line, const char *format, ...)
{
    //eTag_portGetTime();
    eTag_portShowTime();
    if(!(level | ETAG_OUTPUT_LEVEL_MASK)) return;
    if(!startFlag) return;
    
    size_t tag_len = strlen(tag);
    size_t log_len = 0;
    char line_num[5] = {0};

    va_list args;
    va_start(args, format);

    log_len += eTag_strcpy(log_len, log_buf + log_len, CSI_START);
    log_len += eTag_strcpy(log_len, log_buf + log_len, color_output_info[level]);

    log_len += eTag_strcpy(log_len, log_buf + log_len, level_output_info[level]);

    log_len += eTag_strcpy(log_len, log_buf + log_len, tag);

    log_len += eTag_strcpy(log_len, log_buf + log_len, "[");
    log_len += eTag_strcpy(log_len, log_buf + log_len, time_buf);
    log_len += eTag_strcpy(log_len, log_buf + log_len, "] ");

    log_len += eTag_strcpy(log_len, log_buf + log_len, "(");
    log_len += eTag_strcpy(log_len, log_buf + log_len, file);
    log_len += eTag_strcpy(log_len, log_buf + log_len, ": ");
    snprintf(line_num, 5, "%ld", line);
    log_len += eTag_strcpy(log_len, log_buf + log_len, line_num);
    log_len += eTag_strcpy(log_len, log_buf + log_len, " ");
    log_len += eTag_strcpy(log_len, log_buf + log_len, func);
    log_len += eTag_strcpy(log_len, log_buf + log_len, ")");

    log_len  += vsnprintf(log_buf + log_len, ETAG_LINE_BUF_SIZE - log_len, format, args);
    va_end(args);

    log_len += eTag_strcpy(log_len, log_buf + log_len, CSI_END);
    log_len += eTag_strcpy(log_len, log_buf + log_len, ETAG_NEWLINE_SIGN);
    log_buf[log_len] = 0;

    eTag_portOutput(log_buf, log_len+1);
}

void eTag_setAssertHook(void (*hook)(const char* expr, const char* func, size_t line))
{
    elog_assert_hook = hook;
}

void eTag_hexDump(const char *name, uint8_t width, const void *buf, uint16_t size)
{
#define __is_print(ch)       ((unsigned int)((ch) - ' ') < 127u - ' ')
    uint16_t log_len = 0;
    char dump_string[8] = {0};

    for(uint16_t i = 0; i < size; i += width)
    {
        log_len  = snprintf(log_buf, ETAG_LINE_BUF_SIZE, "D/HEX %s: %04X-%04X: ", name, i, i + width - 1);

        for(uint16_t j = 0; j < width; j++)
        {
            if (i + j < size) 
            {
                snprintf(dump_string, sizeof(dump_string), "%02X ", ((uint8_t*)buf)[i + j]);
            } 
            else 
            {
                strncpy(dump_string, "   ", sizeof(dump_string));
            }

            log_len += eTag_strcpy(log_len, log_buf + log_len, dump_string);

            if ((j + 1) % 8 == 0) 
            {
                log_len += eTag_strcpy(log_len, log_buf + log_len, " ");
            }
        }
        log_len += eTag_strcpy(log_len, log_buf + log_len, "  ");
        for (uint16_t j = 0; j < width; j++) 
        {
            if (i + j < size) 
            {
                snprintf(dump_string, sizeof(dump_string), "%c", __is_print(((uint8_t*)buf)[i + j]) ? ((uint8_t*)buf)[i + j] : '.');
                log_len += eTag_strcpy(log_len, log_buf + log_len, dump_string);
            }
        }
        log_len += eTag_strcpy(log_len, log_buf + log_len, ETAG_NEWLINE_SIGN);
        log_buf[log_len] = 0;

        eTag_portOutput(log_buf, log_len+1);
    }
}
#ifndef _MM32_CRC_POLY_H_
#define _MM32_CRC_POLY_H_

#include <MM32_Registers.h>

/**
 * @brief 
 * 
 */
typedef enum
{
    CRC_DEFAULT_INPUT = 0,
    CRC_REVERSE_INPUT = 1
}MM32_CRC_InputConfig;

/**
 * @brief 
 * 
 */
typedef enum
{
    CRC_LITTLE_ENDIAN_INPUT = 0,
    CRC_BIG_ENDIAN_INPUT = 1
}MM32_CRC_InputEndianConfig;

/**
 * @brief 
 * 
 */
typedef enum
{
    CRC_LITTLE_ENDIAN_OUTPUT = 0,
    CRC_BIG_ENDIAN_OUTPUT = 1
}MM32_CRC_OutputEndianConfig;


/**
 * @brief 
 * 
 */
typedef enum
{
    CRC_DEFAULT_OUTPUT = 0,
    CRC_REVERSE_OUTPUT = 1
}MM32_CRC_OutputConfig;

/**
 * @brief 
 * 
 */
typedef enum
{
    CRC_PLOY_32 = 0,
    CRC_PLOY_16 = 1,
    CRC_PLOY_8 = 2
}MM32_CRC_PolyWidthConfig;

/**
 * @brief 
 * 
 */
typedef enum
{
    CRC_8 = 0x07,
    CRC_8_ITU = 0x07,
    CRC_8_ROHC = 0X07,
    CRC_8_MAXIM = 0x31,

    CRC_16_IBM = 0X8005,
    CRC_16_MAXIM = 0X8005,
    CRC_16_USB = 0X8005,
    CRC_16_MODBU = 0X8005,
    CRC_16_CCITT = 0X1021,
    CRC_16_CCITT_FALSE = 0X1021,
    CRC_16_X25 = 0X1021,
    CRC_16_XMODEM = 0X1021,
    CRC_16_XMODEM2 = 0X8408,
    CRC_16_DNP = 0X3D65,

    CRC_32 = 0X04C11DB7,
    CRC_32_C = 0X1EDC6F41,
    CRC_32_KOOPMAN = 0X741B8CD7,
    CRC_32_MPEG_2 = 0X04C11DB7
}MM32_CRC_Poly;

/**
 * @brief 
 * 
 * @param width 
 * @param ploy 
 * @param init 
 * @param xorOut 
 * @param inr 
 * @param our 
 */
void MM32_CRC_Config(MM32_CRC_PolyWidthConfig width, MM32_CRC_Poly ploy, uint32_t init, uint32_t xorOut, MM32_CRC_InputConfig inr, MM32_CRC_OutputConfig our);

/**
 * @brief 
 * 
 * @param data 
 */
void MM32_CRC_PushData(uint32_t data);

/**
 * @brief 
 * 
 * @return uint32_t 
 */
uint32_t MM32_CRC_GetCRC(void);

#endif
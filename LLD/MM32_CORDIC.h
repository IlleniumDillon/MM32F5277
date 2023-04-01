#ifndef _MM32_CORDIC_H_
#define _MM32_CORDIC_H_

#include <MM32_Registers.h>
#include <arm_math.h>

/**
 * @brief 
 * 
 * @param theta 
 * @return int 
 */
int MM32_CORDIC_Sin(int theta);

/**
 * @brief 
 * 
 * @param theta 
 * @return int 
 */
int MM32_CORDIC_Cos(int theta);

/**
 * @brief 
 * 
 * @param x 
 * @param y 
 * @return int 
 */
int MM32_CORDIC_Atan(int x, int y);

#endif
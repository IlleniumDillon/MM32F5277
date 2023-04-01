#include "MM32_CORDIC.h"

int MM32_CORDIC_Sin(int theta)
{
    CORDIC_CR.U = 0x0000000E;
    CORDIC_DXR.U = 0x4DBA;
    CORDIC_DZR.U = theta;
    CORDIC_DYR.U = 0;
    while(CORDIC_SR.B.BSY);
    CORDIC_CR.U = 0x0000000F;
    while(CORDIC_SR.B.BSY);
    return CORDIC_RYR.U;
}

int MM32_CORDIC_Cos(int theta)
{
    CORDIC_CR.U = 0x0000000E;
    CORDIC_DXR.U = 0x4DBA;
    CORDIC_DZR.U = theta;
    CORDIC_DYR.U = 0;
    while(CORDIC_SR.B.BSY);
    CORDIC_CR.U = 0x0000000F;
    while(CORDIC_SR.B.BSY);
    return CORDIC_RXR.U;
}

int MM32_CORDIC_Atan(int x, int y)
{
    CORDIC_CR.U = 0x0000000C;
    CORDIC_DYR.U = y;
    CORDIC_DZR.U = 0;
    CORDIC_DXR.U = x;
		while(CORDIC_SR.B.BSY);
		CORDIC_CR.U = 0x0000000D;
    while(CORDIC_SR.B.BSY);    
    return CORDIC_RZR.B.RZ;
}
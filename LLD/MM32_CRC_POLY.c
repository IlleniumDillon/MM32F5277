#include "MM32_CRC_POLY.h"

void MM32_CRC_Config(MM32_CRC_PolyWidthConfig width, MM32_CRC_Poly ploy, uint32_t init, uint32_t xorOut, MM32_CRC_InputConfig inr, MM32_CRC_OutputConfig our)
{
    CRC_CR.B.RST = 1;

    CRC_CR.B.PWIDTH = width;
    CRC_CR.B.RI = inr;
    CRC_CR.B.RO = our;
    
    CRC_IVR.U = init;
    CRC_CR.B.RST = 1;

    CRC_PR.U = ploy;

    CRC_IDR.U = xorOut;
}

void MM32_CRC_PushData(uint32_t data)
{
    CRC_DR.U = data;
}

uint32_t MM32_CRC_GetCRC(void)
{
    return CRC_DR.U ^ CRC_IDR.U;
}
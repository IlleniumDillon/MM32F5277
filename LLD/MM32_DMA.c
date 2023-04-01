#include "MM32_DMA.h"

void MM32_DMA_ChannelInit(MM32_DMA_Moudle moudle, uint8_t ch,MM32_DMA_ChannelConfig* config)
{
    DMAx_CCRy(moudle,ch).B.ARE = config->are;
    DMAx_CCRy(moudle,ch).B.Burst_en = config->bursten;
    DMAx_CCRy(moudle,ch).B.CIRC = config->circ;
    DMAx_CCRy(moudle,ch).B.DIR = config->dir;
    DMAx_CCRy(moudle,ch).B.HTIE = config->enableHTI;
    DMAx_CCRy(moudle,ch).B.MEM2MEM = config->mem2mem;
    DMAx_CCRy(moudle,ch).B.MINC = config->minc;
    DMAx_CCRy(moudle,ch).B.MSIZE = config->msize;
    DMAx_CCRy(moudle,ch).B.PINC = config->pinc;
    DMAx_CCRy(moudle,ch).B.PL = config->pl;
    DMAx_CCRy(moudle,ch).B.PSIZE = config->psize;
}

void MM32_DMA_ConfigXfer(MM32_DMA_Moudle moudle, uint8_t ch, void* pAddress, void* mAddress, uint16_t count)
{
    DMAx_CNDTRy(moudle,ch).B.NDT = count;
    DMAx_CPARy(moudle,ch).B.PA = (uint32_t)pAddress;
    DMAx_CMARy(moudle,ch).B.MA = (uint32_t)mAddress;
}

void MM32_DMA_StartChannel(MM32_DMA_Moudle moudle, uint8_t ch)
{
    DMAx_CCRy(moudle,ch).B.EN = 1;
}

void MM32_DMA_StopChannel(MM32_DMA_Moudle moudle, uint8_t ch)
{
    DMAx_CCRy(moudle,ch).B.EN = 0;
}
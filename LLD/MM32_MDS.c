/*
 * @Author: IlleniumDillon 147900130@qq.com
 * @Date: 2023-03-02 13:19:47
 * @LastEditors: IlleniumDillon 147900130@qq.com
 * @LastEditTime: 2023-03-04 15:51:53
 * @FilePath: \buildd:\ARMFPGA\MM32F5277_Keil\LLD\MM32_MDS.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "MM32_MDS.h"

void MM32_MDS_TriggerConfig(MM32_MDS_TriggerChannel ch, MM32_MDS_TriggerMode mode, MM32_MDS_TiggerSource source)
{
    MDS_TRIGxCR(ch).B.TRGSEL = source;
    MDS_TRIGxCR(ch).B.EDGESEL = mode;
}

void MM32_MDS_ConnectConfig(MM32_MDS_ConnectChannel ch, MM32_MDS_ConnectSource source)
{
    MDS_CONNxCR(ch).B.TRGSEL = source;
}

void MM32_MDS_SoftTrigger(void)
{
    MDS_SWTRIG.B.SW_TRIG = 1;
}

void MM32_MDS_TriggerCLUConfig(MM32_MDS_CLUChannel ch, MM32_MDS_TiggerSource source[4], MM32_MDS_TriggerMode mode[4], MM32_MDS_TriggerChannel out)
{
    MDS_TRIG_CLUxSEL(ch).B.CLUIN0_SEL = source[0];
    MDS_TRIG_CLUxSEL(ch).B.CLUIN1_SEL = source[1];
    MDS_TRIG_CLUxSEL(ch).B.CLUIN2_SEL = source[2];
    MDS_TRIG_CLUxSEL(ch).B.CLUIN3_SEL = source[3];

    MDS_TRIG_CLUxCFG(ch).B.CLUIN0_ED = mode[0];
    MDS_TRIG_CLUxCFG(ch).B.CLUIN1_ED = mode[1];
    MDS_TRIG_CLUxCFG(ch).B.CLUIN2_ED = mode[2];
    MDS_TRIG_CLUxCFG(ch).B.CLUIN3_ED = mode[3];

    MDS_TRIGxCR(out).B.CLUSEL = ch;
    MDS_TRIGxCR(out).B.CLUEN = 1;
}

void MM32_MDS_ConnectCLUConfig(MM32_MDS_CLUChannel ch, MM32_MDS_CLUMode mode, MM32_MDS_ConnectSource source[4], uint8_t inv[4], MM32_MDS_ConnectChannel out)
{
    MDS_CONN_CLUxSEL(ch).B.CLUIN0_SEL = source[0];
    MDS_CONN_CLUxSEL(ch).B.CLUIN1_SEL = source[1];
    MDS_CONN_CLUxSEL(ch).B.CLUIN2_SEL = source[2];
    MDS_CONN_CLUxSEL(ch).B.CLUIN3_SEL = source[3];

    MDS_CONN_CLUxCFG(ch).B.CLMODE = mode;

    MDS_CONN_CLUxCFG(ch).B.INV0 = inv[0];
    MDS_CONN_CLUxCFG(ch).B.INV1 = inv[1];
    MDS_CONN_CLUxCFG(ch).B.INV2 = inv[2];
    MDS_CONN_CLUxCFG(ch).B.INV3 = inv[3];

    MDS_CONNxCR(out).B.CLUSEL = ch;
    MDS_CONNxCR(out).B.CLUEN = 1;
}
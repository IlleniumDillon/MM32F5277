/*
 * @Author: IlleniumDillon 147900130@qq.com
 * @Date: 2023-03-02 13:26:26
 * @LastEditors: IlleniumDillon 147900130@qq.com
 * @LastEditTime: 2023-03-27 19:25:42
 * @FilePath: \buildd:\ARMFPGA\MM32F5277_Keil\LLD\MM32_ADC.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef _MM32_ADC_H_
#define _MM32_ADC_H_

#include <MM32_Registers.h>
#include <MM32_GPIO.h>
#include <MM32_ADC_PinMap.h>

#define	ADCx_ADDATA(x)		(*(MM32_ADC1_ADDATA*)(x+0x00))
#define	ADCx_ADCFG(x)		(*(MM32_ADC1_ADCFG*)(x+0x04))
#define	ADCx_ADCR(x)		(*(MM32_ADC1_ADCR*)(x+0x08))
#define	ADCx_ADCHS(x)		(*(MM32_ADC1_ADCHS*)(x+0x0C))
#define	ADCx_ADCMPR(x)		(*(MM32_ADC1_ADCMPR*)(x+0x10))
#define	ADCx_ADSTA(x)		(*(MM32_ADC1_ADSTA*)(x+0x14))
#define	ADCx_ADDR0(x)		(*(MM32_ADC1_ADDR0*)(x+0x18))
#define	ADCx_ADDR1(x)		(*(MM32_ADC1_ADDR1*)(x+0x1c))
#define	ADCx_ADDR2(x)		(*(MM32_ADC1_ADDR2*)(x+0x20))
#define	ADCx_ADDR3(x)		(*(MM32_ADC1_ADDR3*)(x+0x24))
#define	ADCx_ADDR4(x)		(*(MM32_ADC1_ADDR4*)(x+0x28))
#define	ADCx_ADDR5(x)		(*(MM32_ADC1_ADDR5*)(x+0x2C))
#define	ADCx_ADDR6(x)		(*(MM32_ADC1_ADDR6*)(x+0x30))
#define	ADCx_ADDR7(x)		(*(MM32_ADC1_ADDR7*)(x+0x34))
#define	ADCx_ADDR8(x)		(*(MM32_ADC1_ADDR8*)(x+0x38))
#define	ADCx_ADDR9(x)		(*(MM32_ADC1_ADDR9*)(x+0x3C))
#define	ADCx_ADDR10(x)		(*(MM32_ADC1_ADDR10*)(x+0x40))
#define	ADCx_ADDR11(x)		(*(MM32_ADC1_ADDR11*)(x+0x44))
#define	ADCx_ADDR12(x)		(*(MM32_ADC1_ADDR12*)(x+0x48))
#define	ADCx_ADDR13(x)		(*(MM32_ADC1_ADDR13*)(x+0x4c))
#define	ADCx_ADDR14(x)		(*(MM32_ADC1_ADDR14*)(x+0x50))
#define	ADCx_ADDR15(x)		(*(MM32_ADC1_ADDR15*)(x+0x54))
#define	ADCx_ADSTA_EXT(x)		(*(MM32_ADC1_ADSTA_EXT*)(x+0x58))
#define	ADCx_CHANY0(x)		(*(MM32_ADC1_CHANY0*)(x+0x5C))
#define	ADCx_CHANY1(x)		(*(MM32_ADC1_CHANY1*)(x+0x60))
#define	ADCx_ANY_CFG(x)		(*(MM32_ADC1_ANY_CFG*)(x+0x64))
#define	ADCx_ANY_CR(x)		(*(MM32_ADC1_ANY_CR*)(x+0x68))
#define	ADCx_ADCFG2(x)		(*(MM32_ADC1_ADCFG2*)(x+0x6C))
#define	ADCx_SMPR1(x)		(*(MM32_ADC1_SMPR1*)(x+0x70))
#define	ADCx_SMPR2(x)		(*(MM32_ADC1_SMPR2*)(x+0x74))
#define	ADCx_JOFR0(x)		(*(MM32_ADC1_JOFR0*)(x+0x7C))
#define	ADCx_JOFR1(x)		(*(MM32_ADC1_JOFR1*)(x+0x80))
#define	ADCx_JOFR2(x)		(*(MM32_ADC1_JOFR2*)(x+0x84))
#define	ADCx_JOFR3(x)		(*(MM32_ADC1_JOFR3*)(x+0x88))
#define	ADCx_JSQR(x)		(*(MM32_ADC1_JSQR*)(x+0x8C))
#define	ADCx_JADDATA(x)		(*(MM32_ADC1_JADDATA*)(x+0x90))
#define	ADCx_JDR0(x)		(*(MM32_ADC1_JDR0*)(x+0xB0))
#define	ADCx_JDR1(x)		(*(MM32_ADC1_JDR1*)(x+0xB4))
#define	ADCx_JDR2(x)		(*(MM32_ADC1_JDR2*)(x+0xB8))
#define	ADCx_JDR3(x)		(*(MM32_ADC1_JDR3*)(x+0xBC))

void MM32_ADC_OneShotInit(MM32_ADC_Pin* pin);

uint16_t MM32_ADC_OneShotGetValue(MM32_ADC_Pin* pin);

void MM32_ADC_ScanWithDmaInit(MM32_ADC_Pin* pin);

void MM32_ADC_ScanStart(MM32_ADC_Pin* pin);

void MM32_ADC_ScanStop(MM32_ADC_Pin* pin);

#endif
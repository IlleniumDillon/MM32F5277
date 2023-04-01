#ifndef _MM32_DMA2REGDEF_H_
#define _MM32_DMA2REGDEF_H_

#include "MM32_RegTypedef.h"
//DMA Interrupt Status Register
typedef struct
{
	Strict_32Bit GIF1			:1;
	Strict_32Bit TCIF1			:1;
	Strict_32Bit HTIF1			:1;
	Strict_32Bit TEIF1			:1;
	Strict_32Bit GIF2			:1;
	Strict_32Bit TCIF2			:1;
	Strict_32Bit HTIF2			:1;
	Strict_32Bit TEIF2			:1;
	Strict_32Bit GIF3			:1;
	Strict_32Bit TCIF3			:1;
	Strict_32Bit HTIF3			:1;
	Strict_32Bit TEIF3			:1;
	Strict_32Bit GIF4			:1;
	Strict_32Bit TCIF4			:1;
	Strict_32Bit HTIF4			:1;
	Strict_32Bit TEIF4			:1;
	Strict_32Bit GIF5			:1;
	Strict_32Bit TCIF5			:1;
	Strict_32Bit HTIF5			:1;
	Strict_32Bit TEIF5			:1;
	Strict_32Bit GIF6			:1;
	Strict_32Bit TCIF6			:1;
	Strict_32Bit HTIF6			:1;
	Strict_32Bit TEIF6			:1;
	Strict_32Bit GIF7			:1;
	Strict_32Bit TCIF7			:1;
	Strict_32Bit HTIF7			:1;
	Strict_32Bit TEIF7			:1;
	Strict_32Bit GIF8			:1;
	Strict_32Bit TCIF8			:1;
	Strict_32Bit HTIF8			:1;
	Strict_32Bit TEIF8			:1;
}MM32_DMA2_ISRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DMA2_ISRBits B;
}MM32_DMA2_ISR;

//DMA Interrupt Flag Clear Register
typedef struct
{
	Strict_32Bit CGIF1			:1;
	Strict_32Bit CTCIF1			:1;
	Strict_32Bit CHTIF1			:1;
	Strict_32Bit CTEIF1			:1;
	Strict_32Bit CGIF2			:1;
	Strict_32Bit CTCIF2			:1;
	Strict_32Bit CHTIF2			:1;
	Strict_32Bit CTEIF2			:1;
	Strict_32Bit CGIF3			:1;
	Strict_32Bit CTCIF3			:1;
	Strict_32Bit CHTIF3			:1;
	Strict_32Bit CTEIF3			:1;
	Strict_32Bit CGIF4			:1;
	Strict_32Bit CTCIF4			:1;
	Strict_32Bit CHTIF4			:1;
	Strict_32Bit CTEIF4			:1;
	Strict_32Bit CGIF5			:1;
	Strict_32Bit CTCIF5			:1;
	Strict_32Bit CHTIF5			:1;
	Strict_32Bit CTEIF5			:1;
	Strict_32Bit CGIF6			:1;
	Strict_32Bit CTCIF6			:1;
	Strict_32Bit CHTIF6			:1;
	Strict_32Bit CTEIF6			:1;
	Strict_32Bit CGIF7			:1;
	Strict_32Bit CTCIF7			:1;
	Strict_32Bit CHTIF7			:1;
	Strict_32Bit CTEIF7			:1;
	Strict_32Bit CGIF8			:1;
	Strict_32Bit CTCIF8			:1;
	Strict_32Bit CHTIF8			:1;
	Strict_32Bit CTEIF8			:1;
}MM32_DMA2_IFCRBits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DMA2_IFCRBits B;
}MM32_DMA2_IFCR;

//DMA Channel 1 Configuration Register
typedef struct
{
	Strict_32Bit EN			:1;
	Strict_32Bit TCIE			:1;
	Strict_32Bit HTIE			:1;
	Strict_32Bit TEIE			:1;
	Strict_32Bit DIR			:1;
	Strict_32Bit CIRC			:1;
	Strict_32Bit PINC			:1;
	Strict_32Bit MINC			:1;
	Strict_32Bit PSIZE			:2;
	Strict_32Bit MSIZE			:2;
	Strict_32Bit PL			:2;
	Strict_32Bit MEM2MEM			:1;
	Strict_32Bit ARE			:1;
	Strict_32Bit Burst_en			:1;
	Strict_32Bit _reserved_0			:15;
}MM32_DMA2_CCR1Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DMA2_CCR1Bits B;
}MM32_DMA2_CCR1;

//DMA Channel 1 Transfer Number Register
typedef struct
{
	Strict_32Bit NDT			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_DMA2_CNDTR1Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DMA2_CNDTR1Bits B;
}MM32_DMA2_CNDTR1;

//DMA Channel 1 Peripheral Address Register
typedef struct
{
	Strict_32Bit PA			:32;
}MM32_DMA2_CPAR1Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DMA2_CPAR1Bits B;
}MM32_DMA2_CPAR1;

//DMA Channel 1 Memory Address Register
typedef struct
{
	Strict_32Bit MA			:32;
}MM32_DMA2_CMAR1Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DMA2_CMAR1Bits B;
}MM32_DMA2_CMAR1;

//DMA Channel 1 Configuration Register
typedef struct
{
	Strict_32Bit EN			:1;
	Strict_32Bit TCIE			:1;
	Strict_32Bit HTIE			:1;
	Strict_32Bit TEIE			:1;
	Strict_32Bit DIR			:1;
	Strict_32Bit CIRC			:1;
	Strict_32Bit PINC			:1;
	Strict_32Bit MINC			:1;
	Strict_32Bit PSIZE			:2;
	Strict_32Bit MSIZE			:2;
	Strict_32Bit PL			:2;
	Strict_32Bit MEM2MEM			:1;
	Strict_32Bit ARE			:1;
	Strict_32Bit Burst_en			:1;
	Strict_32Bit _reserved_0			:15;
}MM32_DMA2_CCR2Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DMA2_CCR2Bits B;
}MM32_DMA2_CCR2;

//DMA Channel 1 Transfer Number Register
typedef struct
{
	Strict_32Bit NDT			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_DMA2_CNDTR2Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DMA2_CNDTR2Bits B;
}MM32_DMA2_CNDTR2;

//DMA Channel 1 Peripheral Address Register
typedef struct
{
	Strict_32Bit PA			:32;
}MM32_DMA2_CPAR2Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DMA2_CPAR2Bits B;
}MM32_DMA2_CPAR2;

//DMA Channel 1 Memory Address Register
typedef struct
{
	Strict_32Bit MA			:32;
}MM32_DMA2_CMAR2Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DMA2_CMAR2Bits B;
}MM32_DMA2_CMAR2;

//DMA Channel 1 Configuration Register
typedef struct
{
	Strict_32Bit EN			:1;
	Strict_32Bit TCIE			:1;
	Strict_32Bit HTIE			:1;
	Strict_32Bit TEIE			:1;
	Strict_32Bit DIR			:1;
	Strict_32Bit CIRC			:1;
	Strict_32Bit PINC			:1;
	Strict_32Bit MINC			:1;
	Strict_32Bit PSIZE			:2;
	Strict_32Bit MSIZE			:2;
	Strict_32Bit PL			:2;
	Strict_32Bit MEM2MEM			:1;
	Strict_32Bit ARE			:1;
	Strict_32Bit Burst_en			:1;
	Strict_32Bit _reserved_0			:15;
}MM32_DMA2_CCR3Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DMA2_CCR3Bits B;
}MM32_DMA2_CCR3;

//DMA Channel 1 Transfer Number Register
typedef struct
{
	Strict_32Bit NDT			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_DMA2_CNDTR3Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DMA2_CNDTR3Bits B;
}MM32_DMA2_CNDTR3;

//DMA Channel 1 Peripheral Address Register
typedef struct
{
	Strict_32Bit PA			:32;
}MM32_DMA2_CPAR3Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DMA2_CPAR3Bits B;
}MM32_DMA2_CPAR3;

//DMA Channel 1 Memory Address Register
typedef struct
{
	Strict_32Bit MA			:32;
}MM32_DMA2_CMAR3Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DMA2_CMAR3Bits B;
}MM32_DMA2_CMAR3;

//DMA Channel 1 Configuration Register
typedef struct
{
	Strict_32Bit EN			:1;
	Strict_32Bit TCIE			:1;
	Strict_32Bit HTIE			:1;
	Strict_32Bit TEIE			:1;
	Strict_32Bit DIR			:1;
	Strict_32Bit CIRC			:1;
	Strict_32Bit PINC			:1;
	Strict_32Bit MINC			:1;
	Strict_32Bit PSIZE			:2;
	Strict_32Bit MSIZE			:2;
	Strict_32Bit PL			:2;
	Strict_32Bit MEM2MEM			:1;
	Strict_32Bit ARE			:1;
	Strict_32Bit Burst_en			:1;
	Strict_32Bit _reserved_0			:15;
}MM32_DMA2_CCR4Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DMA2_CCR4Bits B;
}MM32_DMA2_CCR4;

//DMA Channel 1 Transfer Number Register
typedef struct
{
	Strict_32Bit NDT			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_DMA2_CNDTR4Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DMA2_CNDTR4Bits B;
}MM32_DMA2_CNDTR4;

//DMA Channel 1 Peripheral Address Register
typedef struct
{
	Strict_32Bit PA			:32;
}MM32_DMA2_CPAR4Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DMA2_CPAR4Bits B;
}MM32_DMA2_CPAR4;

//DMA Channel 1 Memory Address Register
typedef struct
{
	Strict_32Bit MA			:32;
}MM32_DMA2_CMAR4Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DMA2_CMAR4Bits B;
}MM32_DMA2_CMAR4;

//DMA Channel 1 Configuration Register
typedef struct
{
	Strict_32Bit EN			:1;
	Strict_32Bit TCIE			:1;
	Strict_32Bit HTIE			:1;
	Strict_32Bit TEIE			:1;
	Strict_32Bit DIR			:1;
	Strict_32Bit CIRC			:1;
	Strict_32Bit PINC			:1;
	Strict_32Bit MINC			:1;
	Strict_32Bit PSIZE			:2;
	Strict_32Bit MSIZE			:2;
	Strict_32Bit PL			:2;
	Strict_32Bit MEM2MEM			:1;
	Strict_32Bit ARE			:1;
	Strict_32Bit Burst_en			:1;
	Strict_32Bit _reserved_0			:15;
}MM32_DMA2_CCR5Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DMA2_CCR5Bits B;
}MM32_DMA2_CCR5;

//DMA Channel 1 Transfer Number Register
typedef struct
{
	Strict_32Bit NDT			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_DMA2_CNDTR5Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DMA2_CNDTR5Bits B;
}MM32_DMA2_CNDTR5;

//DMA Channel 1 Peripheral Address Register
typedef struct
{
	Strict_32Bit PA			:32;
}MM32_DMA2_CPAR5Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DMA2_CPAR5Bits B;
}MM32_DMA2_CPAR5;

//DMA Channel 1 Memory Address Register
typedef struct
{
	Strict_32Bit MA			:32;
}MM32_DMA2_CMAR5Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DMA2_CMAR5Bits B;
}MM32_DMA2_CMAR5;

//DMA Channel 1 Configuration Register
typedef struct
{
	Strict_32Bit EN			:1;
	Strict_32Bit TCIE			:1;
	Strict_32Bit HTIE			:1;
	Strict_32Bit TEIE			:1;
	Strict_32Bit DIR			:1;
	Strict_32Bit CIRC			:1;
	Strict_32Bit PINC			:1;
	Strict_32Bit MINC			:1;
	Strict_32Bit PSIZE			:2;
	Strict_32Bit MSIZE			:2;
	Strict_32Bit PL			:2;
	Strict_32Bit MEM2MEM			:1;
	Strict_32Bit ARE			:1;
	Strict_32Bit Burst_en			:1;
	Strict_32Bit _reserved_0			:15;
}MM32_DMA2_CCR6Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DMA2_CCR6Bits B;
}MM32_DMA2_CCR6;

//DMA Channel 1 Transfer Number Register
typedef struct
{
	Strict_32Bit NDT			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_DMA2_CNDTR6Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DMA2_CNDTR6Bits B;
}MM32_DMA2_CNDTR6;

//DMA Channel 1 Peripheral Address Register
typedef struct
{
	Strict_32Bit PA			:32;
}MM32_DMA2_CPAR6Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DMA2_CPAR6Bits B;
}MM32_DMA2_CPAR6;

//DMA Channel 1 Memory Address Register
typedef struct
{
	Strict_32Bit MA			:32;
}MM32_DMA2_CMAR6Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DMA2_CMAR6Bits B;
}MM32_DMA2_CMAR6;

//DMA Channel 1 Configuration Register
typedef struct
{
	Strict_32Bit EN			:1;
	Strict_32Bit TCIE			:1;
	Strict_32Bit HTIE			:1;
	Strict_32Bit TEIE			:1;
	Strict_32Bit DIR			:1;
	Strict_32Bit CIRC			:1;
	Strict_32Bit PINC			:1;
	Strict_32Bit MINC			:1;
	Strict_32Bit PSIZE			:2;
	Strict_32Bit MSIZE			:2;
	Strict_32Bit PL			:2;
	Strict_32Bit MEM2MEM			:1;
	Strict_32Bit ARE			:1;
	Strict_32Bit Burst_en			:1;
	Strict_32Bit _reserved_0			:15;
}MM32_DMA2_CCR7Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DMA2_CCR7Bits B;
}MM32_DMA2_CCR7;

//DMA Channel 1 Transfer Number Register
typedef struct
{
	Strict_32Bit NDT			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_DMA2_CNDTR7Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DMA2_CNDTR7Bits B;
}MM32_DMA2_CNDTR7;

//DMA Channel 1 Peripheral Address Register
typedef struct
{
	Strict_32Bit PA			:32;
}MM32_DMA2_CPAR7Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DMA2_CPAR7Bits B;
}MM32_DMA2_CPAR7;

//DMA Channel 1 Memory Address Register
typedef struct
{
	Strict_32Bit MA			:32;
}MM32_DMA2_CMAR7Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DMA2_CMAR7Bits B;
}MM32_DMA2_CMAR7;

//DMA Channel 1 Configuration Register
typedef struct
{
	Strict_32Bit EN			:1;
	Strict_32Bit TCIE			:1;
	Strict_32Bit HTIE			:1;
	Strict_32Bit TEIE			:1;
	Strict_32Bit DIR			:1;
	Strict_32Bit CIRC			:1;
	Strict_32Bit PINC			:1;
	Strict_32Bit MINC			:1;
	Strict_32Bit PSIZE			:2;
	Strict_32Bit MSIZE			:2;
	Strict_32Bit PL			:2;
	Strict_32Bit MEM2MEM			:1;
	Strict_32Bit ARE			:1;
	Strict_32Bit Burst_en			:1;
	Strict_32Bit _reserved_0			:15;
}MM32_DMA2_CCR8Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DMA2_CCR8Bits B;
}MM32_DMA2_CCR8;

//DMA Channel 1 Transfer Number Register
typedef struct
{
	Strict_32Bit NDT			:16;
	Strict_32Bit _reserved_0			:16;
}MM32_DMA2_CNDTR8Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DMA2_CNDTR8Bits B;
}MM32_DMA2_CNDTR8;

//DMA Channel 1 Peripheral Address Register
typedef struct
{
	Strict_32Bit PA			:32;
}MM32_DMA2_CPAR8Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DMA2_CPAR8Bits B;
}MM32_DMA2_CPAR8;

//DMA Channel 1 Memory Address Register
typedef struct
{
	Strict_32Bit MA			:32;
}MM32_DMA2_CMAR8Bits;

typedef union
{
	int32_t I;
	uint32_t U;
	MM32_DMA2_CMAR8Bits B;
}MM32_DMA2_CMAR8;


#endif

#ifndef __PDK_PERIPH_TIMER16_H__
#define __PDK_PERIPH_TIMER16_H__

// T16 (Timer16 Mode) register definitions
#define T16_INT_SRC_BIT0             0
#define T16_CLK_DIV_BIT0             3
#define T16_CLK_SRC_BIT0             5

// Interrupt source
#define T16_INTSRC_8BIT              0x00
#define T16_INTSRC_9BIT              (1 << T16_INT_SRC_BIT0)
#define T16_INTSRC_10BIT             (2 << T16_INT_SRC_BIT0)
#define T16_INTSRC_11BIT             (3 << T16_INT_SRC_BIT0)
#define T16_INTSRC_12BIT             (4 << T16_INT_SRC_BIT0)
#define T16_INTSRC_13BIT             (5 << T16_INT_SRC_BIT0)
#define T16_INTSRC_14BIT             (6 << T16_INT_SRC_BIT0)
#define T16_INTSRC_15BIT             (7 << T16_INT_SRC_BIT0)

// Clock divider
#define T16_CLK_DIV1                 0x00
#define T16_CLK_DIV4                 (1 << T16_CLK_DIV_BIT0)
#define T16_CLK_DIV16                (2 << T16_CLK_DIV_BIT0)
#define T16_CLK_DIV64                (3 << T16_CLK_DIV_BIT0)

// Clock source
#define T16_CLK_DISABLE              0x00
#define T16_CLK_SYSCLK               (1 << T16_CLK_SRC_BIT0)
//0x02 reserved
#define T16_CLK_PA4_FALL             (3 << T16_CLK_SRC_BIT0)
#define T16_CLK_IHRC                 (4 << T16_CLK_SRC_BIT0)
#if defined(HAS_EOSC)
  #define T16_CLK_EOSC                 (5 << T16_CLK_SRC_BIT0)
#endif
#define T16_CLK_ILRC                 (6 << T16_CLK_SRC_BIT0)
#define T16_CLK_PA0_FALL             (7 << T16_CLK_SRC_BIT0)

#endif //__PDK_PERIPH_TIMER16_H__

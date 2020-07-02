#ifndef __PDK_IO_PMS152_H__
#define __PDK_IO_PMS152_H__

#if !defined(__PDK_IO_H__)
#  error "You must #include "pdk/io.h" instead of "pdk/io_pms152.h" by itself."
#endif

#ifndef __PDK__IO_XXX_H_
#  define __PDK_IO_XXX_H_ "io_pfs152.h"
#else
#  error "Attempt to include more than one "pdk/io_XXX.h" file."
#endif 

#if !defined __SDCC_pdk14
#  error "PFS152 needs the PDK14 backend. You must compile with the -mpdk14 option."
#endif

#define ILRC_FREQ           55000

// Factory Calibration address locations
#define FACTORY_BGTR_ADDR   0x04f6


// FUSE definitions
#define FUSE_WORD_ADDR      0x04ff
#define FUSE_RES_BITS_HIGH  0x11FC // - - 0 1   B B 0 1   1 1 1 1   1 1 0 S
// Blank IC Values          0x1FFD // - - 0 1   1 1 1 1   1 1 1 1   1 1 0 1 (Security Off, Fast Boot-up)
#define FUSE_SECURITY_ON   0x0000 //(S)
#define FUSE_SECURITY_OFF  0x0001
#define FUSE_BOOTUP_SLOW   0x0000 //(B)
#define FUSE_BOOTUP_FAST   0x0C00


// Register address definitions
#define FLAG_ADDR           0x00
//0x01
#define SP_ADDR             0x02
#define CLKMD_ADDR          0x03
#define INTEN_ADDR          0x04
#define INTRQ_ADDR          0x05
#define T16M_ADDR           0x06
//0x07
#define MISC_ADDR           0x08
#define TM2B_ADDR           0x09
#define EOSCR_ADDR          0x0a
#define IHRCR_ADDR          0x0b
#define INTEGS_ADDR         0x0c
#define PADIER_ADDR         0x0d
#define PBDIER_ADDR         0x0e
#define MISC2_ADDR          0x0f
#define PA_ADDR             0x10
#define PAC_ADDR            0x11
#define PAPH_ADDR           0x12
//0x13
#define PB_ADDR             0x14
#define PBC_ADDR            0x15
#define PBPH_ADDR           0x16
#define TM2S_ADDR           0x17
#define GPCC_ADDR           0x18
#define GPCS_ADDR           0x19
#define BGTR_ADDR           0x1a
#define MISCLVR_ADDR        0x1b
#define TM2C_ADDR           0x1c
#define TM2CT_ADDR          0x1d
//0x1e
//0x1f
#define PWMG0C_ADDR         0x20
#define PWMGCLK_ADDR        0x21
#define PWMG0DTH_ADDR       0x22
#define PWMG0DTL_ADDR       0x23
#define PWMGCUBH_ADDR       0x24
#define PWMGCUBL_ADDR       0x25
#define PWMG1C_ADDR         0x26
//0x47
#define PWMG1DTH_ADDR       0x28
#define PWMG1DTL_ADDR       0x29
//0x4a
//0x4b
#define PWMG2C_ADDR         0x2c
//0x4d
#define PWMG2DTH_ADDR       0x2e
#define PWMG2DTL_ADDR       0x2f
//0x30
//...
//0x38
#define ILRCR_ADDR          0x39
#define ROP_ADDR            0x3a
//0x3b
//...
//0x3f


// Peripheral definitions
#define HAS_EOSC
#define HAS_PORTB
#define HAS_PB5_PA4_INT
#define HAS_PWMG

#include "periph/accumulator.h"
#include "periph/clock.h"
#include "periph/external_oscillator.h"
#include "periph/interrupt.h"
#include "periph/timer16.h"
#include "periph/timer2.h"
#include "periph/comparator.h"
#include "periph/pwmg_basic.h"
#include "periph/misc.h"
#include "periph/misc2.h"
#include "periph/misclvr.h"

#endif //__PDK_IO_PMS152_H__

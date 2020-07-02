#ifndef __PDK_DEVICE_PERIPH_EXTERNAL_OSCILLATOR_H__
#define __PDK_DEVICE_PERIPH_EXTERNAL_OSCILLATOR_H__

#if !defined(__PDK_IO_H__)
#  error "You must #include "pdk/io.h" instead of "pdk/device/periph/exernal_oscillator.h" by itself."
#endif

// EOSC (External Oscillator Setting) register definitions
#define EOSC_BG_LVR_SHUTDOWN_BIT     0
#if defined(HAS_EOSC)
  #define EOSC_CRYSTAL_SEL_BIT0        5
  #define EOSC_ENABLE_BIT              7
#endif

#define EOSC_BG_LVR_SHUTDOWN         (1 << EOSC_BG_LVR_SHUTDOWN_BIT)
#if defined(HAS_EOSC)
  #define EOSC_32KHZ_CRYSTAL           (1 << EOSC_CRYSTAL_SEL_BIT0)
  #define EOSC_1MHZ_CRYSTAL            (2 << EOSC_CRYSTAL_SEL_BIT0)
  #define EOSC_4MHZ_CRYSTAL            (3 << EOSC_CRYSTAL_SEL_BIT0)
  #define EOSC_ENABLE                  (1 << EOSC_BG_LVR_SHUTDOWN_BIT)
#endif

#endif //__PDK_DEVICE_PERIPH_EXTERNAL_OSCILLATOR_H__
#pragma once

#define MMA8653_ADDRESS    0x1D

#define STATUS             0x00    // Real time status
#define OUT_X_MSB          0x01    // [7:0] are 8 MSBs of 10-bit real-time sample
#define OUT_X_LSB          0x02    // [7:6] are 2 LSBs of 10-bit real-time sample
#define OUT_Y_MSB          0x03    // [7:0] are 8 MSBs of 10-bit real-time sample
#define OUT_Y_LSB          0x04    // [7:6] are 2 LSBs of 10-bit real-time sample
#define OUT_Z_MSB          0x05    // [7:0] are 8 MSBs of 10-bit real-time sample
#define OUT_Z_LSB          0x06    // [7:6] are 2 LSBs of 10-bit real-time sample

#define SYSMOD             0x0B    // Current System Mode
#define INT_SOURCE         0x0C    // Interrupt status
#define WHO_AM_I           0x0D    // Device ID (0x5A)
#define XYZ_DATA_CFG       0x0E    // Dynamic Range Settings

#define PL_STATUS          0x10    // Landscape/Portrait orientation status
#define PL_CFG             0x11    // Landscape/Portrait configuration.
#define PL_COUNT           0x12    // Landscape/Portrait debounce counter
#define PL_BF_ZCOMP        0x13    // Back/Front, Z-Lock Trip threshold
#define PL_THS_REG         0x14    // Portrait to Landscape Trip angle
#define FF_MT_CFG          0x15    // Freefall/Motion functional block configuration
#define FF_MT_SRC          0x16    // Freefall/Motion event source register
#define FF_MT_THS          0x17    // Freefall/Motion threshold register
#define FF_MT_COUNT        0x18    // Freefall/Motion debounce counter

#define ASLP_COUNT         0x29    // Counter setting for Auto-SLEEP/WAKE
#define CTRL_REG1          0x2A    // Data Rates, ACTIVE Mode.
#define CTRL_REG2          0x2B    // Sleep Enable, OS Modes, RST, ST
#define CTRL_REG3          0x2C    // Wake from Sleep, IPOL, PP_OD
#define CTRL_REG4          0x2D    // Interrupt enable register
#define CTRL_REG5          0x2E    // Interrupt pin (INT1/INT2) map
#define OFF_X              0x2F    // X-axis offset adjust
#define OFF_Y              0x30    // Y-axis offset adjust
#define OFF_Z              0x31    // Z-axis offset adjust


#define XYZ_DATA_CFG_2G    0x00
#define XYZ_DATA_CFG_4G    0x01
#define XYZ_DATA_CFG_8G    0x02

#define CTRL_REG1_ACTIVE   0x01                            // Full-scale selection
#define CTRL_REG1_F_READ   0x02                            // Fast Read Mode
#define CTRL_REG1_DR(n)    (uint8_t)(((n) & 0x07) << 3)    // Data rate selection
#define CTRL_REG1_ASLP_RATE(n) (uint8_t)(((n) & 0x03) << 6)// Auto-WAKE sample frequency

#define CTRL_REG2_ST       0x80                            // Self-Test Enable
#define CTRL_REG2_RST      0x40                            // Software Reset
#define CTRL_REG2_SMODS(n) (uint8_t)(((n) & 0x03) << 3)    // SLEEP mode power scheme selection
#define CTRL_REG2_SLPE     0x02                            // Auto-SLEEP enable
#define CTRL_REG2_MODS(n)  (uint8_t)(((n) & 0x03))         // ACTIVE mode power scheme selection

#define CTRL_REG3_PP_OD         0x01
#define CTRL_REG3_IPOL          0x02
#define CTRL_REG3_WAKE_FF_MT    0x08
#define CTRL_REG3_WAKE_LNDPRT   0x20

#define CTRL_REG4_INT_EN_DRDY   0x01
#define CTRL_REG4_INT_EN_FF_MT  0x04
#define CTRL_REG4_INT_EN_LNDPRT 0x10
#define CTRL_REG4_INT_EN_ASLP   0x80

#define CTRL_REG5_INT_CFG_DRDY   0x01
#define CTRL_REG5_INT_CFG_FF_MT  0x04
#define CTRL_REG5_INT_CFG_LNDPRT 0x10
#define CTRL_REG5_INT_CFG_ASLP   0x80


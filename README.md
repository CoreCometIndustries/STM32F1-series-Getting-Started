# STM32F1-series-Getting-Started
# STM32F1 Getting Started (Arduino IDE)

This repository contains simple and clear STM32F1 examples for the Arduino IDE.

## Requirements
- STM32F1 board (e.g., Blue Pill STM32F103C8T6)
- Arduino IDE with STM32 board package installed:
  1. Open Arduino IDE → File → Preferences
  2. Add this URL in *Additional Boards Manager URLs*:
     `https://github.com/stm32duino/BoardManagerFiles/raw/main/package_stmicroelectronics_index.json`
  3. Tools → Board → Board Manager → Search "STM32" → Install **STM32 by STMicroelectronics**
- ST-Link programmer or USB-to-Serial adapter

## Examples
- Blink on PC13
- UART serial print
- ADC read
- PWM output
- I2C scanner

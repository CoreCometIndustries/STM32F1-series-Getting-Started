
# STM32F1 Getting Started (Arduino IDE)

This repository contains simple and clear STM32F1 examples for the Arduino IDE.

## Requirements
- STM32F1 board (e.g., Blue Pill STM32F103C8T6)
- Arduino IDE with STM32 board package installed:
  1. Open Arduino IDE → File → Preferences
  2. Add this URL in *Additional Boards Manager URLs*:
     `https://github.com/stm32duino/BoardManagerFiles/raw/main/package_stmicroelectronics_index.json`
  3. Tools → Board → Board Manager → Search "STM32" → Install **STM32 by STMicroelectronics**
- STMcubeprogrammer(serial) 

 ## Upload Process
1. Open any .ino file (like Blink_PC13.ino from the ZIP).
2. Press Upload in Arduino IDE.
3. While uploading:
  -Press and release RESET button on the board if upload doesn’t start automatically.
4. Once upload is done:
  -Set BOOT0 = 0 back to normal mode.
  -Press RESET again to run your code.


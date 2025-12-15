# Pico SDK

This test environment uses [Raspberry Pi Pico SDK](https://www.raspberrypi.com/documentation/microcontrollers/c_sdk.html) to test the [Universal Hardware Timer](https://github.com/CamrenChraplak/universal_hardware_timer) library. In release mode, the output is printed using `printf` functionality. In test mode, the output is printed using [Unity](https://github.com/ThrowTheSwitch/Unity)'s internal functions.

## Setup:

- Copy and rename either `CMakeLists_non_unity.txt` or `CMakeLists_unity.txt` to `CMakeLists.txt`
  - The VSCode `Raspberry Pi Pico` extension won't load a project until it locates a `CMakeLists.txt`
- Select the board type of the pico
  - Manually change `CMakeLists.txt`
    - On line 26 with `set(PICO_BOARD pico CACHE STRING "Board type")`, change `pico` to the desired board
  - Change board through the VSCode `Raspberry Pi Pico` extension
    - Click on `Switch Board` in the extension and select the desired board
- Build and run on chosen platform
- Monitor the USB Serial output through desired interface
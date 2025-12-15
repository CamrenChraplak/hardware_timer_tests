# ESP-IDF

This test environment uses [ESP-IDF](https://docs.espressif.com/projects/esp-idf/en/stable/esp32/get-started/index.html) to test the [Universal Hardware Timer](https://github.com/CamrenChraplak/universal_hardware_timer) library. In release mode, the output is printed using Arduino's `printf` functionality. In test mode, the output is printed using [Unity](https://github.com/ThrowTheSwitch/Unity)'s internal functions. Setup instructions assume that the [ESP-IDF VSCode extension is installed](https://docs.espressif.com/projects/vscode-esp-idf-extension/en/latest/).

## Setup:

TODO: Switching between platforms<br>
TODO: Using command line

- Run `git submodule update --init` in root folder to download `universal_hardware_timer`
- Build and run on chosen platform
  - Run through main project
    - Press the `Build Project` ESP-IDF button to compile project
	- Press the `Flash Device` ESP-IDF button to flash project
	- Press the `Monitor Device` ESP-IDF button to monitor output
  - Run through Unity
    - Bring up command pallete (Ctrl-Shift-P)
	- Run `ESP-IDF: Unit Test: Build and Flash Unit Test App for Testing`
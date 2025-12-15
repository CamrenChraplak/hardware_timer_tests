# PlatformIO

This test environment uses [PlatformIO](https://platformio.org/) to test the [Universal Hardware Timer](https://github.com/CamrenChraplak/universal_hardware_timer) library. In release mode, the output is printed using Arduino's `Serial.print` functionality at a baud rate of `115200`. In test mode, the output is printed using [Unity](https://github.com/ThrowTheSwitch/Unity)'s internal functions. Setup instructions assume that the [PlatformIO VSCode extension is installed](https://platformio.org/install/integration).

## Setup:

TODO: Using command line

- Copy and rename `platformio.ini.txt` to `platformio.ini`
- On line 38, replace `uno` with the selected board environment from the `ini` folder
- On line 28, replace `test` with `release` if desired
  - default_envs = test
    - Press the `test` PlatformIO button to run Unity environment
  - default_envs = release
    - Press the `upload` PlatformIO button to run Arduino environment
	- Monitor through the `monitor` PlatformIO button
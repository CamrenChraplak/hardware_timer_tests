# Generated Cmake Pico project file

cmake_minimum_required(VERSION 3.13)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Initialise pico_sdk from installed location
# (note this can come from environment, CMake cache etc)

# == DO NOT EDIT THE FOLLOWING LINES for the Raspberry Pi Pico VS Code Extension to work ==
if(WIN32)
    set(USERHOME $ENV{USERPROFILE})
else()
    set(USERHOME $ENV{HOME})
endif()
set(sdkVersion 2.2.0)
set(toolchainVersion 14_2_Rel1)
set(picotoolVersion 2.2.0-a4)
set(picoVscode ${USERHOME}/.pico-sdk/cmake/pico-vscode.cmake)
if (EXISTS ${picoVscode})
    include(${picoVscode})
endif()
# ====================================================================================
set(PICO_BOARD pico CACHE STRING "Board type")

# Pull in Raspberry Pi Pico SDK (must be before project)
include(pico_sdk_import.cmake)

project(pico_sdk_hardware_timer C CXX ASM)

# Initialise the Raspberry Pi Pico SDK
pico_sdk_init()

# Sub directories for user created libraries
add_subdirectory(hardware_timer)
add_subdirectory(Unity)

# Add executable. Default name is the project name, version 0.1
add_executable(pico_sdk_hardware_timer pico_sdk_hardware_timer.c )

pico_set_program_name(pico_sdk_hardware_timer "pico_sdk_hardware_timer")
pico_set_program_version(pico_sdk_hardware_timer "0.1")

# Modify the below lines to enable/disable output over UART/USB
pico_enable_stdio_uart(pico_sdk_hardware_timer 0)
pico_enable_stdio_usb(pico_sdk_hardware_timer 1)

# Add the standard library to the build
target_link_libraries(pico_sdk_hardware_timer
        pico_stdlib)

# Add the standard include files to the build
target_include_directories(pico_sdk_hardware_timer PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}
)

# Add any user requested libraries
if(PICO_BOARD STREQUAL "pico_w" OR PICO_BOARD STREQUAL "pico2_w")
    target_link_libraries(pico_sdk_hardware_timer 
            pico_cyw43_arch_none
            custom_hardware_timer
            unity
            )
else()
    target_link_libraries(pico_sdk_hardware_timer 
            custom_hardware_timer
            unity
            )
endif()

add_compile_definitions(PICO_SDK_UNIT_TESTING=1)

pico_add_extra_outputs(pico_sdk_hardware_timer)


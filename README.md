# LVGL ported to the 7-inch Riverdi STM32 Embedded Displays (STM32H757XIH86)

## Overview

STM32 Embedded 7.0” display is all-in-one complete and open-platform solution being able to independently handle the visual layer of devices with the need for high computing performance. The STM32 Embedded Displays series are industrial-quality LCD-TFT solutions based on the STM32H757XIH6 microcontroller. It has been designed in a way that allows to meet most of the hardware and programming challenges faced by engineers, including access to all interfaces.

## Buy

You can purchase the 7-inch Riverdi STM32 Embedded Displays from several sources:

- [Riverdi's website](https://riverdi.com/product/7-inch-lcd-display-capacitive-touch-panel-optical-bonding-uxtouch-stm32h7-rvt70hssnwc00-b)
- [Mouser](https://www.mouser.pl/c/?q=RVT70HSS)
- [TME](https://www.tme.com/us/en-us/katalog/intelligent-displays-modules_113439/?params=2:968;1134:1478578;1132:1584266;1136:1904411) 

## Benchmark

TODO: add buffer configuration

[![image](https://github.com/lvgl/lv_port_riverdi_70-stm32h7/assets/7599318/88fd9a26-ec84-4f7b-98e8-313cf6a2568f)](![image](https://github.com/lvgl/lv_port_riverdi_70-stm32h7/assets/7599318/cad4801b-928b-4b11-bb2a-8f987625acc9))

## Specification
### CPU and memory

- **MCU** STM32H757XIH6 (Cortex-M7 + M4 core, 480MHz)
- **RAM** 1MB internal, 8MB external (32 bit access)
- **Flash** 2MB internal, 64MB external flash
- **GPU** Chrom-ART (DMA2D)

### Display

- **Resolution** 1024x600
- **Display size** 7"
- **Interface** MIPI
- **Color depth** 24bit
- **Technology** IPS
- **DPI** 170 px/inch
- **Touch pad** Industrial Capacitive or no touch

### Others

- RS485, RS232
- Expansion connector (40 GPIOs to access 2x I2C, 1x UART, 1x USART, 1x SPI, 1x USB, 7x PWMs, 2x DACs, 2x ADCs)
- 2x CAN FD
- RiBUS connector
- USB
- Haptic feedback driver output (DRV2605L)

## Getting started

### Hardware setup
- TODO: Connect power supply (port, voltage)
- TODO: Connect debugger
  
### Software setup
- Install [STM32 CubeIDE](https://www.st.com/en/development-tools/stm32cubeide.html)

### Run the project
- Clone the project: `git clone --recursive https://github.com/lvgl/lv_port_riverdi_70-stm32h7`
- Open *STM32CubeIDE* and import project:` File => Open Projects from File System... => Directory => Select the "riverdi-70-stm32h7-lvgl/STM32CubeIde" folder => Finish`
- Build the project (for the best performance, please use *Release* configuration with *-Ofast* flag): `Project => Build all`
- Click the ![image](https://github.com/lvgl/lv_port_riverdi_70-stm32h7/assets/7599318/ad1ba904-f917-4e0c-97b3-1c1ca12cf185) Run button to flash the project
    
### Debugging
- After building the project click the Debug button ![image](https://github.com/lvgl/lv_port_riverdi_70-stm32h7/assets/7599318/369e95fb-dbfb-44d8-9250-0a5f3f8bfc60) to flash the project

## Notes
This repository supports all configuration of 7-inch *Riverdi STM32 Embedded Displays*:
- [*RVT70HSSNWC00-B*](https://riverdi.com/product/7-inch-lcd-display-capacitive-touch-panel-optical-bonding-uxtouch-stm32h7-rvt70hssnwc00-b/) - *STM32H757XIH86, Capacitive Touch Panel, Optical bonding, uxTouch*
- [*RVT70HSSNWC00*](https://riverdi.com/product/7-inch-lcd-display-capacitive-touch-panel-air-bonding-uxtouch-stm32h7-rvt70hssnwc00/) - *STM32H757XIH86, Capacitive Touch Panel, Air bonding, uxTouch*
- [*RVT70HSSFWCA0*](https://riverdi.com/product/7-inch-lcd-display-capacitive-touch-panel-air-bonding-atouch-frame-stm32h7-rvt70hssfwca0/) - *STM32H757XIH86, Capacitive Touch Panel, Air bonding, aTouch*
- [*RVT70HSSNWCA0*](https://riverdi.com/product/7-inch-lcd-display-capacitive-touch-panel-air-bonding-atouch-stm32h7-rvt70hssnwca0/) - *STM32H757XIH86, Capacitive Touch Panel, Air bonding, aTouch*
- [*RVT70HSSFWN00*](https://riverdi.com/product/7-inch-lcd-display-stm32h7-frame-rvt70hssfwn00/) - *STM32H757XIH86*
- [*RVT70HSSNWN00*](https://riverdi.com/product/7-inch-lcd-display-stm32h7-rvt70hssnwn00/) - *STM32H757XIH86*


## Contribution and Support

If you find any issues with the development board feel free to open an Issue in this repository. For LVGL related issues (features, bugs, etc) please use the main [lvgl repository](https://github.com/lvgl/lvgl).

If you found a bug and found a solution too please send a Pull request. If you are new to Pull requests refer to [Our Guide](https://docs.lvgl.io/master/CONTRIBUTING.html#pull-request) to learn the basics.

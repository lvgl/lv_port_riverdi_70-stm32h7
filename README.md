---
layout: post
title: Riverdi 7-inch STM32 Embedded Display - board certification review
author: "kisvegabor"
cover: /assets/cover_cert_gold.webp
---

# LVGL port for the 7-inch Riverdi STM32 Embedded Displays (STM32H757XIH86)

This repository contains the __Light and Versatile Graphics Library (LVGL)__ port for the __7-inch Riverdi STM32 Embedded Displays__ with *STM32H757XIH86* MCU. It's ready-to-use project template which you can easily import into *STM32CubeIDE* and *STM32CubeMX* (to reconfigure selected peripherals). This project uses the master LVGL release (at the time or writing v9.1.1). It is based on the [LVGL example](https://github.com/riverdi/riverdi-70-stm32h7-lvgl) provided by Riverdi, but this repository is maintained by LVGL.

For more info about LVGL (docs, API, tutorials) please visit [*https://lvgl.io/*](https://lvgl.io/) and [*https://github.com/lvgl/lvgl*](https://github.com/lvgl/lvgl)

![img1](/Docs/img_1.png)

This repository supports all configuration of 7-inch *Riverdi STM32 Embedded Displays*:

* [*RVT70HSSNWC00-B*](https://riverdi.com/product/7-inch-lcd-display-capacitive-touch-panel-optical-bonding-uxtouch-stm32h7-rvt70hssnwc00-b/) - *STM32H757XIH86, Capacitive Touch Panel, Optical bonding, uxTouch*
* [*RVT70HSSNWC00*](https://riverdi.com/product/7-inch-lcd-display-capacitive-touch-panel-air-bonding-uxtouch-stm32h7-rvt70hssnwc00/) - *STM32H757XIH86, Capacitive Touch Panel, Air bonding, uxTouch*
* [*RVT70HSSFWCA0*](https://riverdi.com/product/7-inch-lcd-display-capacitive-touch-panel-air-bonding-atouch-frame-stm32h7-rvt70hssfwca0/) - *STM32H757XIH86, Capacitive Touch Panel, Air bonding, aTouch*
* [*RVT70HSSNWCA0*](https://riverdi.com/product/7-inch-lcd-display-capacitive-touch-panel-air-bonding-atouch-stm32h7-rvt70hssnwca0/) - *STM32H757XIH86, Capacitive Touch Panel, Air bonding, aTouch*
* [*RVT70HSSFWN00*](https://riverdi.com/product/7-inch-lcd-display-stm32h7-frame-rvt70hssfwn00/) - *STM32H757XIH86*
* [*RVT70HSSNWN00*](https://riverdi.com/product/7-inch-lcd-display-stm32h7-rvt70hssnwn00/) - *STM32H757XIH86*

For LVGL project templates for 5-inch and 10.1-inch *Riverdi STM32 Embedded Displays*, please visit:

* [*riverdi-50-stm32u5-lvgl*](https://github.com/lvgl/lv_port_riverdi_stm32u5)
* [*riverdi-101-stm32h7-lvgl*](https://github.com/lvgl/lv_port_riverdi_101-stm32h7)

## How to import this project to STM32CubeIDE:

[1] Clone this respository (do not forget about *--recursive* flag!):
```
git clone --recursive https://github.com/lvgl/lv_port_riverdi_70-stm32h7
```
[2] Open *STM32CubeIDE* and import project:
```
File => Open Projects from File System... => Directory => Select the "riverdi-70-stm32h7-lvgl/STM32CubeIde" folder => Finish
```
[3] Build the project (for the best performance, please use *Release* configuration with *-Ofast* flag):
```
Project => Build all
```
[4] Upload the firmware to the *Riverdi STM32 Embedded Display*

## What is Riverdi STM32 Embedded Display?

[*Riverdi’s Display STM32 Embedded*](https://riverdi.com/product-category/stm32-embedded-displays/?pr=26938) product series are a comprehensive solution for a variety of applications. With high resolution, high brightness, and a host of features, these displays are designed to meet the most demanding requirements.

Riverdi offers a variety of STM32 touch screen displays, including a brand new 5-inch STM32 display modules in its top-tier embedded screen solutions. With the STM32 7-inch LCD and 10.1-inch STM32 TFT display already on the market, the Riverdi LCD Display STM32 Embedded series is the all-in-one HMI solution well-suited for the most demanding applications.

The STM32 Embedded Displays are not just a product, they are an ecosystem based on the industrial-quality LCD-TFT displays with high-brightness, high-resolution, and industrial touchscreen, the performance and interfaces offered by the STM32 microcontrollers, and the comprehensive technical support with free software and libraries.

## 7-inch Riverdi STM32 Embedded Display

Main features of the 7-inch __Riverdi STM32 Embedded Display__:

* 7-inch TFT display
* 1024x600px resolution
* High brightness 800cd/m2
* Full viewing angles (IPS)
* STM32H757XIH6 (2MB Flash, 1MB RAM) microcontroller
* All STM32H7 interfaces
* Industrial projected capacitive touch screen
* Black decorative cover glass
* High quality – zero bad pixels
* 64MB QSPI
* 8MB SDRAM
* TouchGFX and LVGL direct support
* Power Supply: 6V-48V

![img2](/Docs/img_2.png)

* __RS485__
* __RS232__
* __Expansion connector__ - the board offers additional and independent GPIOs over a 40pin, 1.27mm male header. It provides direct access to the GPIOs of MCU STM32, that makes it possible to be easily extended by an addon board for specific application (2x I2C, 1x UART, 1x USART, 1x SPI, 1x USB, 7x PWMs, 2x DACs, 2x ADCs)
* __Fully independent 2x CAN FD__ - applicable in industrial and automotive area
* __Fast-programming SWD port__ - SWD connector allows to program STM32 and QSPI with customer’s applications. Riverdi developed the ST-LINK programming cable that is included in the STM32 Embedded Display sample package (single packing)
* __RiBUS connector__ - in some applications there might be a need to connect a second display in one device. With the STM32 Embedded Display line it is very easy as these displays are equipped with Master RiBUS connector – universal interface to Riverdi’s intelligent displays. In this way, the second display does nots need an external host controller and 2 independent displays can be controlled by one STM32
* __USB__ - can be configured to both Host and Device
* __Haptic feedback driver output__ - a DRV2605L haptic driver on the board (on I2C1) can be used to drive ERM and LRA haptic motors. Enhances feedback and conveys useful information to the users
## Specifications

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

## LVGL Certified Board

<img src="https://lvgl.io/assets/images/cert_pro.png" alt="Professional LVGL certificate for Riverdi STM32 Embedded 7.0 display">

The 7-inch Riverdi STM32 Embedded Display board earned Professional LVGL Board Certificate, which means that users can use it to create amazing user interfaces without worrying about performance and quality.

<iframe width="560" height="315" src="https://www.youtube.com/embed/Uly8U6KlTzE" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" allowfullscreen></iframe>

## Performance

As you can see from the video it's clear that you won't have any issues with performance. 

### Frame rate (FPS)

We have measured a stable 33 FPS with ~50% CPU load. Even in the case of the jumping strides the CPU usage peaked at about 60%.

In the video a very simple yet effective buffering strategy was used. There is a single frame buffer, 60 lines of draw buffer for LVGL, and DMA2D (Chrom-ART) is used to copy the rendered image from the draw buffer to the frame buffer.

### Memory

In the end, the aforementioned draw buffer utilizes 64 x 1024 x 4 = 256kB of internal RAM from the available 1MB.

The remaining internal RAM can be allocated for application use, or to load images or fonts from an SD card or external flash. The external RAM serves a similar purpose.

A single frame buffer with a 32-bit color depth (as LVGL does not directly support 24-bit output) requires 1024 x 600 x 4 = 2.3 MB of RAM. Unfortunately, this size exceeds the capacity of the internal RAM. However, the 8 MB external RAM can comfortably accommodate two full frame buffers while still leaving more than 3 MB available for the application.

Opting for the standard double buffering strategy (with two frame buffers in the external RAM) ensures tearing-free rendering, as the display controller can present the new frame on VSYNC. However, this comes with the trade-off of slower rendering since the entire screen is updated each time and the rendering occurs directly in the slower external RAM.

## Quality

### Display
This board comes with an IPS display so it has amazing viewing angles and brightness too. 

![Viewing angles of the STM32 Embedded 7.0" display](/assets/cert_riverdi_STM32_embedded_7/display.webp)

### Touchpad

Riverdi's STM32 Embedded 7.0" display can be ordered with an industrial grade capacitive touch pad or without touchpad as well.

During our evaluation the touchpad was very accurate and we haven't found any issues with it.

### Robustness

This board was created with the definite purpose of being mounted into an end product even in a harsh environment. It's robust, has an even front surface, mounting holes, and stable connectors. 

## Conclusion

We have already certified a huge number of boards but when I held the Riverdi boards in my hand for the first time I knew something for sure: these are not toys, but professional devices made for  serious industrial applications.

Riverdi's 7-inch STM32 Embedded Display is an exceptionally good product. I feel like we have the Professional certificate exactly for these kinds of devices. 

In summary its display has high brightness, great visibility and vivid colors. It's equipped with an industrial touch panel, and all these are put together in a very stable way. In its core it has a powerful and modern STM32H7 MCU.
 
For the software side, it uses the ST's well known and mature CubeIDE.

If you need something stable which combines stability and performance you need to try out the 7-inch Riverdi STM32 Embedded Display. 

## Buy now

You can purchase the 7-inch Riverdi STM32 Embedded Displays from several sources:

- [Riverdi's website](https://riverdi.com/product/7-inch-lcd-display-capacitive-touch-panel-optical-bonding-uxtouch-stm32h7-rvt70hssnwc00-b)
- [Mouser](https://www.mouser.pl/c/?q=RVT70HSS)
- [TME](https://www.tme.com/us/en-us/katalog/intelligent-displays-modules_113439/?params=2:968;1134:1478578;1132:1584266;1136:1904411) 

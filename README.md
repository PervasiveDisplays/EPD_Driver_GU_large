# Introduction
 *  This library code implements the driving code of [Aurora(V231) or Spectra EPDs with iTC driver](https://www.pervasivedisplays.com/products/epd-product-selection/) made by [Pervasive Displays Inc (PDi)](https://www.pervasivedisplays.com/). This is compatible with either [EPD Extension Kit Gen 2 (EXT2)](https://www.pervasivedisplays.com/product/epd-extension-kit-gen-2-ext2/) and [EPD Extension Kit Gen 3 (EXT3)](https://www.pervasivedisplays.com/product/epd-extension-kit-gen-3-ext3/).
 *  It implements the global update mode (GU). However, the same code for fast and partial update are shared upon request. Contact [PDi](https://www.pervasivedisplays.com/technical-support/) for further details.
 *  The library supports the following EPD sizes: 9.7, 12"
 *  This library was tested with Launchpad (Tiva-C) with TM4C123, MSP432P401R, Arduino M0 Pro, Raspberry Pi Pico, and ESP32DevKitC.


# Installation
  Download the ZIP file of this library and install as instructed in [Arduino](https://www.arduino.cc/en/guide/libraries) or Energia.

# Hardware Setup
 *  If using Launchpad (Tiva-C) with TM4C123 or MSP432P401R, the SPI pins are by default:
``` c++
// Using EXT3
    SCK = 7     // BROWN
    BUSY = 11   // RED
    D/C = 12    // ORANGE
    RST = 13    // YELLOW
    MOSI = 15   // BLUE
    ECSM = 19   // GRAY
    
 // Using EXT2
    SCK = 7    
    BUSY = 8  
    D/C = 9
    RST = 10
    MOSI = 15
    ECSM = 19
    PNLON = 11
    BS = 17
 ```
 *  If using Arduino M0 Pro,
  ```
    SCK = 13 
    BUSY = 4  
    D/C = 5
    RST = 6
    MOSI = 12
    ECSM = 8
    PNLON = 11	only for EXT2
    BS = 9	only for EXT2
 ```
  *  If using Raspberry Pi Pico,
  ```
    SCK = 18 
    BUSY = 13  
    D/C = 12
    RST = 11
    MOSI = 19
    ECSM = 17
    PNLON = 8	only for EXT2
    BS = 7	only for EXT2
 ```
 
   *  If using ESP32DevKitC,
  ```
    SCK = 18 
    BUSY = 27  
    D/C = 26
    RST = 25
    MOSI = 19
    ECSM = 32
    PNLON = 16	only for EXT2
    BS = 17	only for EXT2
 ```
 
For further wiring guidance, check out the User Manuals of [EXT2](https://www.pervasivedisplays.com/wp-content/uploads/2019/06/EPD-Extension-Kit-Gen2-EXT2_User-Guide_Rev08_20191111.pdf) and [EXT3](https://www.pervasivedisplays.com/wp-content/uploads/2021/01/User-Manual-of-EXT3_Rev01_Jan-2021-1.pdf).

# EPD_Driver Demo
 *  The sample code implements a global update functionality for a [9.7" Spectra R2.0 EPD (TE2969JS0B2)](https://www.pervasivedisplays.com/product/9-7-e-ink-display-spectra-e4/).  
 
	A BWR (black, white, red) image is flashed.  
 <p align="center"><img src="https://github.com/PervasiveDisplays/EPD_Driver_GU_large/blob/main/examples/Demo_970/globalupdate_src/images/970_672x960_BWR.bmp"></p>
 
 *  The demo currently includes sample images for all the supported EPD sizes mentioned above. To implement global update demo on these other sizes, update the following lines
``` c++
//------------------------------------------------------------
// DEMO Image Set <Comment out when in User Mode>
// Screen Size: 970, 1200
#define SCREEN 970
#include "globalupdate_src/demoImageData.h"
```
 *  Then select the appropriate EPD size, development board and extension kit:
```
	EPD_Driver epdtest(eScreen_EPD_969, boardESP32DevKitC_EXT3);
	// EPD_Driver epdtest(eScreen_EPD_B98, boardESP32DevKitC_EXT3);
```

#  Tech Support
 *  For more information, please visit [Pervasive Displays, Inc. (龍亭新技股份有限公司)](https://www.pervasivedisplays.com/)
 *  [PDI Wiki](https://docs.pervasivedisplays.com/)
 *  [PDi Product Line up](https://www.pervasivedisplays.com/products/)
 *  [EPD Extension Kit Gen 2 (EXT2)](https://www.pervasivedisplays.com/product/epd-extension-kit-gen-2-ext2/)
 *  [EPD Extension Kit Gen 3 (EXT3)](https://www.pervasivedisplays.com/product/epd-extension-kit-gen-3-ext3/)
 *  [Support Service](https://www.pervasivedisplays.com/technical-support/)

# Licence

**Copyright** &copy; Pervasive Displays, 2010-2023

**Licence** [Attribution-ShareAlike 4.0 International (CC BY-SA 4.0)](./LICENCE.md)

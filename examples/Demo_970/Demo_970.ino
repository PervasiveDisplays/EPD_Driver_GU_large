/*
  EPD_Driver_demo
  This is a demo sketch for the 9.7" large EPD from Pervasive Displays, Inc.
  The aim of this demo and the library used is to introduce CoG usage and global update functionality.
  
  Hardware Suggested:
  * Launchpad MSP432P401R or (Tiva-C) with TM4C123/Arduino M0 Pro/Raspberry Pi Pico
  * EPD Extension Kit (EXT2 or EXT3)
  * 9.7" EPD
  * 20-pin rainbow jumper cable
*/

#include <EPD_Driver.h>

// DEMO Image Set <Comment out when in User Mode>
// Screen Size: 970, 1200
#define SCREEN 970
#include "globalupdate_src/demoImageData.h"
// User Mode Image Set
//#include "globalupdate_src/userImageData.h"
//------------------------------------------------------------

void setup()
{
EPD_Driver epdtest(eScreen_EPD_969, boardESP32DevKitC_EXT3);
// EPD_Driver epdtest(eScreen_EPD_B98, boardESP32DevKitC_EXT3);
  // Initialize CoG
  // epdtest.COG_initial();

  // Global Update Call
  epdtest.globalUpdate(Masterfm1, Masterfm2, Slavefm1, Slavefm2);

  // Turn off CoG
  epdtest.COG_powerOff();
}

void loop()
{
  delay(1000);
}

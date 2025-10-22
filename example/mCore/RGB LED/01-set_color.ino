/*
Author      : Teeraphat Kullanankanjana
Date        : 23/10/2568
Version     : 1.0
Description : 
This program controls an RGB LED module connected to port 7 of the mBot (MeMCore).
Copyright   : (C) 2025 Teeraphat Kullanankanjana. All rights reserved.
*/

#include <MeMCore.h>     // Include the mBot core library
MeRGBLed led(PORT_7);    // Create an RGB LED object on port 7

void setup() {
}

void loop() {
  led.setColorAt(0, 255, 0, 0);   // Set LED 0 (first LED) to red
  led.setColorAt(1, 0, 255, 0);   // Set LED 1 (second LED) to green
  led.show();                     // Apply the color changes to the LEDs
}

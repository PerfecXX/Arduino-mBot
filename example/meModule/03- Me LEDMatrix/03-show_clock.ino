/*
Author: Teeraphat Kullanankanjana
Date: 11/11/2565
Version: 1.0
Description: Display a digital clock on the LED matrix.
Copyright: (C) 2025 Teeraphat Kullanankanjana. All rights reserved.
*/

#include <MeMCore.h>   // Include Makeblock MCore library

MeLEDMatrix led_matrix(PORT_1);  // Create LED matrix object on port 1

uint16_t hour;     // Hour value (0–23)
uint16_t minutes;  // Minute value (0–59)

void setup() {
  led_matrix.clearScreen();     // Clear the LED matrix
  led_matrix.setColorIndex(1);  // Set color (1 = default)
  led_matrix.setBrightness(1);  // Set brightness level

  hour = 8;                     // Set hour
  minutes = 17;                 // Set minutes
  led_matrix.showClock(hour, minutes, true); // Display clock (true = show colon)
}

void loop() {
  
}

/*
Author: Teeraphat Kullanankanjana
Date: 11/11/2565
Version: 1.0
Description: Display a custom 8x16 bitmap on the LED matrix.
Copyright: (C) 2025 Teeraphat Kullanankanjana. All rights reserved.
*/

#include <MeMCore.h>   // Include Makeblock MCore library

MeLEDMatrix led_matrix(PORT_1);   // Create LED matrix object on port 1

// 8x16 bitmap data (each byte = one column, each bit = one pixel row)
// Bit 7 = top pixel, Bit 0 = bottom pixel
unsigned char bitmapData[16] = {
  0b00011000,  // Column 0
  0b00111100,  // Column 1
  0b01111110,  // Column 2
  0b11111111,  // Column 3
  0b11111111,  // Column 4
  0b01111110,  // Column 5
  0b00111100,  // Column 6
  0b00011000,  // Column 7
  0b00011000,  // Column 8
  0b00111100,  // Column 9
  0b01111110,  // Column 10
  0b11111111,  // Column 11
  0b11111111,  // Column 12
  0b01111110,  // Column 13
  0b00111100,  // Column 14
  0b00011000   // Column 15
};

void setup() {
  led_matrix.clearScreen();       // Clear the LED matrix
  led_matrix.setColorIndex(1);    // Set color (1 = default)
  led_matrix.setBrightness(1);    // Set brightness level

  // Draw 8x16 bitmap at top-left corner (x=0, y=0)
  led_matrix.drawBitmap(0, 0, 16, bitmapData);
}

void loop() {
}

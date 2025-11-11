/*
Author: Teeraphat Kullanankanjana
Date: 11/11/2565
Version: 1.0
Description: Scroll the letter 'A' left and right (ping-pong motion) on 8x16 LED matrix.
Copyright: (C) 2025 Teeraphat Kullanankanjana. All rights reserved.
*/

#include <MeMCore.h>

MeLEDMatrix led_matrix(PORT_1);

int scrollIndex = 0;    // Current scroll start column
int direction = 1;      // 1 = left, -1 = right

// Buffer: extra space left + Letter A + extra space right
unsigned char scrollBuffer[24] = {
  // Extra space left (8 columns)
  0b00000000,0b00000000,0b00000000,0b00000000,
  0b00000000,0b00000000,0b00000000,0b00000000,
  // Letter A (6 columns)
  0b00111111,0b01111111,0b11001100,0b11001100,0b01111111,0b00111111,
  // Extra space right (10 columns)
  0b00000000,0b00000000,0b00000000,0b00000000,
  0b00000000,0b00000000,0b00000000,0b00000000,0b00000000,0b00000000
};

void setup() {
  led_matrix.clearScreen();
  led_matrix.setColorIndex(1);
  led_matrix.setBrightness(1);
}

void loop() {
  // Draw 16 columns starting from scrollIndex
  led_matrix.drawBitmap(0, 0, 16, &scrollBuffer[scrollIndex]);

  // Update scroll position
  scrollIndex += direction;

  // If reached the rightmost limit, change direction to left
  if (scrollIndex >= (sizeof(scrollBuffer) - 16)) {
    scrollIndex = (sizeof(scrollBuffer) - 16);
    direction = -1;
  }
  // If reached the leftmost limit, change direction to right
  else if (scrollIndex <= 0) {
    scrollIndex = 0;
    direction = 1;
  }

  delay(150); // Adjust speed of scrolling
}

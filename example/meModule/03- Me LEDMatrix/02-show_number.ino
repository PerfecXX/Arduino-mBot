/*
Author: Teeraphat Kullanankanjana
Date: 11/11/2565
Version: 1.0
Description: Simple LED matrix number display example.
Copyright: (C) 2025 Teeraphat Kullanankanjana. All rights reserved.
*/

#include <MeMCore.h>   // Include Makeblock MCore library

MeLEDMatrix led_matrix(PORT_1);  // Create LED matrix object on port 1

uint16_t number;   // Number to display
uint16_t digit;    // Digit position (0–3, counted from right to left)

void setup() {
  led_matrix.clearScreen();     // Clear the LED matrix
  led_matrix.setColorIndex(1);  // Set color
  led_matrix.setBrightness(1);  // Set brightness level

  number = 4;                   // Define number to display
  digit = 0;                    // Define digit position (0 = rightmost)
  led_matrix.showNum(number, digit);  // Show number on LED matrix
}

void loop() {
}

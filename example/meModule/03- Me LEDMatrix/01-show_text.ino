/*
Author: Teeraphat Kullanankanjana
Date: 11/11/2565
Version: 1.0
Description: Simple LED matrix text display example.
Copyright: (C) 2025 Teeraphat Kullanankanjana. All rights reserved.
*/

#include <MeMCore.h>   // Include Makeblock MCore library

MeLEDMatrix led_matrix(PORT_1);  // Initialize LED matrix on port 1

int16_t x_pos;       // X position 
int16_t y_pos;       // Y position
char *message;       // Pointer to message string

void setup() {
  
  led_matrix.clearScreen();     // Clear the LED matrix
  led_matrix.setColorIndex(1);  // Set color (1 = default color)
  led_matrix.setBrightness(1);  // Set brightness level

  x_pos = 0;
  y_pos = 7;
  message = "Hi";               // Set message text
  led_matrix.drawStr(x_pos, y_pos, message); // Draw text at (x=0, y=7)
}

void loop() {

}

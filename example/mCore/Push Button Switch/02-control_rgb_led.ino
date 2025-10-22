/*
Author      : Teeraphat Kullanankanjana
Date        : 23/10/2568
Version     : 1.0
Description : This program reads the button input from port 7 on the mBot (MeMCore) and controls two RGB LEDs on the same board.
Copyright   : (C) 2025 Teeraphat Kullanankanjana. All rights reserved.
*/

#include <MeMCore.h>

int btnPin = 7;           // Button input pin (PORT_7)
int btnState = 0;         // Variable to store button reading
MeRGBLed led(PORT_7);     // Create RGB LED object on port 7

void setup() {
  Serial.begin(9600);       // Initialize Serial Monitor
  pinMode(btnPin, INPUT);   // Set button pin as input

  // Turn off LEDs at startup
  led.setColorAt(0, 0, 0, 0);
  led.setColorAt(1, 0, 0, 0);
  led.show();
}

void loop() {
  btnState = analogRead(btnPin);   // Read analog value from button
  Serial.print("Value: ");                           // Print the message to Serial Monitor
  Serial.println(btnState);                          // Print the value to Serial Monitor

  // Check if button is pressed
  if (btnState < 100) {  // Adjust threshold if necessary
    // Button pressed → LEDs ON (white)
    led.setColorAt(0, 255, 255, 255);
    led.setColorAt(1, 255, 255, 255);
    led.show();
  } else {
    // Button released → LEDs OFF
    led.setColorAt(0, 0, 0, 0);
    led.setColorAt(1, 0, 0, 0);
    led.show();
  }

  delay(100);  // Small delay to stabilize reading
}

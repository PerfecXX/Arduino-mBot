/*
Author      : Teeraphat Kullanankanjana
Date        : 23/10/2568
Version     : 1.0
Description : This program reads the analog value from a button connected to port 7.
Copyright   : (C) 2025 Teeraphat Kullanankanjana. All rights reserved.
*/

#include <MeMCore.h>

int btnPin = 7;   // Button input pin (connected to PORT_7)
int btnState = 0; // Variable to store button reading

void setup() {
  Serial.begin(9600);       // Initialize Serial Monitor at 9600 baud rate
}

void loop() {
  btnState = analogRead(btnPin);                     // Read analog value from button
  Serial.print("Value: ");                           // Print the value to Serial Monitor
  Serial.println(btnState);                          // Print the value to Serial Monitor
  delay(100);                                        // Wait 100 ms before next reading
}

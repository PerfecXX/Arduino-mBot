/*
Author      : Teeraphat Kullanankanjana
Date        : 23/10/2568
Version     : 1.0
Description : Receives infrared messages and prints them to Serial.
Copyright   : (C) 2025 Teeraphat Kullanankanjana. All rights reserved.
*/

#include <MeMCore.h>

MeIR ir;           // Create an IR object for communication
String message;    // Variable to store received IR string

void setup() {
  Serial.begin(9600);  // Initialize Serial Monitor at 9600 baud
  ir.begin();           // Initialize IR module
}

void loop() {
  message = ir.getString();                  // Read incoming IR string
  Serial.print("String Message: ");          // Print label
  Serial.println(message);                   // Print received message
  delay(100);                                // Wait 100 ms before next reading
}

/*
Author      : Teeraphat Kullanankanjana
Date        : 1/11/2568
Version     : 1.0
Description : Transmits a string message via infrared (IR).
Copyright   : (C) 2025 Teeraphat Kullanankanjana. All rights reserved.
*/

#include <MeMCore.h> // Include the library for Makeblock Me devices

MeIR ir;            // Create an object for the IR module (Receiver/Transmitter)

void setup() {
  // Initialize the IR module. 
  ir.begin();
}

void loop() {
  // Transmit the string message "Hello from mBot" via the IR LED.
  // The receiver program should be listening for this message.
  ir.sendString("Hello from mBot");
  
  // Wait for 5000 milliseconds (5 seconds) before sending the message again.
  delay(5000); 
}

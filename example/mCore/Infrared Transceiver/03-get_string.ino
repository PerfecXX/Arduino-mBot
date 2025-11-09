/*
Author      : Teeraphat Kullanankanjana
Date        : 1/11/2568
Version     : 1.0
Description : Reads string data transmitted via infrared (IR)
Copyright   : (C) 2025 Teeraphat Kullanankanjana. All rights reserved.
*/
#include <MeMCore.h> // Include the library for Makeblock Me devices

MeIR ir;            // Create an object for the IR module (Receiver/Transmitter)
String message;     // String variable to store the received IR message


void setup() {
  // Initialize the IR module
  ir.begin();
  
  // Start serial communication at 9600 baud rate for debugging and output
  Serial.begin(9600);
  Serial.println("IR Receiver Initialized. Waiting for transmission...");
}

void loop() {
  // Read the received IR data as a String. 
  // This function is often blocking or returns an empty string if no data is available.
  message = ir.getString();

  // Check if a non-empty message was actually received
  if (message.length() > 0) {
    // Print a label to the Serial Monitor
    Serial.print("Message Received: ");
    
    // Print the content of the received message
    Serial.println(message);
  }
}

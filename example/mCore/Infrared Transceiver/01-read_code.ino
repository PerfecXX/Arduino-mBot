/*
Author      : Teeraphat Kullanankanjana
Date        : 1/11/2568
Version     : 1.0
Description : Read IR remote signal and print code via Serial
Copyright   : (C) 2025 Teeraphat Kullanankanjana. All rights reserved.
*/

#include <MeMCore.h>

MeIR ir;                    // IR module object
unsigned char message;      // Store received IR code

void setup() {
  ir.begin();               // Initialize IR module
  Serial.begin(9600);       // Start Serial communication
}

void loop() {
  message = ir.getCode();   // Read IR code (1 byte)
  
  Serial.print("Code: ");   // Print label
  Serial.println(message);  // Show received value
  delay(100);               // Wait before next read
}

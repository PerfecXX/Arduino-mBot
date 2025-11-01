/*
Author      : Teeraphat Kullanankanjana
Date        : 23/10/2568
Version     : 1.0
Description : Read IR remote code and print button name via Serial
Copyright   : (C) 2025 Teeraphat Kullanankanjana. All rights reserved.
*/

#include <MeMCore.h>

MeIR ir;                 // IR receiver object
unsigned char code;      // Store received IR code

void setup() {
  ir.begin();            // Initialize IR module
  Serial.begin(9600);    // Start Serial Monitor
  Serial.println("IR Ready");
}

void loop() {
  code = ir.getCode();   // Read IR code (1 byte)

  if (code > 0) {        // If a signal is received
    switch (code) {
      case 69:  Serial.println("Button: A"); break;
      case 70:  Serial.println("Button: B"); break;
      case 71:  Serial.println("Button: C"); break;
      case 68:  Serial.println("Button: D"); break;
      case 67:  Serial.println("Button: E"); break;
      case 13:  Serial.println("Button: F"); break;
      case 64:  Serial.println("Button: UP"); break;
      case 25:  Serial.println("Button: Down"); break;
      case 7:   Serial.println("Button: Left"); break;
      case 9:   Serial.println("Button: Right"); break;
      case 21:  Serial.println("Button: Set"); break;
      case 22:  Serial.println("Button: 0"); break;
      case 12:  Serial.println("Button: 1"); break;
      case 24:  Serial.println("Button: 2"); break;
      case 94:  Serial.println("Button: 3"); break;
      case 8:   Serial.println("Button: 4"); break;
      case 28:  Serial.println("Button: 5"); break;
      case 90:  Serial.println("Button: 6"); break;
      case 66:  Serial.println("Button: 7"); break;
      case 82:  Serial.println("Button: 8"); break;
      case 74:  Serial.println("Button: 9"); break;
      default: break;
    }
    delay(100); // Prevent multiple reads per press
  }
}

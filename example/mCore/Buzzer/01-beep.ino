/*
Author      : Teeraphat Kullanankanjana
Date        : 23/10/2568
Version     : 1.0
Description : This program plays two short beeps using the onboard buzzer on the mBot (MeMCore).
Copyright   : (C) 2025 Teeraphat Kullanankanjana. All rights reserved.
*/

#include <MeMCore.h>

MeBuzzer buzzer;  // Create a buzzer object

void setup() {
  
  // Play the first beep at 700 Hz for 100 ms
  buzzer.tone(700, 100);
  // Wait for 5 seconds
  delay(5000);
  // Play the second beep at 400 Hz for 100 ms
  buzzer.tone(400, 100);
  
}

void loop() {
}

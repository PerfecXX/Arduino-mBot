/*
Author      : Teeraphat Kullanankanjana
Date        : 23/10/2568
Version     : 1.5
Description : Simple LED color sequence for mBot (MeMCore).
Copyright   : (C) 2025 Teeraphat Kullanankanjana. All rights reserved.
*/

#include <MeMCore.h>
MeRGBLed led(PORT_7);

void setup() {
  // Turn off LED at startup
  led.setColorAt(0, 0, 0, 0);
  led.show();
}

void loop() {
  // Green for 5 seconds
  led.setColorAt(0, 0, 255, 0);
  led.show();
  delay(5000);

  // Yellow for 3 seconds
  led.setColorAt(0, 255, 255, 0);
  led.show();
  delay(3000);

  // Red for 10 seconds
  led.setColorAt(0, 255, 0, 0);
  led.show();
  delay(10000);
}

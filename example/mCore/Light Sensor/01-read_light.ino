/*
Author      : Teeraphat Kullanankanjana
Date        : 23/10/2568
Version     : 1.0
Description : Reads ambient light level from a sensor and prints it to Serial.
Copyright   : (C) 2025 Teeraphat Kullanankanjana. All rights reserved.
*/

#include <MeMCore.h>

MeLightSensor lightSensor(6);  // Light sensor connected to port 6
int light_value;               // Variable to store sensor reading

void setup() {
  Serial.begin(9600);          // Initialize Serial Monitor at 9600 baud
}

void loop() {
  light_value = lightSensor.read();     // Read light intensity value
  Serial.print("Light Value: ");        // Print label
  Serial.println(light_value);          // Print sensor value
  delay(100);                           // Wait 100 ms before next reading
}

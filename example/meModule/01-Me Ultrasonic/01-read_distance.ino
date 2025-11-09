/*
Author      : Teeraphat Kullanankanjana
Date        : 01/11/2568 
Version     : 1.0
Description : Reads distance in centimeters from the Me Ultrasonic Sensor.
Copyright   : (C) 2025 Teeraphat Kullanankanjana. All rights reserved.
*/

#include <MeMCore.h>         // Include the library for Makeblock Me devices

// Initialize the Ultrasonic Sensor object on specified port
MeUltrasonicSensor ultsonic(2);

// Variable to store the measured distance in centimeters
double distacneCm; 

void setup() {
  // Start serial communication at 9600 baud rate
  Serial.begin(9600);
  Serial.println("Ultrasonic Sensor Initialized. Reading distance...");
}


void loop() {
  // Read the distance from the sensor and store the value in 'distacneCm'
  distacneCm = ultsonic.distanceCm();

  // Print the label "Distance: " to the Serial Monitor
  Serial.print("Distance: ");
  
  // Print the measured distance value
  Serial.print(distacneCm);
  
  // Print the unit " cm." and move to the next line
  Serial.println(" cm.");
  
  // A small delay to keep the Serial output readable
  delay(100); 
}

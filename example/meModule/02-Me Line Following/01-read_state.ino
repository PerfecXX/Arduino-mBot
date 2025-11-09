/*
Author      : Teeraphat Kullanankanjana
Date        : 10/11/2568 
Version     : 1.0
Description : Reads the state of the Me Line Follower module.
Copyright   : (C) 2025 Teerapank Kullanankanjana. All rights reserved.
*/


#include <MeMCore.h>  

// Initialize the Line Follower object on the specified port
MeLineFollower linefollow(3);

// Variable to store sensor state code
uint8_t sensor_state; 

void setup() {
  // Start serial communication at 9600 baud rate.
  Serial.begin(9600);
  Serial.println("Line Follower Initialized. Reading sensor states...");
}


void loop() {
  // Read the status of both line follower sensors
  sensor_state = linefollow.readSensors();

  // Print the label "Sensor State:" to the Serial Monitor
  Serial.print("Sensor State:");
  
  // Print the raw numerical sensor state code and move to the next line.
  // Common codes are: 0 (Both on black), 1 (Right on black), 2 (Left on black), 3 (Both on white).
  Serial.println(sensor_state);
  
  // Wait for 100 milliseconds before reading the sensor state again.
  delay(100);
}

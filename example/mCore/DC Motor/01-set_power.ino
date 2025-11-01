/*
Author      : Teeraphat Kullanankanjana
Date        : 23/10/2568
Version     : 1.0
Description : Control 2 DC motors (M1, M2)
Copyright   : (C) 2025 Teeraphat Kullanankanjana. All rights reserved.
*/

#include <MeMCore.h>

MeDCMotor motor_1(9);  // M1
MeDCMotor motor_2(10); // M2

// Motor speed variables (-255 to 255)
int M1_Power = 255;   // Speed of M1
int M2_Power = -255;  // Speed of M2

void setup() {
  Serial.begin(9600);       // Initialize Serial Monitor

  // Run motors according to power variables
  motor_1.run(M1_Power);
  motor_2.run(M2_Power);
}

void loop() {
}

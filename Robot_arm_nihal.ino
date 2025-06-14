/*
Robot arm control with Arduino UNO by Gm Nihal Nandan
   
*/

#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver nihal = Adafruit_PWMServoDriver();

#define servo1 0
#define servo2 1
#define servo3 2
#define servo4 3


void setup() {
  Serial.begin(9600);
  nihal.begin();
  nihal.setPWMFreq(60);
  nihal.setPWM(servo1, 0, 330);
  nihal.setPWM(servo2, 0, 150);
  nihal.setPWM(servo3, 0, 300);
  nihal.setPWM(servo4, 0, 410);
  delay(3000);
}

void loop() {

  for (int S1value = 330; S1value >= 250; S1value--) {
    nihal.setPWM(servo1, 0, S1value);
    delay(10);
  }

  for (int S2value = 150; S2value <= 380; S2value++) {
    nihal.setPWM(servo2, 0, S2value);
    delay(10);
  }

  for (int S3value = 300; S3value <= 380; S3value++) {
    nihal.setPWM(servo3, 0, S3value);
    delay(10);
  }

  for (int S4value = 410; S4value <= 510; S4value++) {
    nihal.setPWM(servo4, 0, S4value);
    delay(10);
  }
  ////////////////////////
  delay(2000);
  for (int S4value = 510; S4value > 410; S4value--) {
    nihal.setPWM(servo4, 0, S4value);
    delay(10);
  }

  for (int S3value = 380; S3value > 300; S3value--) {
    nihal.setPWM(servo3, 0, S3value);
    delay(10);
  }

  for (int S2value = 380; S2value > 150; S2value--) {
    nihal.setPWM(servo2, 0, S2value);
    delay(10);
  }

  for (int S1value = 250; S1value < 450; S1value++) {
    nihal.setPWM(servo1, 0, S1value);
    delay(10);
  }
  //////////////////////
  for (int S2value = 150; S2value <= 380; S2value++) {
    nihal.setPWM(servo2, 0, S2value);
    delay(10);
  }

  for (int S3value = 300; S3value <= 380; S3value++) {
    nihal.setPWM(servo3, 0, S3value);
    delay(10);
  }

  for (int S4value = 410; S4value <= 510; S4value++) {
    nihal.setPWM(servo4, 0, S4value);
    delay(10);
  }

  for (int S4value = 510; S4value > 410; S4value--) {
    nihal.setPWM(servo4, 0, S4value);
    delay(10);
  }
  ///////////////////
  for (int S3value = 380; S3value > 300; S3value--) {
    nihal.setPWM(servo3, 0, S3value);
    delay(10);
  }

  for (int S2value = 380; S2value > 150; S2value--) {
    nihal.setPWM(servo2, 0, S2value);
    delay(10);
  }

  for (int S1value = 450; S1value > 330; S1value--) {
    nihal.setPWM(servo1, 0, S1value);
    delay(10);
  }
}

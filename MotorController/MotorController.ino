#include "MotorControllerL298N.h"

//Pins that the motor controller are plugged into
#define MOTOR_A_PIN 5//MUST be a PWM pin
#define MOTOR_B_PIN 6//MUST be a PWM pin
#define IN1 3
#define IN2 4
#define IN3 7
#define IN4 8

MotorControllerL298N motorController = MotorControllerL298N(MOTOR_A_PIN, MOTOR_B_PIN, IN1, IN2, IN3, IN4);//Give the class the pins that the motor controller is plugged into

void setup() {
  Serial.begin(9600);
  Serial.println("Set speed");
}

void loop() {
  //Set the speeds of the motors, the speeds can be between -255 and +255 (negative is backwards positive is forwards)
  //This should make the robot turn
  motorController.setMotorASpeed((int)(Serial.read));
  motorController.setMotorBSpeed((int)(Serial.read));
}


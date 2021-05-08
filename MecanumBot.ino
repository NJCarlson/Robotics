#include <AFMotor.h>

AF_DCMotor FrontRight(1);
AF_DCMotor FrontLeft(2);
AF_DCMotor BackLeft(3);
AF_DCMotor BackRight(4);



void setup()
{

  FrontRight.run(RELEASE);
  FrontLeft.run(RELEASE);
  BackLeft.run(RELEASE);
  BackRight.run(RELEASE);
}

void loop()
{
  uint8_t i;

  // Turn on motors
  FrontRight.run(FORWARD);
  FrontLeft.run(FORWARD);
  BackLeft.run(FORWARD);
 BackRight.run(FORWARD);
 
FrontRight.setSpeed(255);
FrontLeft.setSpeed(255);
BackLeft.setSpeed(255);
BackRight.setSpeed(255);
}

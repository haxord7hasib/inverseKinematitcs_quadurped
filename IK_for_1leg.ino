#include <Servo.h>
#include <math.h>
    //servo.attach(pin) 
    //servo.attach(pin, min, max)

 

Servo servo1,servo2,servo3,servo4,servo5,servo6,servo7,servo8,servo9,servo10,servo11,servo12;



void setup() {
  Serial.begin(115200);
  connectServos();
}
void loop() {
 math_trigo();
}

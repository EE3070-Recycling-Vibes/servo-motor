#include <Servo.h>
int servoPin = A0;
Servo servo1;
int n = 0;
void setup() {
  // put your setup code here, to run once:
  servo1.attach(servoPin);

}

void loop() {
  // put your main code here, to run repeatedly:
  while(n < 100){
  servo1.write(10);
  delay(700);
 
  servo1.write(180);
  delay(700);
  }
}

#include <Servo.h> // Import Servo Library
// create servo object to control a servo
// my_servo can be any name. 
// Twelve servo objects can be on most Arduino boards
Servo my_servo; 
int pos = 0; // variable to store the servo position

void setup() {
 my_servo.attach(9); // Servo on pin 9 to servo object 
 pos = 0; // Set position Variable
 my_servo.write(pos); // Set the default start position
 delay(1000); // Delay just a bit to get into position

}

void loop() {
  while (true)
  {
    pos = 0; // Set position Variable
    my_servo.write(pos); // Set the start position
    delay(1000);
    pos = 90; // Set position Variable
    my_servo.write(pos); // Set the start position
    delay(1000);
    pos = 180; // Set position Variable
    my_servo.write(pos); // Set the start position
    delay(1000);
  }

}

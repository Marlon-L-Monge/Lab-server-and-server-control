#include <Servo.h> // Import Servo Library
// create servo object to control a servo
// my_servo can be any name. 
// Twelve servo objects can be on most Arduino boards
Servo my_servo; 
int pos = 0; // variable to store the servo position
int min_val = 0;
int max_val = 180;

void setup() {
  Serial.begin(9600);
 my_servo.attach(9); // Servo on pin 9 to servo object 
 pos = 0; // Set position Variable
 my_servo.write(pos); // Set the default start position
 delay(1000); // Delay just a bit to get into position

}

void loop() {

  for (int i = 0; i <= 180 ; i++)
  {
    my_servo.write(i);
    delay(20);
    Serial.println(i);
  }

}

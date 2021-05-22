#include<Servo.h>
 int servo = 13;
void setup() 
{ 
  pinMode(servo, OUTPUT);
 esc_signal.attach(13);
 esc_signal.write(30);
} 
 
 
void loop() 
{ 
  esc_signal.write(75);
} 

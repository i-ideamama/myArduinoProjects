#include<Servo.h>

int sensorPin = A0;
int sensorValue = 0;
int analogValues[10] = {0,0,0,0,0,0,0,0,0,0};
Servo myservo;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myservo.attach(9);
}

void loop() {

  sensorValue = analogRead(sensorPin);
 
  int x;
  for (x = 0; x < 10; x++){ //init, comparision, update
    analogValues[x] = sensorValue;
    
  }
  int y;
  for (y = 0; y < 10; y++){
    if (analogValues[y] > 880 && analogValues[y] < 950){
      myservo.write(35);
      delay(500);
      myservo.write(0);
    }
  }
}

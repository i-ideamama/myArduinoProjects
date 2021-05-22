int buttonPin1 = 6;
int buttonPin2 = 7;


void setup() {
  Serial.begin(9600);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin1, INPUT);
}

void loop() {
  int buttonRead1 = digitalRead(buttonPin1);
  int buttonRead2 = digitalRead(buttonPin2);
//  if (buttonRead2 == 0){
//    buttonRead2 = 1;
//  }
//  Serial.println(buttonRead1);
  Serial.println("button 1 -> ");
  Serial.println(buttonRead1);
  Serial.println("button 2 -> ");
  Serial.println(buttonRead2);
  delay(1000);
}

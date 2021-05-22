int latchPin=11;
int clockPin=9;
int dataPin=12;
int loopIter = 0;

int buttonPin1 = 6;
int buttonPin2 = 7;

byte LEDTrain[8] = {0b1000000,0b01000000,0b0010000,0b0001000,0b0000100,0b00000100,0b0000010,0b0000001};
byte LEDOff = 0b00000000;

void setup() {
  Serial.begin(9600);
  pinMode(latchPin,OUTPUT);
  pinMode(dataPin,OUTPUT);
  pinMode(clockPin,OUTPUT);

  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin1, INPUT);
  
}


void loop() {
  int buttonRead1 = digitalRead(buttonPin1);
  int buttonRead2 = digitalRead(buttonPin2);
  
  digitalWrite(latchPin,LOW);
  shiftOut(dataPin,clockPin,LSBFIRST,LEDTrain[loopIter]);
  digitalWrite(latchPin,HIGH);
  delay(250);
  if (loopIter < 8){
    loopIter++;
  }
  else if (loopIter == 8){
    loopIter = 0;
  }
  if (buttonRead1 == 1 && loopIter == 7){
    Serial.println("Advaith Wins!");
  }
  if (buttonRead2 == 0 && loopIter == 0){
    Serial.println("Anirban Wins!");
  }
}

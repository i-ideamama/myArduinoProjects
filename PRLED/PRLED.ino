int PRPin = A0;
int LEDPin = 11;
int PRRead;
int LEDOut;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(PRPin, INPUT);
  pinMode(LEDPin, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  PRRead = analogRead(PRPin);

  if (PRRead != 500){
    digitalWrite(LEDPin, HIGH);
  }
  else{
    digitalWrite(LEDPin, LOW);
  }

 }

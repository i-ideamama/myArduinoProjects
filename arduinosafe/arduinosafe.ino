
const int buttonpin = 2;
const int ledpin = 13;
int buttonstate = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin, OUTPUT);
  pinMode (buttonpin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonstate = digitalRead(buttonpin);

if (buttonstate == HIGH){
  digitalWrite(ledpin, HIGH);
}
else{
  digitalWrite(ledpin, LOW);
}
}

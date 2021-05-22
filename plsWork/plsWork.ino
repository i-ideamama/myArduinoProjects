int plsWork = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(plsWork, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(plsWork, HIGH);
  delay(200);
  digitalWrite(plsWork, LOW);
  delay(200);
}

int count = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  Serial.print("i am counting to : /n ");
  Serial.print(count);
  count = count+1;
  delay(1000);
}

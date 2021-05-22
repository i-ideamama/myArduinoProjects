int j = 1;
String True = True;
void setup() {

Serial.begin(9600);
}

void loop() {

while(True == 'True'){
  Serial.println(j);
  j++;
}

}

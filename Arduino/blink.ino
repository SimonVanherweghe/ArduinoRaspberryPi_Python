int counter=0;
void setup(void) {
Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, LOW);
  delay(1000);
  digitalWrite(13, HIGH);
  counter++;
  Serial.println(counter,DEC);
  delay(500);
}
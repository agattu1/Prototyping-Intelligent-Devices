
void setup() {
  pinMode(4, OUTPUT);
  pinMode(5, INPUT);
}
void loop() {
  if (digitalRead(5) == HIGH) {
    digitalWrite(4, HIGH);
  }
  else {
    digitalWrite(4, LOW);
  }
}

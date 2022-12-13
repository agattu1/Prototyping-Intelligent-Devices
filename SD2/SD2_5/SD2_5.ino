void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(12, INPUT); //ok
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(12) == LOW) {
    Serial.println("no light exposure");
  } else {
    Serial.println("full light exposure");
  }
  delay(500);
}

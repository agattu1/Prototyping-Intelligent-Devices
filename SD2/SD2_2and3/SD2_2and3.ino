void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(8, INPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(8) == 0) {
    digitalWrite(10, HIGH);
    //Serial.println("closed");
  } else {
    digitalWrite(10, LOW);
    //Serial.println("open");
  }
  //delay(1000);
}

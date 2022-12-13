void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(2, INPUT); //ok
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(500);
  pinMode(4, OUTPUT);
  digitalWrite(4, HIGH);
  pinMode(6, OUTPUT);
  digitalWrite(6, LOW);
  int input = digitalRead(2);
  if (input == LOW) {
    Serial.println("light level 1");
  } else {
    pinMode(6, INPUT);
    digitalWrite(4, LOW);
    input = digitalRead(2);
    if(input == LOW) {
      Serial.println("light level 2");
    } else {
      pinMode(4, INPUT);
      pinMode(6, OUTPUT);
      digitalWrite(6, LOW);
      input = digitalRead(2);
      if (input == LOW) {
        Serial.println("light level 3");
      } else {
        pinMode(4, OUTPUT);
        digitalWrite(4, LOW);
        input = digitalRead(2);
        if (input == LOW) {
          Serial.println("light level 4");
        } else {
          Serial.println("light level 5");
        }
      }
    }
  }
}

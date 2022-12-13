int enB = 3;
int in3 = 5;
int in4 = 4;

void setup() {
  // Set all the motor control pins to outputs
  pinMode(enB, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  // main initials
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  digitalWrite(enB, HIGH);
}

void loop() {
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  delay(2000);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  delay(2000);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  delay(2000);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  delay(2000);
}


int inputPin = 5;
int ledPin = 4;
int idx = 0;
int cBuffer[50];

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(inputPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin, cBuffer[idx]);
  
  cBuffer[idx] = !digitalRead(inputPin);

  idx = idx + 1;
  idx = idx % 30;
  delay(100);
}

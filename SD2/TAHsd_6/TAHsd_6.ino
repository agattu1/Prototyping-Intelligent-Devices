int switchPin = 4;

int ledPin = 3;

int photoResPin = 2;

int photoRes0Pin = 5;

int photoResR1Pin = 6;

int photoResR2Pin = 7;

double photoResA = 0.0;

int val = 0;

int val0 = 0;

int valR1 = 0;

int valR2 = 0;

 

// the setup function runs once when you press reset or power the board

void setup() {

  // initialize digital pin LED_BUILTIN as an output.

  pinMode(switchPin, INPUT);

  pinMode(photoResPin, INPUT);

  pinMode(ledPin, OUTPUT);

  pinMode(photoRes0Pin, INPUT);

  Serial.begin(115200);

}

 

// the loop function runs over and over again forever

void loop() {


 

 

  // 1

  // 1 - input, 2 - output(low)

  pinMode(photoResR1Pin, INPUT);

  pinMode(photoResR2Pin, OUTPUT);

  digitalWrite(photoResR2Pin, LOW);

  delay(100);

  val0 = digitalRead(photoRes0Pin);

  Serial.print(val0);

 

  // 2

  // 1 - output(low), 2 - output(high)

  pinMode(photoResR1Pin, OUTPUT);

  pinMode(photoResR2Pin, OUTPUT);

  digitalWrite(photoResR2Pin, HIGH);

  delay(100);

  val0 = digitalRead(photoRes0Pin);

  Serial.print(val0);

 

  // 3

  // 1 - output(low), 2 - input

  pinMode(photoResR1Pin, OUTPUT);

  pinMode(photoResR2Pin, INPUT);

  delay(100);

  val0 = digitalRead(photoRes0Pin);

  Serial.print(val0);

 

  // 4

  // 1 - output(low), 2 - output(low)

  pinMode(photoResR1Pin, OUTPUT);

  pinMode(photoResR2Pin, OUTPUT);

  digitalWrite(photoResR1Pin, LOW);

  digitalWrite(photoResR2Pin, LOW);

  delay(100);

  val0 = digitalRead(photoRes0Pin);

  Serial.print(val0);

 

  Serial.println();

  delay(1000);

}

int pot_value = 0;
int sens_value = 0;
float calc_volt = 0.0;
int potPin = A0;
int sensPin = A1;
void setup() {
  Serial.begin(115200);
  Serial.println("Program begin.");
}
void loop() {
  // put your main code here, to run repeatedly:
  pot_value = analogRead(potPin);
  calc_volt = pot_value/1023.0 * 5.0;
  sens_value = analogRead(sensPin);
  Serial.print("PotRaw:");
  Serial.print(pot_value);
  Serial.print(", Pot:");
  Serial.print(calc_volt);
  Serial.print(", Light:");
  Serial.println(sens_value);
  delay(1);

}

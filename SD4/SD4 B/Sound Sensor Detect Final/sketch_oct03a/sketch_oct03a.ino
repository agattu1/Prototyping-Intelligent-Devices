#include "TimerOne.h"
#define SAMPLE_RATE 4000
#include "AsyncAnalog.h"
#include "Goertzel.h"


#define ADC_MIDPOINT 512




float state=0;

float Mag;
float maxVal=0;
float minVal=0;
int samples[512] ;

AsyncAnalog aa(A0) ;

volatile int count=0;
Goertzel Tone(784) ;

void setup (){
  aa.start();
  pinMode(A0,INPUT) ;
  
  pinMode (LED_BUILTIN,OUTPUT) ;
  
  digitalWrite(LED_BUILTIN,LOW) ;
  
  Timer1.initialize(250);
  Timer1.attachInterrupt(interrupt);

  Serial.begin(115200) ;
}

void interrupt() {

  if (aa.ready()) {
      samples[count] = aa.value();
      aa.start();
      count++;
      count = count % 512 ;
  } //1/.000250 and sampling at 8000 
}

void loop() {
  //Serial.println(analogRead(A0));  //betwen 0 -1023 but set it at 512
  
  if (count >= 512-1){
    noInterrupts();
  Mag = Tone.Mag(samples,512);
  Serial.println(Mag);
  if(Mag>4000){
    digitalWrite(LED_BUILTIN,HIGH);
    } else {
      digitalWrite(LED_BUILTIN,LOW);
      }
  }
  interrupts();
}
      

int touch = 1;

int led = 2;

int count = 0;

double total = 0;



void setup() {

  Serial.begin(115200);

  pinMode(led, OUTPUT);

  pinMode(touch, OUTPUT);

}


void loop() {


  Serial.println("hi");
  pinMode(touch, OUTPUT);

    

  digitalWrite(touch, LOW);

  

  delayMicroseconds(10);


  double t1 = micros();


  pinMode(touch, INPUT);


  delayMicroseconds(10);


  int breaker = 0;

  boolean flag = false;

  while (digitalRead(touch) != HIGH) {

    breaker = breaker + 1;
   

    if (breaker == 100) {

      flag = true;

      break;

    }

  }

  

  double t2 = micros();


  double difference = t2 - t1;


  if (flag == true) {

    difference = 0;

  }


  total = total + difference;

    

  count = count + 1;

  

  if (count % 100 == 0) {

    count = 0;

    double average = total / 100;

    total = 0;
    
    
    if (average > 100) {

      digitalWrite(led, HIGH);

    } else {

      digitalWrite(led, LOW);

    }

    delayMicroseconds(100);

  }

}

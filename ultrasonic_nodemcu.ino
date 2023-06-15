#include<NewPing.h>  

// for ESP8266 microcontroller
#define trigPin D0     // trigger pin
#define echoPin D1   // echo pin
NewPing sonar(trigPin, echoPin);

void setup(){
  Serial.begin(9600);
}

void loop(){
  float distance = sonar.ping_median(5);

  if(distance>400 || distance<2) Serial.println("Out of range");
  else
  {
    Serial.print("Distance: ");
    Serial.print(distance, 1); Serial.println(" cm");
  }
 
  delay(50);
}

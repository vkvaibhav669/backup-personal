#include <ArduinoJson.h>
const int trigPin =2;
const int echoPin = 0 ;
const int PIRsensor = 4;
long duration;
long distance;
long wallD = 25;
boolean us_inuse = false;
boolean pir_inuse = false;
void setup()
{
Serial.begin(9600);
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
pinMode(PIRsensor,INPUT);

}

void loop()
{
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance= duration*0.034/2;
delay(2000);



if(distance <=25)
{
  us_inuse = true;
}
if(digitalRead(PIRsensor == LOW))
{
  pir_inuse = true;
  
}

Serial.print(us_inuse || pir_inuse);




}

 

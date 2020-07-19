const int PIR = 13;
void setup()
{
 pinMode(PIR,INPUT);

 Serial.begin(115200);
 
}
void loop()
{
  if(digitalRead(PIR))
  {

    Serial.println("TRUE");
    delay(1000);
  }
  else if(!digitalRead(PIR))
  {
    Serial.println("False");
    delay(1000);
  }
}

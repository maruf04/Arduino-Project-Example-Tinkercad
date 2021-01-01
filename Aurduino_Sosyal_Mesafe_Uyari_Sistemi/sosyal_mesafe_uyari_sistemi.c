#include <Servo.h>
int pirSensoru = 13;
int pirSensorOkuyucu;
int buzzer = 9;
Servo myservo;

void setup()
{
 pinMode(13,INPUT); 
 pinMode(buzzer,OUTPUT);
 
}

void loop()
{
  pirSensorOkuyucu = digitalRead(pirSensoru);
 if (pirSensorOkuyucu ==1){
   digitalWrite(buzzer,HIGH);
   myservo.attach(10);
   myservo.write(90);
   delay(700);
   myservo.write(0);
 }
 else{
   digitalWrite(buzzer,LOW); 
     
 }
}
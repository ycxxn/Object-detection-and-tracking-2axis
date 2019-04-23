#include <Servo.h>

Servo myservo1; // 建立Servo物件，控制伺服馬達
Servo myservo2;

void setup() 
{ 
  Serial.begin(57600);
  myservo1.writeMicroseconds(1450);
  myservo2.writeMicroseconds(600);
  
  myservo1.attach(9,500,2400);
  myservo2.attach(10,500,2400);
} 
int i=1450;
int j=700;
void loop() 
{
  if(Serial.read() == 1)
  {
     myservo1.writeMicroseconds(i);
     i+=5;
     //delay(20);
     if(i > 2400)
     {
      i=2400;
     }
  }
  if(Serial.read() == 2)
  {
     myservo1.writeMicroseconds(i);
     i-=5;
     //delay(20);
     if(i < 500)
     {
      i=500;
     }
  }
  if(Serial.read() == 3)
  {
     myservo2.writeMicroseconds(j);
     j+=5;
     //delay(20);
     if(j > 1000)
     {
      j=1000;
     }
  }
  if(Serial.read() == 4)
  {
     myservo2.writeMicroseconds(j);
     j-=5;
     //delay(20);
     if(j < 600)
     {
      j=600;
     }
  }
}

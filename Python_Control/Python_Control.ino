#include <Servo.h>

Servo myservo; // 建立Servo物件，控制伺服馬達

void setup() 
{ 
  Serial.begin(57600);
  myservo.attach(9); // 連接數位腳位9，伺服馬達的訊號線
} 
int i=90;
void loop() 
{
  if(Serial.read() == 1)
  {
     myservo.write(i);
     i+=1;
     delay(20);
     if(i > 179)
     {
      i=179;
     }
  }
  if(Serial.read() == 2)
  {
     myservo.write(i);
     i-=1;
     delay(20);
     if(i < 0)
     {
      i=0;
     }
  }
}

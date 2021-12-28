#include <Servo.h>
Servo Thumb;
Servo Index;
Servo Middle;
Servo Ring;
Servo Pinky;
Servo Wrist;

void setup() 
{
Thumb.attach(2);
Index.attach(3);
Middle.attach(4);
Ring.attach(5);
Pinky.attach(6);
Wrist.attach(7);

  Serial.begin(9600);

Thumb.write(0);
Index.write(0);
Middle.write(0);
Ring.write(0);
Pinky.write(0);
}

void loop()
{
 if(Serial.available()>0)
{
  char a =Serial.read(); 
  Serial.println(a);

  if(a == '1')
      Open();
  if(a == '2')
      Close();  
}  
}

void Open()
{
Thumb.write(0);
Index.write(0);
Middle.write(0);
Ring.write(0);
Pinky.write(0);
 Serial.println("Open");
}

void Close()
{
Thumb.write(180);
Index.write(180);
Middle.write(180);
Ring.write(180);
Pinky.write(180);
 Serial.println("Close");
}

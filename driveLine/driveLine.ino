#include <Servo.h>
Servo left;
Servo right; 
Servo draw; 

int pos = 0;    // variable to store the servo position
 
void setup()
{
  left.attach(9);
 right.attach(10);
  draw.attach(11);
}
 
 
void loop()
{z
  for(pos = 90; pos < 120; pos += 1)  // goes from 0 degrees to 180 degrees
  {                                  // in steps of 1 degree
    left.write(pos);
    right.write(pos);
    draw.write(pos);
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for(pos = 120; pos>=90; pos-=1)     // goes from 180 degrees to 0 degrees
  {                                
    left.write(pos);
    right.write(pos);
    draw.write(pos);            // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}

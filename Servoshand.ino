// Sweep
// by BARRAGAN <http://barraganstudio.com> 
// This example code is in the public domain.


#include <Servo.h> 
 
Servo myservo;  // create servo object to control a servo 
                // a maximum of eight servo objects can be created 
 
int pos = 0;    // variable to store the servo position 
int servoPins[] = {2, 3, 4, 5, 6,7};
Servo servoM[6];
int i=0;
int j=0;

void setup() 
{ 
  for (i=0;i<7;i+=1){  
  servoM[i].attach(servoPins[i]);  // attaches the servo on pin 9 to the servo object 
  }
} 
 
 
void loop() 
{ 
  for(j=0;j<7;j+=1){
  for(pos = 0; pos < 180; pos += 1)  // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    servoM[j].write(pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
  for(pos = 180; pos>=1; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    servoM[j].write(pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  }
  }
} 

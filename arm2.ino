#include <Servo.h>
Servo servo1,servo2,servo3,pince1,pince2;
int pot1=A0;
int pot2=A1;
int pot3=A2;
int btn = 2;
int val1,val2,val3;

void setup() {
  pinMode(btn,INPUT);
  servo1.attach(3);
  servo2.attach(5);
  servo3.attach(6);
  pince1.attach(9);
  pince2.attach(10);

}
void loop() {
   if(digitalRead(btn)==LOW){
    
     pince2.write(90);
     pince1.write(0);
      
  }
  else {
    pince2.write(0);
    pince1.write(90);
  }
    
    



 
 val1=map(analogRead(pot1),0,1023,0,165);
 val2=map(analogRead(pot2),0,1023,0,165);
 val3=map(analogRead(pot3),0,1023,0,165);
 servo1.write(val1);
 servo2.write(val2);
 servo3.write(val3);

 }

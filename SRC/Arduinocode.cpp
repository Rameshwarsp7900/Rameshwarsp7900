#include <Arduino.h>

int f,x,z;
void setup() { 
    pinMode(3, INPUT);
    pinMode(4, INPUT);
}
void loop() {
  a = digitalRead(3);
  b = digitalRead(4);

  f = (!x&&z)||(x&&!z);
digitalWrite(6,f);

}

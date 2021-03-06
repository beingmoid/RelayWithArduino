/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://www.arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
  pinMode(2,INPUT);
  pinMode(10,OUTPUT);
  pinMode(3,INPUT);
}

// the loop function runs over and over again forever
void loop() {

 if(digitalRead(2)==HIGH)
 {

  digitalWrite(13,HIGH);
 }
  if(digitalRead(13)==HIGH && digitalRead(2)==LOW)
 {
     digitalWrite(13,LOW);
 }
 
 if(digitalRead(3)==HIGH)
 {

  digitalWrite(10,HIGH);
 }
  if(digitalRead(10)==HIGH && digitalRead(3)==LOW)
 {
     digitalWrite(10,LOW);
 }
 
             
             
}

#include <Servo.h>
const int buttonPin = A5;      
int servoPin = 1;
int lastButtonState;    
int currentButtonState;
bool activate = false;
float randNumber;
const int PIEZO =  13;
Servo Servo1;

void setup() {
  pinMode(buttonPin, INPUT);
  currentButtonState = digitalRead(buttonPin);
  Servo1.attach(servoPin);
  Servo1.write(110);
  delay(1000);
  Servo1.write(110);
  delay(1000);
  Servo1.write(110);
  pinMode(PIEZO, OUTPUT);
  digitalWrite(PIEZO, HIGH); 
  delay(10);
  digitalWrite(PIEZO, LOW); 
}

void loop() {

  digitalWrite(PIEZO, LOW); 
  delay(random(3000, 10000));
  digitalWrite(PIEZO, HIGH);
  delay(1000); 
  digitalWrite(PIEZO, LOW); 
  delay(10000); 
  Servo1.write(140);
  delay(100);
  Servo1.write(110);
  delay(500);

}

#include <Servo.h>

// pin connections
const int servopin = 7;
const int trigpin = 9;
const int echopin = 10;

float duration;
float distanceCM;
float distanceIN;

Servo myServo;

void setup() {
  Serial.begin(9600);
  pinMode(echopin, INPUT);
  pinMode(trigpin, OUTPUT);
  myServo.attach(servopin);  // ✅ fixed: was 'Myservo' and 'servoPin'
}

void loop() {

  Serial.println("loop running");

  
  // start with a clean signal
  digitalWrite(trigpin, LOW);  // ✅ fixed: was 'digitalwire' and 'trigPin'
  delayMicroseconds(2);

  // send trigger signal
  digitalWrite(trigpin, HIGH);  // ✅ fixed: was 'trigPin'
  delayMicroseconds(10);
  digitalWrite(trigpin, LOW);

  duration = pulseIn(echopin, HIGH);  // ✅ fixed: moved ABOVE distanceCM, was 'echoPin'
  distanceCM = (duration * 0.034) / 2;  
  distanceIN = distanceCM / 2.54;

  Serial.print("distance : ");
  Serial.print(distanceCM);
  Serial.print(" cm  ");        // ✅ fixed: can't add string to float
  Serial.print(distanceIN);
  Serial.println(" in");        // ✅ fixed: was missing semicolon

  if (distanceIN <= 6) {
    myServo.write(90);
  }
  else {
    myServo.write(0);
  }
}
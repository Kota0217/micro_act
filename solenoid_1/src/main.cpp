#include <Arduino.h>

int input;

void setup() {
  pinMode(3, OUTPUT);

  //digitalWrite(3, LOW);
  delay(2000);
  //出力電圧
  double vol = 3.0;

  input = vol * 255.0 / 5.0;

}

void loop() {
  digitalWrite(3, HIGH);
  //analogWrite(3, input);
  delay(1000);

  //digitalWrite(3, LOW);
  delay(1000);

}
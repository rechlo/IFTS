#include <LiquidCrystal.h>;
LiquidCrystal lcd(1, 2, 4, 5, 6, 7);
const int trigPin = 5;
const int echoPin = 6;
long duration;
int distanceCm ;

void setup() {
  lcd.begin(16, 2);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distanceCm = duration * 0.034 / 2;
  lcd.setCursor(0, 0);
  lcd.print("lunghezza: ");
    lcd.setCursor(5, 1);
  lcd.print(distanceCm);
  lcd.print(" cm");
  delay (10);
}

const int Val_MAX = 50;
const int Val_MIN = 20;
int valore;

void setup() {
  Serial.begin (9600);
  randomSeed(analogRead(0));
}

void loop() {
  for ( valore = random(Val_MIN, Val_MAX); valore >= 0; valore--) {
    Serial.println(valore);
    delay(400);
  }
  delay(5000);
}

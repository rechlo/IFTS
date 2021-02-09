const int VAL_MAX = 10;
const int VAL_MIN = 1;
int VAL;
int c;

void setup() {
  Serial.begin (9600);
  randomSeed(analogRead(0));
}
void loop() {
  VAL =  random(VAL_MIN, VAL_MAX);
  for (c = 0; c <= 10; c++) {
  Serial.println(VAL*c);
  }
delay(3000);
}

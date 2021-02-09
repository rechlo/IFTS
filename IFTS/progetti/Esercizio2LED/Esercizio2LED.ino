const byte LED1 = 2;
const byte LED2 = 3;
const byte tasto = 4;
int c;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(tasto, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(tasto) == LOW) {
    //tasto premuto
    for ( c = 0; c < 10; c++) {
      digitalWrite(LED1, HIGH);
      if (c < 5);
        digitalWrite(LED2, HIGH);
      delay(200);
      digitalWrite(LED1, LOW);
      if (c < 5);
        digitalWrite(LED2, LOW);
      delay(200);

    }
  } else {
    //tasto non premuto
  }
}

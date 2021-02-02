int temperatura; //definito variabile di tipo intero
bool pulsante; //definito una variabile booleana



void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, INPUT_PULLUP);
}

void loop() {
  temperatura = 5;
  pulsante = digitalRead(12);

  if (pulsante == LOW) {
    digitalWrite(13, HIGH);
    delay(5000);
  } else {
    digitalWrite(13, LOW);
  }

  if (temperatura <= 18) {
    // accendo LED
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }
}

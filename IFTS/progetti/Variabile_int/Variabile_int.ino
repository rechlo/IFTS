#define TASTO = 5 //definire una costante senza definire il tipo
const int LED = 10; //cambiando il valore lo cambia in tutto il programma dove c'è LED - definisce tipo di costante - meglio di usare #define

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  delay(1000);
}

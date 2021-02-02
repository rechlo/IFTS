void setup() {
  Serial.begin(9600); //configuro trasmissione seriale
  pinMode(12, INPUT_PULLUP);
}

void loop() {
  Serial.println("Ciao"); // trasmetto al PC tramite porta USB la parola "Ciao"
  delay(500);
}

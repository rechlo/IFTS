void setup() {
  Serial.begin(9600);
  while (!Serial) {
  }
  Serial.println("Accende e spegne il LED con la seriale");
  Serial.println("1 accende il LED");
  Serial.println("0 spegne il LED");
  pinMode (LED_BUILTIN, OUTPUT);
}

void loop() {
  if (Serial.available ()) {
    unsigned char comando = Serial.read(); //legge un carattere dalla seriale e lo mette nella variabile comando
    if (comando == '2') {
      Serial.println("lampeggia");
      digitalWrite(LED_BUILTIN, HIGH);
      Serial.println("acceso");
      delay(500);
      digitalWrite(LED_BUILTIN, LOW);
      Serial.println("spento");
      delay(500);
      digitalWrite(LED_BUILTIN, HIGH);
      Serial.println("acceso");
      delay(500);
      digitalWrite(LED_BUILTIN, LOW);
      Serial.println("fine lampeggio");
    } else if (comando == '1') {
      digitalWrite(LED_BUILTIN, HIGH);
      Serial.println("acceso");
    } else if (comando == '0') {
      digitalWrite(LED_BUILTIN, LOW);
      Serial.println("spento");
    } else {
      Serial.println("comando non riconosciuto");
    }
  }
}

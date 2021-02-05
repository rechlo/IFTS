#define LED LED_BUILTIN

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
  Serial.println("l lampeggia il LED ");
}

void loop() {
  if (Serial.available ()) {
    unsigned char comando = Serial.read(); //legge un carattere dalla seriale e lo mette nella variabile comando
    if ('l' == comando) {
      Serial.println("lampeggia");
      while (!Serial.available()) {
      };
      comando = Serial.read();
      if (comando >= 49 && comando <= 57) {
        comando = comando - 48; // 57=9 48=0 Tabella ASCII
        Serial.print(comando);
        Serial.println(" volte");
        unsigned char sec = Serial.read();
        if (sec >= 49 && sec <= 57);
        Serial.print(sec);
        Serial.println(" millisecondi");
        for ( unsigned char lampeggi = 0; lampeggi < comando; lampeggi++) {
          digitalWrite(LED, HIGH);
          Serial.println("acceso");
          delay(100 * sec);
          digitalWrite(LED, LOW);
          Serial.println("spento");
          delay(500);
        }
        Serial.println("fine lampeggio");
      }
    } else {
      Serial.println("comando non riconosciuto");

    }
  }
}

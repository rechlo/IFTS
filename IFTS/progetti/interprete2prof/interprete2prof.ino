#define LED_start 2
#define LED_end 9
#define LED 9

void setup() {
   Serial.begin(9600);
  for (unsigned char led=LED_start; led <= LED_end; led++);{
  pinMode(LED, OUTPUT);
  Serial.println(LED);
}
  
  Serial.println("Accende e spegne i LED da 2 a 9 con la seriale");
  Serial.println("0 spegne il LED");
  Serial.println("1 accende il LED");
  Serial.println("2 lampeggia il LED");
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()) {
    unsigned char comando = Serial.read();
    if ( 'a' == comando ) {
      digitalWrite(LED, HIGH);
      Serial.println("Acceso");
    } else if ( 's' == comando ) {
      digitalWrite(LED, LOW);
      Serial.println("Spento");
    } else if ( '2' == comando ) {
      Serial.print("Lampeggia: ");
      digitalWrite(LED, HIGH);
      Serial.print("acceso, ");
      delay(500);
      digitalWrite(LED, LOW);
      Serial.print("spento, ");
      delay(500);
      digitalWrite(LED, HIGH);
      Serial.println("acceso");
      delay(500);
    } else {
      Serial.println("Comando non riconosciuto. Inserire 0 o 1!");
    }
  }
}

void setup() {
  pinMode(13, OUTPUT);       //configuro il pin 13 come output (dove c'è il LED)
  pinMode(12,INPUT_PULLUP); //configuro il pin 12 come input (dove c'è il pulsante)
}

void loop() {

  if (digitalRead(12) == LOW) { // se il pulsante è premuto?
    //sì, il pulsante è premuto
    digitalWrite(13, HIGH); //accendo il LED
    delay(5000);// aspetto 5 sec
  } else {
    //no, non è premuto
    digitalWrite(13, LOW) //spengo il LED
; }
     delay(5000);// aspetto 5 sec
}

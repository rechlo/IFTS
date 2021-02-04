int c; //definisco contatore

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("inizio");
  for (c = 0; c < 10; c++) { //esegue un ciclo con il contatore "c" che parte da 0 e arriva fino a 9
    Serial.println("buona giornata"); //trasmette la frase
  }
  Serial.println("fine");

  delay(1000);
}

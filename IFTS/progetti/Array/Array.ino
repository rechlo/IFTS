int lista[20]; //dichiaro array di 20 caselle
int c;

void setup() {
  Serial.begin(9600);
}

void loop() {
  for (c = 0; c < 20; c++) { //ciclo che riempie array
    lista[c] = ++c;
  }
  for (c = 0; c < 20; c++) { //ciclo che trasmette valori
    Serial.print("c");
    Serial.print(" = ");
    Serial.println(lista[c]);
  }
  Serial.println("\n");
  delay(2000);
}

void setup() {
  randomSeed(analogRead(0))//creare codice di mescolamento casuale
}

void loop() {
  random(60, 100)//si può mettere un solo numero come num.massimo o due il cui numero casuale sarà nell'intervallo fra i due
}

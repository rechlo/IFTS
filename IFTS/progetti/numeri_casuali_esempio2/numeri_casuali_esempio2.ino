const int GIORNO_MAX = 8; //definisco una costante chiamata VOTO_MAX di tipo int
const int GIORNO_MIN = 1; //definisco una costante chiamata VOTO_MIN di tipo int
int GIORNO;

void setup() {
  Serial.begin (9600); //configuro la comunicazione seriale
  randomSeed(analogRead(0)); // "mescolo" i numeri casuali
}

void loop() {
  GIORNO =  random(GIORNO_MIN, GIORNO_MAX);

  if (GIORNO == 1) {
    Serial.println("LUNEDI'");
  } else if (GIORNO == 2) {
    Serial.println("MARTEDI'");
  } else if (GIORNO == 3) {
    Serial.println("MERCOLEDI'");
  } else if (GIORNO == 4) {
    Serial.println("GIOVEDI'");
  } else if (GIORNO == 5) {
    Serial.println("VENERDI'");
  } else if (GIORNO == 6) {
    Serial.println("SABATO");
  } else {
    Serial.println("DOMENICA");
  }
  delay(1000);
}

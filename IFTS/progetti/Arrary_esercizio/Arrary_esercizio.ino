const int VAL1_MAX = 100;
const int VAL1_MIN = 0;
const int VAL2_MAX = 4;
const int VAL2_MIN = 1;
int n1;
int n2;
int n3;
int operazione;
int risultato;

void setup() {
  Serial.begin (9600);
  randomSeed(analogRead(0));
}

void loop() {
  n1 =  random(VAL1_MIN, VAL1_MAX);
  n2 =  random(VAL1_MIN, VAL1_MAX);
  n3 =  random(VAL2_MIN, VAL2_MAX);
  if ( operazione == 1) {
    risultato = n1 + n2;
    Serial.println(risultato);
  } else if ( operazione == 2) {
    risultato = n1 - n2;
    Serial.println(risultato);
  } else if ( operazione == 3) {
    risultato = n1 * n2;
    Serial.println(risultato);
  } else {
    if (n2 == 0) {
      Serial.print("errore");
    } else {
      risultato = n1 / n2;
      Serial.println(risultato);
    }
  }
  delay(500);
}

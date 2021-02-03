const int VOTO_MAX = 32; //definisco una costante chiamata VOTO_MAX di tipo int
const int VOTO_MIN = 18; //definisco una costante chiamata VOTO_MIN di tipo int
int voto;

void setup() {
  Serial.begin (9600); //configuro la comunicazione seriale
  randomSeed(analogRead(0)); // "mescolo" i numeri casuali
}

void loop() {
  voto =  random(VOTO_MIN, VOTO_MAX); //assegno alla variabile voto il num. casuale generato tra VOTO_MAX e VOTO_MIN
  if (voto == VOTO_MAX - 1) { //controllo se voto = 31 cioè lode
    Serial.println("LODE"); //trasmetto la parola lode se voto = 31
  } else {
    Serial.println(voto); //trasmetto  il voto
  }
  delay (1000);
}

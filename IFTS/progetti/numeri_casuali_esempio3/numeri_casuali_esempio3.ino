const int GIORNO_MAX = 8; //definisco una costante chiamata VOTO_MAX di tipo int
const int GIORNO_MIN = 1; //definisco una costante chiamata VOTO_MIN di tipo int
int GIORNO;

void setup() {
  Serial.begin (9600); //configuro la comunicazione seriale
  randomSeed(analogRead(0)); // "mescolo" i numeri casuali
}

void loop() {
  GIORNO =  random(GIORNO_MIN, GIORNO_MAX);

  switch (GIORNO) {
    case 1:
      Serial.println("lun");
      break;
    case 2:
      Serial.println("mar");
      break;
    case 3:
      Serial.println("mer");
      break;
    case 4:
      Serial.println("gio");
      break;
    case 5:
      Serial.println("ven");
      break;
    case 6:
      Serial.println("sab");
      break;
    default:
      Serial.println("dom");
      break; //non necessario

  }
  delay(1000);
}

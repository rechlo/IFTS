//www.elegoo.com
//2016.12.12

/************************
  Exercise the motor using
  the L293D chip
************************/

#define ENABLE 5
#define DIRA 3
#define DIRB 4
unsigned char speed;
int i;

void setup() {
  //---set pin direction
  pinMode(ENABLE, OUTPUT);
  pinMode(DIRA, OUTPUT);
  pinMode(DIRB, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  Serial.println("PWM full then slow");
  //---PWM example, full speed then slow
  Serial.println("avanti");
  analogWrite(ENABLE, 255);
  delay(1000);
  digitalWrite(DIRA, HIGH); //one way
  digitalWrite(DIRB, LOW);
  for (unsigned char speed = 145; speed < 255; speed++) {
    analogWrite(ENABLE, speed); //enable on
    Serial.println(speed);
    delay(100);
  }
  Serial.println("indietro");
  digitalWrite(DIRA, LOW); //one way
  digitalWrite(DIRB, HIGH);
  for (unsigned char speed = 0; speed < 255; speed--) {
    analogWrite(ENABLE, speed); //enable on
    Serial.println(speed);
    delay(100);
  }
    analogWrite(ENABLE, 180); //half speed
    delay(100);
    analogWrite(ENABLE, 128); //half speed
    delay(100);
    analogWrite(ENABLE, 50); //half speed
    delay(100);
    analogWrite(ENABLE, 128); //half speed
    delay(100);
    analogWrite(ENABLE, 180); //half speed
    delay(100);
    analogWrite(ENABLE, 255); //half speed
    delay(100);
    digitalWrite(ENABLE, LOW); //all done
    delay(100);
  }

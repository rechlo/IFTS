void setup() {
  Serial.begin(9600);
  Serial.print("inserisci una stringa di max 16 caratteri");
}
void loop() {
  if (Serial.available()) {
    Serial.readString();
    char stringa [20];
    stringa =  Serial.readString();
    Serial.print(stringa);
    Serial.print("ok");
  }

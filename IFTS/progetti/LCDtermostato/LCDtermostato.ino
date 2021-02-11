#define soglia 25
#define isteresi 1.0

// include the library code:
#include <LiquidCrystal.h>

#include "DHT.h"

#define DHTPIN 2     // Digital pin connected to the DHT sensor
// Feather HUZZAH ESP8266 note: use pins 3, 4, 5, 12, 13 or 14 --
// Pin 15 can work but DHT must be disconnected during program upload.

// Uncomment whatever type you're using!
#define DHTTYPE DHT11   // DHT 11
//#define DHTTYPE DHT22   // DHT 22  (AM2302), AM2321
//#define DHTTYPE DHT21   // DHT 21 (AM2301)

// Initialize DHT sensor.
// Note that older versions of this library took an optional third parameter to
// tweak the timings for faster processors.  This parameter is no longer needed
// as the current DHT reading algorithm adjusts itself to work on faster procs.
DHT dht(DHTPIN, DHTTYPE);

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

unsigned long tempo;

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  //Serial.begin(9600);
  //Serial.println(soglia -(isteresi / 2));
  //Serial.print("umidita'");
  //Serial.print("\t");
  //Serial.println("temperatura");
  //Serial.println(F("DHTxx test!"));
  lcd.setCursor(0, 0);
  lcd.print("Soglia: ");
  lcd.setCursor(13, 1);
  lcd.print("off ");
  dht.begin();
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  // Print a message to the LCD.

  // print the number of seconds since reset:
  //lcd.print(millis() / 1000);

  if ((millis() - tempo) > 500) {
    tempo = millis();
    lcd.setCursor(0, 1);
    // Reading temperature or humidity takes about 250 milliseconds!
    // Sensor readings may also be up to 2 seconds 'old' (its a very slow sensor)
    int h = dht.readHumidity();
    // Read temperature as Celsius (the default)
    float t = dht.readTemperature();
    lcd.print("H:");
    lcd.print(h);
    lcd.setCursor(6, 1);
    lcd.print("T:");
    lcd.print(t, 1);
    lcd.setCursor(13, 1);
    if ( t > ( soglia + (isteresi / 2) )) {
      lcd.print("off ");
      digitalWrite(LED_BUILTIN, LOW);
    } else if ( t < ( soglia - (isteresi / 2)) ) {
      lcd.print("on ");
      digitalWrite(LED_BUILTIN, HIGH);
    }
    lcd.setCursor(8,0);
      lcd.print(soglia);
    //Serial.print(h);
    //Serial.print("\t");
    //Serial.println(t);
  }
}

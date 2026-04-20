#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>

// Define I2C LCD address
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Define DHT sensor pin and type
#define DHTPIN 7
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  lcd.init();          
  lcd.backlight();     
  dht.begin();         

  // Welcome message
  lcd.setCursor(0, 0);
  lcd.print("Jagdamba College");
  lcd.setCursor(0, 1);
  lcd.print("of Engineering");
  delay(3000);

  lcd.clear();
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  // Error check
  if (isnan(h) || isnan(t)) {
    lcd.setCursor(0, 0);
    lcd.print("Sensor Error!");
    delay(1000);
    return;
  }

  // Temperature display
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(t);
  lcd.print((char)223); // degree symbol
  lcd.print("C ");

  // Humidity display
  lcd.setCursor(0, 1);
  lcd.print("Humid: ");
  lcd.print(h);
  lcd.print("% ");

  delay(2000);
}

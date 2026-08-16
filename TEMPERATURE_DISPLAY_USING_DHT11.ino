/*
  =====================================================
  PROJECT : Temperature Display Using DHT11
  BOARD   : Arduino UNO
  SENSOR  : DHT11 Temperature & Humidity Sensor
  =====================================================

  CONNECTIONS:

  DHT11 VCC   -> Arduino 5V
  DHT11 DATA  -> Arduino D2
  DHT11 GND   -> Arduino GND

  Required Library:
  DHT Sensor Library by Adafruit

  Developed by:
  Alpha Digitronix Solutions

  THINK • BUILD • INNOVATE
  =====================================================
*/

#include <DHT.h>

// DHT11 data pin
#define DHTPIN 2

// Sensor type
#define DHTTYPE DHT11

// Create DHT sensor object
DHT dht(DHTPIN, DHTTYPE);

void setup() {

  // Start Serial Communication
  Serial.begin(9600);

  // Start DHT11 sensor
  dht.begin();

  Serial.println("================================");
  Serial.println(" DHT11 TEMPERATURE DISPLAY");
  Serial.println("================================");
}

void loop() {

  // Read humidity
  float humidity = dht.readHumidity();

  // Read temperature in Celsius
  float temperature = dht.readTemperature();

  // Check whether sensor reading failed
  if (isnan(humidity) || isnan(temperature)) {

    Serial.println("Failed to read from DHT11 sensor!");

  } else {

    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.print(" °C");

    Serial.print(" | Humidity: ");
    Serial.print(humidity);
    Serial.println(" %");
  }

  // DHT11 should not be read too frequently
  delay(2000);
}
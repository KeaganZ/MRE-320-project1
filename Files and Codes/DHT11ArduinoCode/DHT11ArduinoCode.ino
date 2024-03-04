#include "DHT.h"

#define DHTPIN 2     // Set the pin connected to the DHT11 data pin
#define DHTTYPE DHT11   // DHT 11 

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println("DHT11 test!");
  dht.begin();

  float temperatures[10]; // Array to store temperature values
  float humidities[10];   // Array to store humidity values

  // Output ten values of temperature and humidity
  for (int i = 0; i < 10; i++) {
    // Reading temperature or humidity takes about 250 milliseconds!
    // Sensor readings may also be up to 2 seconds 'old' (it's a very slow sensor)
    float temperature = dht.readTemperature();
    // Read humidity
    float humidity = dht.readHumidity();

    // Check if any reads failed and exit early (to try again).
    if (isnan(temperature) || isnan(humidity)) {
      Serial.println("Failed to read from DHT sensor!");
      return;
    }

    // Store temperature and humidity in arrays
    temperatures[i] = temperature;
    humidities[i] = humidity;

    delay(1000); // Delay between readings
  }

  // Print temperature values
  Serial.println("Temperature values:");
  for (int i = 0; i < 10; i++) {
    Serial.println(temperatures[i]);
  }

  Serial.println("\t");

  // Print humidity values
  Serial.println("Humidity values:");
  for (int i = 0; i < 10; i++) {
    Serial.println(humidities[i]);
  }
}

void loop() {
  // Your loop code here (if needed)
}

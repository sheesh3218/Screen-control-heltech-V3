#include <Arduino.h>
const int ledPin = 35;


void setup()
{
    // Initialiser la communication série à 115200 bauds
    Serial.begin(115200);
    pinMode(ledPin, OUTPUT);
}

void loop()
{
  // Allumer la LED
    digitalWrite(ledPin, HIGH);
    // Attendre 500 millisecondes
    delay(500);
    // Éteindre la LED
    digitalWrite(ledPin, LOW);
    // Attendre 500 millisecondes
    delay(500);
    
}

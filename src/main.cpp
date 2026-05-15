#include <Arduino.h>

// #define RGB_PIN 48 // Teste minimo: pisca LED RGB no pino 48 (ESP32-S3-DevKitC-1)
#define RGB_PIN 13

void setup()
{
  Serial.begin(115200);
  pinMode(RGB_PIN, OUTPUT);
  delay(2000);  // espera USB reconectar apos reset
  Serial.println("=== ESP32-S3 Teste Minimo ===");
}

void loop()
{
  // Vermelho
  digitalWrite(RGB_PIN, HIGH);
  Serial.println("VERMELHO");
  delay(500);

  // Apagado
  digitalWrite(RGB_PIN, LOW);
  Serial.println("APAGADO");
  delay(500);

  // // Vermelho
  // neopixelWrite(RGB_PIN, 255, 0, 0);
  // Serial.println("VERMELHO");
  // delay(500);

  // // Apagado
  // neopixelWrite(RGB_PIN, 0, 0, 0);
  // Serial.println("APAGADO");
  // delay(500);

  // // Verde
  // neopixelWrite(RGB_PIN, 0, 255, 0);
  // Serial.println("VERDE");
  // delay(500);

  // // Apagado
  // neopixelWrite(RGB_PIN, 0, 0, 0);
  // Serial.println("APAGADO");
  // delay(500);
}

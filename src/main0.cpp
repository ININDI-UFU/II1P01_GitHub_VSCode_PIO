#include <Arduino.h>

#define LED_PIN 13    //Configura o pino de Saida do LED
#define pinPWM 27     //Configura o pino de Saida do PWM
#define pinAnalog 34  // GPIO34 = ADC1_CH6 (GPIO23 nao possui ADC no ESP32 classico)

void setup()
{
    Serial.begin(921600);
    pinMode(LED_PIN, OUTPUT);
    pinMode(pinPWM, OUTPUT);
    pinMode(pinAnalog, INPUT);
    Serial.print("Iniciando transmissão de dados do ADC1_CH6 (GPIO34) para o PWM (GPIO27) e LED (GPIO13)...");
}

void loop()
{
    const uint32_t now = millis();
    static uint32_t t1 = 0;
    if ((now - t1) >= 500)
    {
        t1 = now;
        digitalWrite(LED_PIN, !digitalRead(LED_PIN));
        Serial.println("LED alternado");
    }
}

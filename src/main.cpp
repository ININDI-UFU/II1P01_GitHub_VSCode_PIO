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
}

void loop()
{
    const uint32_t now = millis();
    static uint32_t t1 = 0;
    if ((now - t1) >= 500)
    {
        t1 = now;
        digitalWrite(LED_PIN, !digitalRead(LED_PIN));  
    }

    static uint32_t t2 = 0;
    if ((now - t2) >= 10)
    {
        t2 = now;
        const int analogValue = analogRead(pinAnalog);       // 0..4095 (12 bits)
        const int pwmValue = map(analogValue, 0, 4095, 0, 255); // analogWrite: 0..255
        analogWrite(pinPWM, pwmValue);

        Serial.print(">graf:");
        Serial.print(now);
        Serial.print(":");
        Serial.print(analogValue);
        Serial.println("|g");
    }
}

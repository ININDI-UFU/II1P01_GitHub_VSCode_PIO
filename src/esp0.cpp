#include <Arduino.h>
#include <esp32-hal-rgb-led.h>

constexpr uint8_t LED_PIN = 23;
const uint8_t COLORS[][3] = {
    {32, 0, 0}, {0, 32, 0}, {0, 0, 32},
    {32, 32, 0}, {0, 32, 32}, {32, 0, 32},
};
constexpr size_t NUM_COLORS = sizeof(COLORS) / sizeof(COLORS[0]);

void setup()
{
  pinMode(LED_PIN, OUTPUT);
  neopixelWrite(RGB_BUILTIN, COLORS[0][0], COLORS[0][1], COLORS[0][2]);
}

void loop()
{
  uint32_t now = millis();

  constexpr uint32_t BLINK_MS = 1000;
  static uint32_t prevBlink = 0;
  static bool ledState = false;
  if (now - prevBlink >= BLINK_MS) {
    prevBlink = now;
    ledState = !ledState;
    digitalWrite(LED_PIN, ledState);
  }

  constexpr uint32_t COLOR_MS = 1000;
  static uint32_t prevColor = 0;
  static size_t colorIdx = 0;  
  if (now - prevColor >= COLOR_MS) {
    prevColor = now;
    colorIdx = (colorIdx + 1) % NUM_COLORS;
    neopixelWrite(RGB_BUILTIN, COLORS[colorIdx][0], COLORS[colorIdx][1], COLORS[colorIdx][2]);
  }
}

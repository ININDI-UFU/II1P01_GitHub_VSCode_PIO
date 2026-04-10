#include <Arduino.h>
#include <esp32-hal-rgb-led.h>

#ifndef RGB_BUILTIN
#error "RGB_BUILTIN nao esta definido. Este codigo foi feito para ESP32-S3."
#endif

namespace
{
    constexpr uint8_t LED_PIN = 23; // Mesmo pino D1 usado no codigo anterior.
    constexpr uint32_t LED_BLINK_INTERVAL_MS = 1000;
    constexpr uint32_t PIXEL_COLOR_INTERVAL_MS = 1000;

    struct RgbColor
    {
      uint8_t red;
      uint8_t green;
      uint8_t blue;
    };

    constexpr RgbColor PIXEL_COLORS[] = {
        {32, 0, 0},
        {0, 32, 0},
        {0, 0, 32},
        {32, 32, 0},
        {0, 32, 32},
        {32, 0, 32},
    };

    bool ledState = false;
    uint32_t previousLedBlinkMillis = 0;
    uint32_t previousPixelColorMillis = 0;
    size_t currentColorIndex = 0;

    void setPixelColor(const RgbColor &color)
    {
      neopixelWrite(RGB_BUILTIN, color.red, color.green, color.blue);
    }

    void toggleLed()
    {
      ledState = !ledState;
      digitalWrite(LED_PIN, ledState ? HIGH : LOW);
    }

    void advancePixelColor()
    {
      currentColorIndex = (currentColorIndex + 1) % (sizeof(PIXEL_COLORS) / sizeof(PIXEL_COLORS[0]));
      setPixelColor(PIXEL_COLORS[currentColorIndex]);
    }

    void runBlinkLedTask(const uint32_t currentMillis)
    {
      previousLedBlinkMillis = currentMillis;
      toggleLed();
    }

    void runPixelColorTask(const uint32_t currentMillis)
    {
      previousPixelColorMillis = currentMillis;
      advancePixelColor();
    }
} // namespace

void setup()
{
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);
  setPixelColor(PIXEL_COLORS[currentColorIndex]);
}

void loop()
{
  const uint32_t currentMillis = millis();
  if ((currentMillis - previousLedBlinkMillis) >= LED_BLINK_INTERVAL_MS)
  {  
    runBlinkLedTask(currentMillis);
  }
  if ((currentMillis - previousPixelColorMillis) >= PIXEL_COLOR_INTERVAL_MS)
  {  
    runPixelColorTask(currentMillis);
  }
}

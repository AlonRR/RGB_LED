#include <Arduino.h>

#define RGB_LEDA_RED 33
#define RGB_LEDA_GREEN 32
#define RGB_LEDA_BLUE 34

void setup()
{
    Serial.begin(115200);
    pinMode(RGB_LEDA_RED, OUTPUT);
    pinMode(RGB_LEDA_GREEN, OUTPUT);
    pinMode(RGB_LEDA_BLUE, OUTPUT);

}

int val = 0;
void loop()
{
    // int line = digitalRead(LINE_TRACKER);
    for (val = 255; val > 0; val--)
    {
        analogWrite(RGB_LEDA_RED, val);
        analogWrite(RGB_LEDA_BLUE, 255 - val);
        analogWrite(RGB_LEDA_GREEN, 128 - val);
        Serial.println(val, DEC);
        delay(5);
    }
    for (val = 0; val < 255; val++)
    {
        analogWrite(RGB_LEDA_RED, val);
        analogWrite(RGB_LEDA_BLUE, 255 - val);
        analogWrite(RGB_LEDA_GREEN, 128 - val);
        Serial.println(val, DEC);
        delay(5);
    }
}

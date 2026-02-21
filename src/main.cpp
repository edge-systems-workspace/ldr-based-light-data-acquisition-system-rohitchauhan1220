#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Light Intensity Monitoring using LDR
 * @author Rohit Chauhan
 * @date 2026-02-DD
 *
 * @details
 * Reads analog brightness data from LDR sensor
 * and displays structured output via Serial Monitor.
 */

#define LDR_PIN A0
int ldrValue = 0;

void setup() {
    Serial.begin(9600);

    Serial.println("LDR Light Intensity Monitoring System");
    Serial.println("System Initialized...\n");
}

void loop() {

    ldrValue = analogRead(LDR_PIN);
    Serial.print("Raw ADC Value: ");
    Serial.println(ldrValue);

    if (ldrValue > 500)    {
        Serial.println("Environment Status: BRIGHT");
    }
    else
    {
        Serial.println("Environment Status: DARK");
    }

    delay(1000);
}

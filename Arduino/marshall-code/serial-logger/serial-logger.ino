/**
 * @file serial-logger.ino
 * @author Thomas Sears (thomas.sears@queensu.ca)
 * @brief Demo program with read-serial.py for logging data over USB/serial connections
 * @version 1.1
 * @date 2022-12-22
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <Adafruit_SCD30.h>

Adafruit_SCD30 scd;

void setup()
{
    // Open the serial port at 115200 bps
    Serial.begin(115200);

    // Wait for serial connection before starting
    while (!Serial)
    {
        delay(10);
    }

    // Initialize the sensor
    if (!scd.begin())
    {
        while (1)
        {
            delay(10); // This will stay here forever if a sensor isn't found
        }
    }

    // Set the measurement interval [2-1800 s]
    scd.setMeasurementInterval(2);
}

void loop()
{
    // The SCD30 will report when it is ready. We can poll that function until it is true.
    if (scd.dataReady())
    {
        // The library also has a handy check if data can't be read
        if (!scd.read())
        {
            return;
        }

        Serial.print(scd.temperature);
        Serial.print(",");
        Serial.print(scd.relative_humidity);
        Serial.print(",");
        Serial.println(scd.CO2);
    }
}
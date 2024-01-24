/**
 * @file led-signal.ino
 * @author Thomas Sears (thomas.sears@queensu.ca)
 * @brief Use the Adafruit NeoPixel board to display some colours
 * @version 1.0
 * @date 2022-12-21
 *
 * @copyright Copyright (c) 2022
 *
 */

// Need to install/import this library.
// More detail: https://learn.adafruit.com/adafruit-neopixel-uberguide/arduino-library-use
// Code best practices: https://blog.adafruit.com/2022/07/11/neopixel-arduino-library-best-practices/
#include <Adafruit_NeoPixel.h>

int pin = A5;      // Data pin for the NeoPixel array
int numPixels = 8; // Define the number of NeoPixels on the board

// NeoPixel color format & data rate.
// We have an RGBW pixel array (there is colour and a white pixel).
int pixelFormat = NEO_RGBW + NEO_KHZ800;

// Create a pointer for the NeoPixel object (must be outside all functions)
Adafruit_NeoPixel *pixels;

void setup()
{
  // Then create a new NeoPixel object dynamically with these values:
  pixels = new Adafruit_NeoPixel(numPixels, pin, pixelFormat);

  // Initialize NeoPixel strip object
  pixels->begin();
}

void loop()
{
  pixels->clear(); // Set all pixel colors to 'off'

  // The first NeoPixel is #0, second is #1, all the way up
  // to the count of pixels minus one.

  // Set pixels to white at mid-intensity
  for (int i = 0; i < numPixels; i++)
  { // For each pixel...

    // pixels->Color() takes RGBW values, from 0,0,0,0
    // up to 255,255,255,255 and converts to expected format

    // set pixel to white
    pixels->setPixelColor(i, pixels->Color(0, 0, 0, 100));

    pixels->show(); // Send the updated pixel colors to the hardware.

    delay(500); // Pause before next pass through loop
  }

  // Set pixels to blue at mid-intensity
  for (int i = 0; i < numPixels; i++)
  { // For each pixel...

    // set pixel to blue
    pixels->setPixelColor(i, pixels->Color(0, 0, 100, 0));

    pixels->show(); // Send the updated pixel colors to the hardware.

    delay(500); // Pause before next pass through loop
  }
}

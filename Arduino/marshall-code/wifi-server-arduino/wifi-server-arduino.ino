/**
 * @file wifi-server-arduino.ino
 * @author Thomas Sears (thomas.sears@queensu.ca)
 * @brief An example web server for the Arduino Wifi Rev 2 to send and receive data
 * @version 1.0
 * @date 2023-02-26
 *
 * @copyright Copyright (c) 2023
 *
 */

// Include packages to use the WiFi portion of te Arduino Wifi Rev2 board.
#include <SPI.h>
#include <WiFiNINA.h>

// In this example we will use data from the SCD30 sensor (Adafruit)
#include <Adafruit_SCD30.h>

// We keep the wifi credentials in another file (this enables code sharing without security issues).
// We import the SSID and password from the file using the #include command.
#include "wifi-credentials.h"

// Get the SSID and password
char ssid[] = SECRET_SSID; // your network SSID (name)
char pass[] = SECRET_PASS; // your network password

int status = WL_IDLE_STATUS;

// Create the WiFi server object
WiFiServer server(80);

// Create an instance of the SCD30 sensor
Adafruit_SCD30 scd;

// Define the pin number for the built-in LED
int led = LED_BUILTIN;
bool ledState;

// Measurement variables
float temperature;
float relative_humidity;
float CO2;

void setup()
{
    /* Serial connection */
    // Open the serial port at 115200 bps
    Serial.begin(115200);

    // Wait for serial connection before starting
    while (!Serial)
    {
        delay(10);
    }

    /* WiFi connection */
    // Check that the WiFi is available, then connect to network
    if (WiFi.status() == WL_NO_MODULE)
    {
        Serial.println("Communication with WiFi module failed!");
        // don't continue
        while (true)
            ;
    }

    while (status != WL_CONNECTED)
    {
        Serial.print("Connecting to SSID: ");
        Serial.println(ssid);

        status = WiFi.begin(ssid, pass);

        delay(10000);
    }

    // If we get here in the code, connection has been succesful!
    // Start the server and print the IP address to the serial monitor.
    server.begin();
    printWifiStatus();

    /* CO2 sensor */
    // Initialize the SCD30 CO2 sensor
    if (!scd.begin())
    {
        Serial.println("Sensor not found :(");
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
    // Summary of the loop:
    // 1) Listen for incoming clients on the wifi
    // 2) If a client is waiting, display the website
    // 3) Meanwhile, read the latest measurements

    // 1) Listen for new webserver request (i.e., someone accesses the website)
    WiFiClient client = server.available();
    if (client)
    {
        Serial.println("new client");
        // an HTTP request ends with a blank line
        String currentLine = "";
        boolean currentLineIsBlank = true;
        while (client.connected())
        {
            if (client.available())
            {
                char c = client.read();
                Serial.write(c);
                // if you've gotten to the end of the line (received a newline
                // character) and the line is blank, the HTTP request has ended,
                // so you can send a reply
                if (c == '\n' && currentLineIsBlank)
                {
                    // Send a standard HTTP response header
                    client.println("HTTP/1.1 200 OK");
                    client.println("Content-Type: text/html");
                    // client.println("Connection: close");
                    // client.println("Refresh: 5"); // Uncomment to enable autorefresh (may introduce issues!)
                    client.println();
                    client.println("<!DOCTYPE HTML>");
                    client.println("<html>");

                    // Add the latest SCD30 measurements.
                    client.print("Temperature: ");
                    client.print(temperature);
                    client.print(" &deg;C");
                    client.println("<br />");
                    client.print("RH: ");
                    client.print(relative_humidity);
                    client.print(" %");
                    client.println("<br />");
                    client.print("CO2: ");
                    client.print(CO2, 3);
                    client.print(" ppm");
                    client.println("<br />");

                    client.println("<br />");

                    // the content of the HTTP response follows the header:
                    client.print("Click <a href=\"/forward\">here</a> to drive forward<br>");  // for this example, turns on the LED
                    client.print("Click <a href=\"/reverse\">here</a> to drive backward<br>"); // for this example, turns off the LED
                    client.println("<br />");

                    client.println("<br />");

                    // display the current speed (or in this example, the LED state)
                    client.print("Vehicle speed: ");
                    client.print(ledState);
                    client.println("<br />");

                    // client.println("</html>");
                    break;
                }
                if (c == '\n')
                {
                    // you're starting a new line
                    currentLineIsBlank = true;
                    currentLine = "";
                }
                else if (c != '\r')
                {
                    // you've gotten a character on the current line
                    currentLineIsBlank = false;
                    currentLine += c;
                }

                if (currentLine.endsWith("GET /forward"))
                {
                    ledState = true;
                    digitalWrite(led, HIGH); // GET /H turns the LED on
                }

                if (currentLine.endsWith("GET /reverse"))
                {
                    ledState = false;
                    digitalWrite(led, LOW); // GET /L turns the LED off
                }
            }
        }
        // give the web browser time to receive the data
        delay(1);

        // close the connection:
        client.stop();
        Serial.println("client disconnected");
    }

    // The SCD30 will report when it is ready. We can poll that function until it is true.
    if (scd.dataReady())
    {
        if (!scd.read())
        {
            Serial.println("Error reading sensor data");
            return;
        }

        else
        {
            temperature = scd.temperature;
            relative_humidity = scd.relative_humidity;
            CO2 = scd.CO2;

            Serial.print("Temp: ");
            Serial.print(temperature);
            Serial.print(" dC");
            Serial.println("<br />");
            Serial.print("RH: ");
            Serial.print(relative_humidity);
            Serial.print(" %");
            Serial.println("<br />");
            Serial.print("CO2: ");
            Serial.print(CO2, 3);
            Serial.print(" ppm");
            Serial.println("<br />");
        }
    }

    delay(100);
}

void printWifiStatus()
{
    // Print the SSID of the connected network
    Serial.print("SSID: ");
    Serial.print(WiFi.SSID());
    Serial.print("\t");

    // Print the assigned IP address
    IPAddress ip = WiFi.localIP();
    Serial.print("IP Address: ");
    Serial.println(ip);
}

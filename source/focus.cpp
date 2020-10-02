#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "******************";
// Wifi Credentials
char ssid[] = "**Wifi ssid name**";
char pass[] = "wifi pass";

void setup() 
{
	//Debug Console
	Serial.begin(9600);
	
	Blynk.begin(auth, ssid, pass);
}

void loop() 
{
	//loop control
	Blynk.run();
}

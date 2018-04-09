/*
  configureMode.cpp - Library for flashing configure mode.
  Created by Mayunk Kulkarni, 9 April 2018
  Released into public documentation
*/

#include "Arduino.h"
#include "configureMode.h"
#include <String.h>
#include <WiFi.h>

Configure::Configure(char* ssid, char* pass)
{
_ssid = ssid;
_pass = pass;
Serial.begin(115200);
delay(10);
}

void Configure::beginConnection()
{
  Serial.print("Connecting to ");
  Serial.print(_ssid);
  WiFi.begin(_ssid, _pass);
  while(WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println();
  Serial.println("WiFi connected.");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
  server.begin();
}

void receiveConfig()
{
  WiFiClient client = server.available();
  if(client)
  {
    Serial.println("New Client.");
    String currentLine = "";
    while(client.connected()) {
      if(cli)
    }
  }
}

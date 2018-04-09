/*
  configureMode.h - Library for flashing configure mode.
  Created by Mayunk Kulkarni, 9 April 2018
  Released into public documentation
*/
#ifndef configureMode_h
#define configureMode_h

#include "Arduino.h"


class Configure()
{
private
WiFiServer server(80);
char* _ssid;
char* _pass;

public:
  Configure(char*, char*);
  void beginConnection();
  void receiveConfig();
}

#endif

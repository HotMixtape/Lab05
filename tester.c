#include <stdio.h>
#include "ifttt.h"

enum state {ALARM_OFF, ALARM_ARMING, ALARM_TRIGGERED, ALARM_SOUNDING};

int main(int argc, char *argv[])
{
/*
  ifttt("https://maker.ifttt.com/trigger/button_pressed/with/key/56-YpOKO17vOh-gimC2xK1qRAhRdzXXXX", "my1", "my 2", "my 33333");
*/

  enum state state = ALARM_OFF;

  for(;;)
  printf("Trying to connect to server\n");
  ifttt("http://red.eecs.yorku.ca:8080/trigger/event/with/key/123", "my1", "my 2", "my 33333");
  return 0;
}

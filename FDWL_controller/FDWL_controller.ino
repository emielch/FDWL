#include "Color.h"
#include "ledLibSetup.h"
#include "LED.h"
#include "ledLayout.h"


void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i < sizeof(leds) / sizeof(LED); i++) {
    Serial.println(leds[i].xPos);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}

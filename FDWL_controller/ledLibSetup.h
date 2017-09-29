/*
   Required Connections
  --------------------
    pin 2:  LED Strip #1    OctoWS2811 drives 8 LED Strips.
    pin 14: LED strip #2    All 8 are the same length.
    pin 7:  LED strip #3
    pin 8:  LED strip #4    A 100 ohm resistor should used
    pin 6:  LED strip #5    between each Teensy pin and the
    pin 20: LED strip #6    wire to the LED strip, to minimize
    pin 21: LED strip #7    high frequency ringining & noise.
    pin 5:  LED strip #8
    pin 15 & 16 - Connect together, but do not use
    pin 4 - Do not use
    pin 3 - Do not use as PWM.  Normal use is ok.
    pin 1 - Output indicating CPU usage, monitor with an oscilloscope,
            logic analyzer or even an LED (brighter = CPU busier)
 */

#include "Arduino.h"
#include "LUT.h"
#include <OctoWS2811.h>

const int ledsPerStrip = 227;
DMAMEM int displayMemory[ledsPerStrip*6];
int drawingMemory[ledsPerStrip*6];
const int config = WS2811_GRB | WS2811_800kHz;
OctoWS2811 strip(ledsPerStrip, displayMemory, drawingMemory, config);



void set_ledLib(int pixel, byte r, byte g, byte b){
//  leds.setPixel(pixel, r, g, b);
  strip.setPixel(pixel, LUT[r], LUT[g], LUT[b]);
}


void show_ledLib(){
  strip.show();
}

uint32_t bufsize = ledsPerStrip*24;
void reset_ledLib(){
  memset(drawingMemory, 0, bufsize);
}


Color get_ledLib(int pixel){
  uint32_t conn = strip.getPixel(pixel);  // retrieve the color that has already been saved
  byte b = conn & 255;       // unpack the color
  byte g = conn >> 8 & 255;
  byte r = conn >> 16 & 255;
  Color pixelCol(r,g,b,RGB_MODE);
  return pixelCol;
}

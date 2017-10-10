#include "Color.h"
#include "ledLibSetup.h"
#include "LED.h"
#include "Edge.h"
#include "ledLayout.h"
#include "Pulse.h"

#define FrameRate 60

void setup() {

}

void loop() {
  reset_ledLib();

  render();
  
  show_ledLib();
}


void render(){
  
}


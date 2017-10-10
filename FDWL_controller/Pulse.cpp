// 
// 
// 

#include "Pulse.h"

Pulse::Pulse(Edge _startEdge, bool _moveDir) {
	if (moveDir) {
		x = _startEdge.startX;
		y = _startEdge.startY;
	}
	else {
		x = _startEdge.endX;
		y = _startEdge.endY;
	}
	moveDir = _moveDir;
}

void Pulse::move() {
	//Come up with some way to calculate the new position based on the speed given in cm/s and the edge this pulse is currently on
}

void Pulse::render()
{
	//Render this pulse on the LEDs
}

Color Pulse::color()
{
	return c;
}

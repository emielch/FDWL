// Pulse.h

#ifndef _PULSE_h
#define _PULSE_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif

class Pulse {
public:
	Pulse(Edge _startEdge, bool _moveDir);

	virtual void update();
	void move();
	virtual void interact();
	void render();

	Color color();

private:
	int x, y;
	byte size, speed; //speed in cm/s
	bool moveDir;
	Color c;
	virtual Edge newEdge();
};

#endif


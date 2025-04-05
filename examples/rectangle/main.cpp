#include "../../src/glazir.h"

using namespace glazir;

int main()
{
	init();	

	window W ("Hello world!", 800, 600);

	event e;
	bool running = true;

	while (running) 
		while (getEvent(e))
			switch(e.type) {
				case EVENT_QUIT:
					running = false;
					break;
				case EVENT_MOUSEMOVE:
					W.clear();
					W.rect(e.v.motion.x - 50, e.v.motion.y - 50, 100, 100, red);
					W.draw();
					break;
			}
}

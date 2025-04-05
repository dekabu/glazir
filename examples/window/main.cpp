#include "../../src/glazir.h"

using namespace glazir;

int main()
{
	init();	

	window W ("Hello world!", 800, 600);

	W.rect(100, 100, 300, 200, red);

	W.draw();

	event e;
	bool running = true;

	while (running) {
		while (getEvent(e))
			if (e.type == EVENT_QUIT) {
				running = false;
				break;
			}
	};
}

#include "glazir.h"

namespace glazir {
	color red = {0xFF, 0, 0};
	color yellow = {0xFF, 0xFF, 0};
	color green = {0, 0xFF, 0};
	color cyan = {0, 0xFF, 0xFF};
	color blue = {0, 0, 0xFF};
	color magenta = {0xFF, 0, 0xFF};

	bool getEvent(event& e)
	{
		SDL_Event se;

		if (! SDL_PollEvent(&se))
			return false;
		else {
			switch (se.type) {
				case SDL_EVENT_QUIT:
					e.type = EVENT_QUIT;
			}
			return true;
		}
	}

	int init()
	{
		return SDL_Init(SDL_INIT_VIDEO);
	}
}

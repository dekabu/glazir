#include "glazir.h"

namespace glazir {
	color red = {0xFF, 0, 0};
	color yellow = {0xFF, 0xFF, 0};
	color green = {0, 0xFF, 0};
	color cyan = {0, 0xFF, 0xFF};
	color blue = {0, 0, 0xFF};
	color magenta = {0xFF, 0, 0xFF};

	int init()
	{
		return SDL_Init(SDL_INIT_VIDEO);
	}
}

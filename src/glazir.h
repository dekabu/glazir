#ifndef GLAZIR
#define GLAZIR

#include <SDL3/SDL.h>
#include <SDL3/SDL_render.h>

#define GLAZIR_VERSION_MAJOR 0
#define GLAZIR_VERSION_MINOR 1
#define GLAZIR_VERSION_PATCH 0

namespace glazir {
	enum events {
		EVENT_MOUSEMOVE,
		EVENT_QUIT
	};

	typedef struct {
		unsigned char R, G, B, A;
	} color;

	extern color red;
	extern color yellow;
	extern color green;
	extern color cyan;
	extern color blue;
	extern color magenta;
	extern color white;
	extern color black;

	struct MouseMoveEvent {
		float x;
		float y;
	};

	struct event {
		unsigned type;
		union {
			MouseMoveEvent motion;
		} v;
	};

	bool getEvent(event& e);

	class window {
		public:
			char* title;
			int w;
			int h;
			window(char* title, int w, int h)
			{
				SDL_CreateWindowAndRenderer(title, w, h, 0, &this->win, &this->rend);
			}
			void rect(float x, float y, float w, float h, color c)
			{
				SDL_SetRenderDrawColor(this->rend, c.R, c.G, c.B, c.A);
				SDL_FRect r = {x, y, w, h};
				SDL_RenderFillRect(this->rend, &r);
			}
			void clear(color c = black)
			{
				SDL_SetRenderDrawColor(this->rend, c.R, c.G, c.B, c.A);
				SDL_RenderClear(this->rend);
			}
			void draw()
			{
				SDL_RenderPresent(this->rend);
			}
		private:
			SDL_Window* win;
			SDL_Renderer* rend;
	};

	int init();
}

#endif

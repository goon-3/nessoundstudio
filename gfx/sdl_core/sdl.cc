//See the LICENSE file for details
#include "sdl.h"

SDLSystem::SDLSystem()
{}

SDLSystem::~SDLSystem()
{}

void SDLSystem::init()
{
	SDL_Init(SDL_INIT_EVERYTHING);
	return;
}

void SDLSystem::main_loop()
{
	SDL_Event e;
	while (SDL_WaitEvent(&e)) {

		if (e.key.keysym.sym == SDLK_ESCAPE) {
			return;	
		}

		screen.flip();
	}
	
}



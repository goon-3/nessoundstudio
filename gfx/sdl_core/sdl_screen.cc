//See the LICENSE file for details
#include <SDL/SDL.h>
#include "sdl_screen.h"

SDLScreen::SDLScreen()
{

	scr = SDL_SetVideoMode(640,480, 32, SDL_HWSURFACE);

}

SDLScreen::~SDLScreen()
{}

void SDLScreen::flip()
{
	SDL_Flip(scr);
}


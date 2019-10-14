//See the LICENSE file for details
#ifndef _SDL_SCREEN_H_
#define _SDL_SCREEN_H_

#include <SDL/SDL.h>
#include "screen.h"

class SDLScreen : public Screen
{
	public:
		SDLScreen();
		~SDLScreen();

		SDL_Surface *gets() { return scr; }
		void flip();
	private:
		SDL_Surface *scr;	
};

#endif

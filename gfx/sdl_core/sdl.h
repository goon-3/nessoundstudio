//See the LICENSE file for details
#ifndef _SDLSYSTEM_H_
#define _SDLSYSTEM_H_

#include <iostream>

//#include <SDL/SDL.h>

#include "sdl_screen.h"

class SDLSystem
{
	public:
	SDLSystem();
	virtual ~SDLSystem();

	private:
	Screen screen;
 	
	public:
	void init();
	void main_loop();
	
};

#endif

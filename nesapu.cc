#include "nesapu.h"

NESAPU::NESAPU()
{
	enableds = 0;
}


NESAPU::~NESAPU()
{

}

void NESAPU::enable_(int hex)
{
	int enable = 0;
	enable |= hex;
	enable |= enableds;

	//NOTE
	apu_channels[0] = enable;

	return;
}

void NESAPU::enable_square1()
{
	enable_(1);
}

void NESAPU::enable_square2()
{
	enable_(2);
}

void NESAPU::enable_triangle()
{
	enable_(4);
}

void NESAPU::enable_noise()
{
	enable_(8);
}

void NESAPU::enable_DMC()
{
	enable_(16);
}


void NESAPU::reset_(int hex = 0)
{
	enableds = hex;
}




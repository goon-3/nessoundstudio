#include "nesapu.h"

NESAPU::NESAPU()
{
	enableds = 0;
}


NESAPU::~NESAPU()
{

}

void NESAPU::enable_(int hex, u16* address)
{
	int enable = 0;
	enable |= hex;
	enable |= enableds;

	//NOTE
	address[0] = enable;

	return;
}

void NESAPU::enable_square1()
{
	enable_(1, apu_channels);
}

void NESAPU::enable_square2()
{
	enable_(2, apu_channels);
}

void NESAPU::enable_triangle()
{
	enable_(4, apu_channels);
}

void NESAPU::enable_noise()
{
	enable_(8, apu_channels);
}

void NESAPU::enable_DMC()
{
	enable_(16, apu_channels);
}


void NESAPU::reset_(int hex = 0)
{
	enableds = hex;
}


void NESAPU::enable_interrupt_flag()
{
	enable_(7, dmc_pitch);
}

void NESAPU::enable_loop_flag()
{
	enable_(6, dmc_pitch);
}

void NESAPU::set_APU_duty_cycle(int hex)
{
	// example : hex is in between bits 3-0, so hex is 0-F
	// 0 gives 428 so 1789773/428 = 4181.71 Hz  
	enable_(hex, dmc_pitch);
}



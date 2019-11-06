#include "apu.h"

// A class which sets the NES APU e.g. the DMC channel on

class NESAPU
{
	public:
	NESAPU();
	virtual ~NESAPU();

	private:
	int enableds;

	public:
	void enable_square1();
	void enable_square2();
	void enable_triangle();
	void enable_noise();
	void enable_DMC();

	// address is e.g. apu_channels, dmc_pitch 
	void enable_(int hex, u16* address);
	void reset_(int hex);

	void enable_interrupt_flag();
	void enable_loop_flag();

	void set_APU_duty_cycle(int hex);
};

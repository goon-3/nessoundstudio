#include "apu.h"

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

	void enable_(int hex);
	void reset_(int hex);
};

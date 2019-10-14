#include "apu.h"
#include "byte.h"

class DMCSample : public Byte<u32>
{
	public:
	DMCSample(u32 data);
	virtual ~DMCSample();

	private:
	
	public:
	// calculate the note right in between start and end	
	DMCSample calculate_half_note_within_interval(
					DMCSample& start, 
					DMCSample& end);
}; 
 

#include "dmcsample.h"

DMCSample::DMCSample(u32 data)
	: Byte(data)
{
}

DMCSample::~DMCSample()
{

}
	
DMCSample DMCSample::calculate_half_note_within_interval(
	DMCSample& start, 
	DMCSample& end)
{
	if (start.data() >= end.data()) {
		return DMCSample(end.data()-start.data()); 
	} else {
		return DMCSample(start.data()-end.data());
	} 
}


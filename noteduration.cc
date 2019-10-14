#include "noteduration.h"

NoteDuration::NoteDuration(float d)
{
	if (this->is_valid(d)) {
		_duration = d;
	} else {
		_duration = -1;
	}
}

NoteDuration::~NoteDuration()
{

}

bool NoteDuration::is_valid(float d)
{
	if (d == 1/4 || d == 1/8 || d == 1/16 || d == 1/32) {
		
		return true;		

	}

	if (d == 1 || d == 2 || d == 4) {

		return true;
	}

	return false;

}


void NoteDuration::add_point() 
{

	_duration += _duration / 2;

}


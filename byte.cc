#include "byte.h"
#include "apu.h"

template<class C>
Byte<C>::Byte(C data)
{

	_data = data;

}

template<class C>
Byte<C>::~Byte()
{}

template class Byte<u32>;


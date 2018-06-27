#include "bitstream.h"



bitstream::bitstream(unsigned char c)
{
	this->c = c;
}

bool bitstream::operator[](int i)
{
	if (i == 0)
	{
		return c % 2;
	}
	else if (i == 1)
	{
		return c % 4 / 2;
	}
	else if (i == 2)
	{
		return c % 8 / 4;
	}
	else if (i == 3)
	{
		return c % 16 / 8;
	}
	else if (i == 4)
	{
		return c % 32 / 16;
	}
	else if (i == 5)
	{
		return c % 64 / 32;
	}
	else if (i == 6)
	{
		return c % 128 / 64;
	}
	else if (i == 7)
	{
		return c % 256 / 128;
	}
	return false;
}

bitstream::~bitstream()
{
}

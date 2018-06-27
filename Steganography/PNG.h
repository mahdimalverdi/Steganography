#pragma once

#include "Image.h"
class PNG :
	public Image
{
public:
	PNG() ;
	void decode();
	void encode();
	~PNG();
};


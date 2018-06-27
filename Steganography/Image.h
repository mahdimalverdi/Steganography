#pragma once
#include <vector>

class Image
{
public:
	Image();
	unsigned width;
	unsigned height;
	char filename[100];
	std::vector<unsigned char> image;
	unsigned char operator [](int i)
	{
		return image[i];
	}
	~Image();
};


#include <iostream>
#include "PNG.h"
#include "lodepng.h"
using namespace std;

PNG::PNG()
{
}

void PNG::decode()
{
	unsigned error = lodepng::decode(image, width, height, "input.png");
	if (error) std::cout << "decoder error " << error << ": " << lodepng_error_text(error) << std::endl;
}

void PNG::encode()
{
	unsigned error = lodepng::encode("output.png",image, width, height);
	if (error) std::cout << "saving file error " << error << ": " << lodepng_error_text(error) << std::endl;
}

PNG::~PNG()
{
}

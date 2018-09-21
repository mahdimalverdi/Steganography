#include "steganography.h"
#include <iostream>
#include <fstream>
#include "PNG.h"
#include "bitstream.h"
using namespace std;

steganography::steganography()
{
}

void steganography::decode()
{
	PNG png;
	png.decode();
	std::ofstream ofs("output.txt", std::ofstream::out);
	for (int i = 0; i < png.height*png.width; i += 2) {
		unsigned char c = 0;
		for (int j = 7; j > -1; j--)
		{
			c *= 2;
			c += png.image[i * 4 + j] % 2;
		}
		ofs << c;
	}
	ofs.close();
	cout << "output.txt is ready !"  << endl;
}

void steganography::encode()
{
	PNG png;
	png.decode();
	std::ifstream ifs("input.txt", std::ofstream::in);
	if (!ifs.is_open())
	{
		decode();
		return;
	}
	for (int i = 0; i < png.height*png.width; i += 2) {
		unsigned char c = 0;
		ifs >> c;
		bitstream bs(c);
		for (int j = 7; j > -1; j--)
		{
			if (bs[j] == true)
				png.image[i * 4 + j] |= 1;
			else
				png.image[i * 4 + j] &= 254;
		}
	}
	ifs.close();
	png.encode();
	cout << "output.png is ready !" << endl;
}


steganography::~steganography()
{
}

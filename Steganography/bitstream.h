#pragma once
class bitstream
{
public:
	bitstream(unsigned char c);
	unsigned char c;
	bool operator[](int i);
	~bitstream();
};


#include <iostream>
#include "steganography.h"
#include <fstream>
using namespace std;

int main()
{
	cout << "Hello !" << endl;
	cout << "Welcome to Steganography !" << endl;
	steganography st;
	st.encode();
	return 0;
}
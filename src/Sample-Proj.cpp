//============================================================================
// Name        : Sample-Proj.cpp
// Author      : FaizelKB
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
#ifdef TEST
	cout << "!!!This is in another profile!!!" << endl;
#endif
	return 0;
}

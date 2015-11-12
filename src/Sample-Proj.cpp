//============================================================================
// Name        : Sample-Proj.cpp
// Author      : FaizelKB
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "person.h"
#include <string.h>
using namespace std;

int person::get_lock_password(){
	return lock_password;
}

person::person(){
	lock_password = 67;
}

int main() {
#if 0
	person faizel;
	strcpy(faizel.name,"faizelkb");
	faizel.gender = 0;
#endif
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
#ifdef TEST
	cout << "!!!This is in another profile!!!" << endl;
#endif
	cout << "This print should come on test-branch build" << endl;
	int x;
	x = 10;
#if 0
	std::cout<<"Name is "<<faizel.name<<"password is "<<faizel.get_lock_password()<<endl;
#endif
	employee vvdn_employee;
    vvdn_employee.desination = 21;
    cout<<"designation is"<<vvdn_employee.desination;
	return 0;
}

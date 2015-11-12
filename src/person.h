/*
 * person.h
 *
 *  Created on: 12-Nov-2015
 *      Author: faizel
 */
using namespace std;
#ifndef PERSON_H_
#define PERSON_H_
class person {
	int  lock_password;
	char lock_name;
public:
	char name[20];
	int  gender;
    person(void);
    virtual int set_lock_password(int value) {};
#if 0
	virtual int set_lock_password(int value)
	{
		lock_password = value;
		return 0;
	}
#endif
	int  get_lock_password(void);
#if 0
	{
		return lock_password;
	}
#endif
};


class employee:public person{
public:
	int desination;
#if 1
	virtual int set_lock_password(int value)
		{
			cout <<"this is a virtual function"<< std::endl;
			return 0;
		}
#endif
};


#endif /* PERSON_H_ */

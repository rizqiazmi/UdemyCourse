#pragma once
#include <iostream>
using namespace std;
class Integer {
	int *m_pInt;
public:
	//Default constructor
	Integer();
	//Parameterized constructor
	Integer(int value);
	//Copy constructor
	Integer(const Integer &obj);
	//Move constructor
	Integer(Integer &&obj);
	int GetValue()const;
	void SetValue(int value);
	~Integer();

	friend ostream & operator <<(ostream & out, const Integer &obj);
};


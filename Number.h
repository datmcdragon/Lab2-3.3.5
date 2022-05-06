#pragma once

#include <iostream>
#include <string>
#include "Object.h"

using namespace std;

class Number :
	public Object
{
private:
	float num;

public:
	Number(const float& a = 0);
	Number(const Number& r);
	~Number(void);

	float getNum() const { return num; }
	void setNum(const float value) { num = value; }

	friend Number operator + (const Number& l, const Number& r);
	friend Number operator / (const Number& l, const Number& r);

	operator string() const;
	friend ostream& operator << (ostream& out, const Number& r);
	friend istream& operator >> (istream& in, Number& r);
};

#pragma once

#include "Number.h"
#include <cmath>

using namespace std;

class Real :
	public Number
{
public:
	Real(const float& a = 0);
	Real(const Real& r);
	~Real(void);

	friend Real operator ^ (const Real& l, const int n);
	friend Real operator & (const Real& l, const int n);

	operator string() const;
	friend ostream& operator << (ostream& out, const Real& r);
	friend istream& operator >> (istream& in, Real& r);
};


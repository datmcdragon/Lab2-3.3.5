#include "Real.h"
#include <cmath>
#include <sstream>

using namespace std;

Real::Real(const float& a)
{
	setNum(a);
}

Real::Real(const Real& r)
{
	setNum(r.getNum());
}

Real::~Real(void)
{}

Real operator ^ (const Real& l, const int n)
{
	Real t;
	t.setNum(pow(l.getNum(), n));
	return t;
}

Real operator & (const Real& l, const int n)
{
	Real t;
	t.setNum(log(l.getNum()) / log(n));
	return t;
}

Real::operator string() const
{
	stringstream ss;
	ss << getNum();
	return ss.str();
}

ostream& operator << (ostream& out, const Real& r)
{
	return out << (string)r;
}

istream& operator >> (istream& in, Real& r)
{
	float a;
	cout << "num = "; in >> a;
	r.setNum(a);
	return in;
}

#include "Number.h"
#include <sstream>

Number::Number(const float& a)
	: num(a)
{}

Number::Number(const Number& r)
{
	num = r.num;
}

Number::~Number(void)
{}

Number operator + (const Number& l, const Number& r)
{
	Number t;
	t.num = l.num + r.num;
	return t;
}

Number operator / (const Number& l, const Number& r)
{
	Number t;
	t.num = l.num / r.num;
	return t;
}

Number::operator string() const
{
	stringstream ss;
	ss << getNum();
	return ss.str();
}

ostream& operator << (ostream& out, const Number& r)
{
	return out << (string)r;
}

istream& operator >> (istream& in, Number& r)
{
	float a;
	cout << "num = "; in >> a;
	r.setNum(a);
	return in;
}

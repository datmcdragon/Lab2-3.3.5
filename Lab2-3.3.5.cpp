#include <iostream>
#include "Real.h"

using namespace std;

int main()
{
	Number a(6), b(4), c;

	c = a + b;
	cout << c << endl;

	c = a / b;
	cout << c << endl;

	cout << "count = " << Object::Count() << endl;

	Real d(6), g(4), m;

	m = d ^ 2;
	cout << m << endl;

	m = g & 3;
	cout << m << endl;

	cout << "count = " << Object::Count() << endl;

	cin.get();
	system("pause");
}

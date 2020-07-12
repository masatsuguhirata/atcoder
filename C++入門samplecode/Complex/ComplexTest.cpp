// 複素数クラスComplexの利用例

#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
	double re, im;

	cout << "aの実部：";  cin >> re;
	cout << "aの虚部：";  cin >> im;
	Complex a(re, im);

	cout << "bの実部：";  cin >> re;
	cout << "bの虚部：";  cin >> im;
	Complex b(re, im);

	Complex c = -a + b;

	b += 2.0;						// bに(2.0, 0.0)を加える
	c -= Complex(1.0, 1.0);			// cから(1.0, 1.0)を減じる
	Complex d(b.imag(), c.real());	// dを(bの虚部, cの実部)とする

	cout << "a = " << a << '\n';
	cout << "b = " << b << '\n';
	cout << "c = " << c << '\n';
	cout << "d = " << d << '\n';
}

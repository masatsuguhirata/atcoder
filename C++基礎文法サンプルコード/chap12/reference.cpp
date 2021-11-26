// 参照オブジェクトの参照先を検証

#include <iostream>

using namespace std;

int main()
{
	double     d = 1.0;		// dはdouble型（値は1.0）
	const int& p = 5;		// pはdouble型を参照？
	const int& q = d;		// qは定数を参照？

	const_cast<int&>(q) = 3.14;		// 3.14の代入先はintそれともdouble？

	cout << "d = " << d << '\n';
	cout << "p = " << p << '\n';
	cout << "q = " << q << '\n';
}

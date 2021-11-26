// 配列の型と要素型を表示

#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
	int a[5];
	double b[7];

	cout << "配列aの型：" << typeid(a).name()    << '\n';	// intの配列
	cout << "aの要素型：" << typeid(a[0]).name() << '\n';	// その要素

	cout << "配列bの型：" << typeid(b).name()    << '\n';	// doubleの配列
	cout << "bの要素型：" << typeid(b[0]).name() << '\n';	// その要素
}

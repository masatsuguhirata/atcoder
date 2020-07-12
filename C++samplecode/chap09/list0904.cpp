// 二値の最大値を求める関数テンプレートと明示的な具現化

#include <cstring>
#include <iostream>

using namespace std;

//--- a, bの大きいほうの値を求める ---//
template <class Type> Type maxof(Type a, Type b)
{
	return a > b ? a : b;
}

int main()
{
	int a, b;
	double x;

	cout << "整数a：";	  cin >> a;
	cout << "整数b：";	  cin >> b;
	cout << "実数x：";	  cin >> x;

	cout << "aとbで大きいのは" << maxof(a, b)         << "です。\n";
	cout << "aとxで大きいのは" << maxof<double>(a, x) << "です。\n";
}

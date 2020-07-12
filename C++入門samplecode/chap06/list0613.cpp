// 二つの引数の値を交換する関数（間違い）

#include <iostream>

using namespace std;

//--- 引数xとyの値を交換（間違い）---//
void swap(int x, int y)
{
	int t = x;
	x = y;
	y = t;
}

int main()
{
	int a, b;

	cout << "変数a：";   cin >> a;
	cout << "変数b：";   cin >> b;

	swap(a, b);			// aとbを交換？

	cout << "変数aとbの値を交換しました。\n";
	cout << "変数aの値は" << a << "です。\n";
	cout << "変数bの値は" << b << "です。\n";
}

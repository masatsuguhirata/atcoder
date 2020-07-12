// 二つの変数を昇順（小さい順）にソート

#include <iostream>

using namespace std;

int main()
{
	int a, b;

	cout << "変数a：";   cin >> a;
	cout << "変数b：";   cin >> b;

	if (a > b) {		// aがbより大きければ
		int t = a;		// それらの値を交換
		a = b;
		b = t;
	}
	cout << "a≦bとなるようにソートしました。\n";
	cout << "変数aは" << a << "です。\n";
	cout << "変数bは" << b << "です。\n";
}

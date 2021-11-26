// 二つの変数xとyの合計と平均を表示

#include <iostream>

using namespace std;

int main()
{
	int x;		// xはint型の変数
	int y;		// yはint型の変数

	x = 63;		// xに63を代入
	y = 18;		// yに18を代入

	cout << "xの値は" << x << "です。\n";			// xの値を表示
	cout << "yの値は" << y << "です。\n";			// yの値を表示
	cout << "合計は" << x + y << "です。\n";		// xとyの合計を表示
	cout << "平均は" << (x + y) / 2 << "です。\n";	// xとyの平均を表示
}

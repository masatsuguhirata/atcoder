// 二つの変数xとyの合計と平均を表示（変数は不定値）

#include <iostream>

using namespace std;

int main()
{
	int x;		// xはint型の変数（不定値となる）
	int y;		// yはint型の変数（不定値となる）

	cout << "xの値は" << x << "です。\n";			// xの値を表示
	cout << "yの値は" << y << "です。\n";			// yの値を表示
	cout << "合計は" << x + y << "です。\n";		// xとyの合計を表示
	cout << "平均は" << (x + y) / 2 << "です。\n";	// xとyの平均を表示
}

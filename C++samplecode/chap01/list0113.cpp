// 二つの実数値を読み込んで加減乗除した値を表示

#include <iostream>

using namespace std;

int main()
{
	double x;		// 加減乗除する値
	double y;		// 加減乗除する値

	cout << "xとyを加減乗除します。\n";

	cout << "xの値：";		// xの値の入力を促す
	cin >> x;				// xに実数値を読み込む

	cout << "yの値：";		// yの値の入力を促す
	cin >> y;				// yに実数値を読み込む

	cout << "x + yは" << x + y << "です。\n";	// x + yの値を表示
	cout << "x - yは" << x - y << "です。\n";	// x - yの値を表示
	cout << "x * yは" << x * y << "です。\n";	// x * yの値を表示
	cout << "x / yは" << x / y << "です。\n";	// x / yの値を表示
}

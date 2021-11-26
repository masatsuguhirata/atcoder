// 二つの整数値の平均値を求める

#include <iostream>

using namespace std;

int main()
{
	int x, y;

	cout << "二つの整数値xとyの平均値を求めます。\n";
	cout << "xの値：";	cin >> x;	// xに整数値を読み込む
	cout << "yの値：";	cin >> y;	// yに整数値を読み込む

	double ave = (x + y) / 2;						// 平均値を求める
	cout << "xとyの平均値は" << ave << "です。\n";	// 平均値を表示
}

// 三つの整数値の最大値を求める（関数版）

#include <iostream>

using namespace std;

//--- a, bの最大値を返却 ---//
int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

int main()
{
	int a, b;

	cout << "整数a：";   cin >> a;
	cout << "整数b：";   cin >> b;

	cout << "最大値は" << max(a, b) << "です。\n";
}

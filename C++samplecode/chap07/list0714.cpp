// 配列の全要素に0を代入（第１版）

#include <iostream>

using namespace std;

//--- 配列pの先頭n個の要素に0を代入（第１版）---//
void fill_zero(int* p, int n)
{
	while (n-- > 0) {
		*p = 0;		// 着目要素に0を代入
		p++;		// 次の要素に着目
	}
}

int main(void)
{
	int x[5] = {1, 2, 3, 4, 5};
	int x_size = sizeof(x) / sizeof(x[0]);		// 配列xの要素数

	for (int i = 0; i < x_size; i++)
		cout << "x[" << i << "] = " << x[i] << '\n';	// x[i]の値を表示

	fill_zero(x, x_size);						// 配列xの全要素に0を代入

	cout << "全要素に0を代入しました。\n";

	for (int i = 0; i < x_size; i++)
		cout << "x[" << i << "] = " << x[i] << '\n';	// x[i]の値を表示
}
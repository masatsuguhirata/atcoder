// 配列の各要素を1, 2, 3, 4, 5で初期化して表示（要素数を計算によって求める）

#include <iostream>

using namespace std;

int main()
{
	int a[] = {1, 2, 3, 4, 5};
	int a_size = sizeof(a) / sizeof(a[0]);	// 配列aの要素数

	for (int i = 0; i < a_size; i++)
		cout << "a[" << i << "] = " << a[i] << '\n';
}

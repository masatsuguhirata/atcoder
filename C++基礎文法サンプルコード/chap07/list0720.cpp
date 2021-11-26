// 整数配列オブジェクトを動的に生成

#include <iostream>

using namespace std;

int main()
{
	int asize;					// 配列の要素数
	cout << "要素数：";
	cin >> asize;

	int* a = new int[asize];	// 生成

	for (int i = 0; i < asize; i++)
		a[i] = i;

	for (int i = 0; i < asize; i++)
		cout << "a[" << i << "] = " << a[i] << '\n';

	delete[] a;					// 破棄
}

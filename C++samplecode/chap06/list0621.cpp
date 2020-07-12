// 配列の要素への参照を返却する関数

#include <iostream>

using namespace std;

const int a_size = 5;		// 配列aの要素数

//--- a[idx]への参照を返却 ---//
int& r(int idx)
{
	static int a[a_size];
	return a[idx];			// a[idx]への参照を返却
}

int main()
{
	for (int i = 0; i < a_size; i++)
		r(i) = i;

	for (int i = 0; i < a_size; i++)
		cout << "r(" << i << ") = " << r(i) << '\n';
}

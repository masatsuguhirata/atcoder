// 配列の全要素に乱数を代入して表示

#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	srand(time(NULL));		// 乱数の種を初期化
	const int n = 5;		// 配列aの要素数
	int a[n];				// 要素型がint型で要素数nの配列

	for (int i = 0; i < n; i++)
		a[i] = rand() % 10;		// 0～9の乱数を代入

	for (int i = 0; i < n; i++)
		cout << "a[" << i << "] = " << a[i] << '\n';
}

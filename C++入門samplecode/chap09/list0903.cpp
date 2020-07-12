// 配列の最大値を求める（関数テンプレート版）

#include <iostream>

using namespace std;

//--- 要素数nのType型配列xの最大値を返却する関数テンプレート ---//
template <class Type>
Type maxof(const Type x[], int n)
{
	Type max = x[0];
	for (int i = 1; i < n; i++)
		if (x[i] > max)
			max = x[i];
	return max;
}

int main()
{
	const int isize = 8;	// 配列ixの要素数
	int ix[isize];			// int型の配列

	// 整数配列の最大値
	cout << isize << "個の整数を入力せよ。\n";
	for (int i = 0; i < isize; i++) {
		cout << i + 1 << "：";
		cin >> ix[i];
	}
	cout << "最大値は" << maxof(ix, isize) << "です。\n\n";

	const int dsize = 5;	// 配列dxの要素数
	double dx[dsize];		// double型の配列

	// 実数配列の最大値
	cout << dsize << "個の実数を入力せよ。\n";
	for (int i = 0; i < dsize; i++) {
		cout << i + 1 << "：";
		cin >> dx[i];
	}
	cout << "最大値は" << maxof(dx, dsize) << "です。\n";
}

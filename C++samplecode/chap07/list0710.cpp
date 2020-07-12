// 配列の要素の並びを反転する（関数版）

#include <iostream>

using namespace std;

//--- 要素数nの配列aの並びを反転する ---//
void reverse(int a[], int n)
{
	for (int i = 0; i < n / 2; i++) {
		int t = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
	}
}

int main()
{
	const int n = 5;				// 配列cの要素数
	int c[n];

	for (int i = 0; i < n; i++) {	// 各要素に値を読み込む
		cout << "c[" << i << "] : ";
		cin >> c[i];
	}
	reverse(c, n);					// 配列cの要素の並びを反転する

	cout << "要素の並びを反転しました。\n";
	for (int i = 0; i < n; i++)		// 配列cを表示
		cout << "c[" << i << "] = " << c[i] << '\n';
}

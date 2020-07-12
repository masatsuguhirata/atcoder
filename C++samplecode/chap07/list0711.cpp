// 身長の最大値と体重の最大値を求める

#include <iostream>

using namespace std;

//--- 要素数nの配列aの最大値を返却 ---//
int maxof(const int a[], int n)
{
	int max = a[0];
	for (int i = 1; i < n; i++)
		if (a[i] > max)
			max = a[i];
	return max;
}

int main()
{
	const int ninzu = 5;				// 人数
	int height[ninzu], weight[ninzu];	// 身長・体重

	cout << ninzu << "人の身長と体重を入力せよ。\n";
	for (int i = 0; i < ninzu; i++) {
		cout << i + 1 << "番目の身長：";
		cin >> height[i];
		cout << i + 1 << "番目の体重：";
		cin >> weight[i];
	}
	int hmax = maxof(height, ninzu);	// 身長の最大値
	int wmax = maxof(weight, ninzu);	// 体重の最大値

	cout << "身長の最大値：" << hmax << "cm\n";
	cout << "体重の最大値：" << wmax << "kg\n";
}

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

//#include <iostream>
//#include <string>
//using namespace std;

int sumDigits(int n)
{
	if (n < 10)
		return n;
	return sumDigits(n / 10) + n % 10;
}

int main()
{
	int n, a, b;
	int sum;
	int cnt = 0;

	cin >> n >> a >> b;

	for (int i = 0; i <= n; i++)
	{
		sum = sumDigits(i);
		if (sum <= b && sum >= a)
		{
			cnt++;
			//cout << i << endl;
		}
	}

	cout << cnt << endl;
}

//==テキスト入力系
//コード整形	：	Shift + alt + f
//vim矩形操作	：	Ctrl+V,I,A

//==テキスト操作系

//==VScode
//コンパイル	：	Ctrl+Shift+B
//ターミナル	：	Ctrl+Shift+@
//インライン	：	Ctrl+Shift+p

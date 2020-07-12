// 読み込んだ整数を加算（0が入力されたら終了）

#include <iostream>

using namespace std;

int main()
{
	int n;			// 加算する個数
	cout << "整数を加算します。\n";
	cout << "何個加算しますか：";
	cin >> n;

	int sum = 0;	// 合計値
	for (int i = 0; i < n; i++) {
		int t;
		cout << "整数（0で終了）：";
		cin >> t;
		if (t == 0) break;		// for文から抜け出る
		sum += t;
	}
	cout << "合計は" << sum << "です。\n";
}

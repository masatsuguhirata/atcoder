// 1からnまでの和を求める

#include <iostream>

using namespace std;

int main()
{
	int n;

	cout << "1からnまでの和を求めます。\n";
	do {
		cout << "nの値：";
		cin >> n;
	} while (n <= 0);

	int sum = 0;		// 合計
	int i = 1;

	while (i <= n) {
		sum += i;		// sumにiを加える
		i++;			// iをインクリメント
	}
	cout << "1から" << n << "までの和は" << sum << "です。\n";
}

// 読み込んだ整数を加算（9999が入力されると強制終了）

#include <iostream>

using namespace std;

int main()
{
	int n;			// 加算する個数
	cout << "整数を加算します。\n";
	cout << "何個加算しますか：";
	cin >> n;
	cout << "9999で強制終了します。\n";

	int sum = 0;	// 合計値
	for (int i = 0; i < n; i++) {
		int t;
		cout << "整数：";
		cin >> t;
		if (t == 9999)
			goto Exit;
		sum += t;
	}
	cout << "合計は" << sum << "です。\n";

Exit:
	;
}

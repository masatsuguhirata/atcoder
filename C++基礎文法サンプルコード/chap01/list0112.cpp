// 整数値を読み込んで符号を反転した値を表示

#include <iostream>

using namespace std;

int main()
{
	int a;					// 読み込む値

	cout << "整数値：";		// 値の入力を促す
	cin >> a;				// aに整数値を読み込む

	int b = -a;				// aの符号を反転した値でbを初期化
	cout << a << "の符号を反転した値は" << b << "です。\n";
}

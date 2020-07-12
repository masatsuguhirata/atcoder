// bool型の値を表示

#include <iostream>

using namespace std;

int main()
{
	cout << true << ' ' << false << '\n';

	cout << boolalpha;				// 真理値をアルファベット形式で出力
	cout << true << ' ' << false << '\n';

	cout << noboolalpha;			// 真理値を数値形式で出力
	cout << true << ' ' << false << '\n';
}

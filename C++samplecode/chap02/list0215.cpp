// 読み込んだ整数値は10で割り切れるか

#include <iostream>

using namespace std;

int main()
{
	int n;

	cout << "整数値：";
	cin >> n;

	if (int m = n % 10) {
		cout << "その値は10で割り切れません。\n";
		cout << "最下位桁は" << m << "です。\n";
	} else {
		cout << "その値は10で割り切れます。\n";
	}
}

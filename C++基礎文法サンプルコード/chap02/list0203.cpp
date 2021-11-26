// 読み込んだ二つの整数値は等しいか

#include <iostream>

using namespace std;

int main()
{
	int a, b;

	cout << "整数a：";   cin >> a;
	cout << "整数b：";   cin >> b;

	if (a == b)
		cout << "二つの値は等しいです。\n";
	else
		cout << "二つの値は等しくありません。\n";
}

// 読み込んだ二つの整数値の小さいほうの値を表示（その１：if文）

#include <iostream>

using namespace std;

int main()
{
	int a, b;

	cout << "整数a：";   cin >> a;
	cout << "整数b：";   cin >> b;

	int min;		// 小さいほうの値
	if (a < b)
		min = a;
	else
		min = b;

	cout << "小さいほうの値は" << min << "です。\n";
}

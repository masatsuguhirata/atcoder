#include <iostream>

using namespace std;

int main()
{
	int x;
	do {
		cout << "正の整数値：";
		cin >> x;
	} while (x <= 0);

	int y = x;
	int z = x;
	while (y >= 0)
		cout << y-- << " " << ++z << '\n';

	cout << "縦横が整数で面積が\"" << x
		 << "\"の長方形の辺の長さ：\n";
	for (int i = 1; i < x; i++) {
		if (i * i > x) break;		// break文
		if (x % i != 0) continue;	// continue文
		cout << i << " × " << x / i << '\n';
	}

	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 7; j++)
			cout << '\'';
		cout << '\n';
	}
}

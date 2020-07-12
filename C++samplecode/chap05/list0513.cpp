// 2行3列の行列を加算する

#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	int a[2][3] = { {1, 2, 3}, {4, 5, 6} };
	int b[2][3] = { {6, 3, 4}, {5, 1, 2} };
	int c[2][3];

	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 3; j++)
			c[i][j] = a[i][j] + b[i][j];

	cout << "行列a\n";					// 行列aの要素の値を表示
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++)
			cout << setw(3) << a[i][j];
		cout << '\n';
	}

	cout << "行列b\n";					// 行列bの要素の値を表示
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++)
			cout << setw(3) << b[i][j];
		cout << '\n';
	}

	cout << "行列c\n";					// 行列cの要素の値を表示
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++)
			cout << setw(3) << c[i][j];
		cout << '\n';
	}
}

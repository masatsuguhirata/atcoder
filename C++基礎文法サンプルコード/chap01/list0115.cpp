// 円周の長さと円の面積を求める（その２：円周率を定値オブジェクトで表す）

#include <iostream>

using namespace std;

int main()
{
	const double PI = 3.1416;	// 円周率
	double r;					// 半径

	cout << "半径：";			// 半径の入力を促す
	cin >> r;					// 半径を読み込む

	cout << "円周の長さは" << 2 * PI * r << "です。\n";		// 円周
	cout << "面積は" << PI * r * r << "です。\n";			// 面積
}

// 円周の長さと円の面積を求める（その１：円周率を浮動小数点リテラルで表す）

#include <iostream>

using namespace std;

int main()
{
	double r;				// 半径

	cout << "半径：";		// 半径の入力を促す
	cin >> r;				// 半径を読み込む

	cout << "円周の長さは" << 2 * 3.14 * r << "です。\n";	// 円周
	cout << "面積は" << 3.14 * r * r << "です。\n";			// 面積
}

// 真理値クラスBooleanの利用例

#include <iostream>
#include "Boolean.h"

using namespace std;

//--- 二つの整数xとyが等しいかどうか ---//
Boolean int_eq(int x, int y)
{
	return x == y;
}

int main()
{
	int n;
	Boolean a;			// a ← False：デフォルトコンストラクタ
	Boolean b = a;		// b ← False：コピーコンストラクタ
	Boolean c = 100;	// c ← True ：変換コンストラクタ
	Boolean x[8];		// x[0]～x[7] ← False：デフォルトコンストラクタ

	cout << "整数値：";
	cin >> n;
	x[0] = int_eq(n, 5);		// x[0]
	x[1] = (n != 3);			// x[1] ← Boolean(n != 3)
	x[2] = Boolean::False;		// x[2] ← False
	x[3] = 1000;				// x[3] ← True：Boolean(1000)
	x[4] = c == Boolean::True;	// x[4] ← Boolean(c == True)

	cout << "aの値：" << int(a) << '\n';
	cout << "bの値：" << static_cast<const char*>(b) << '\n';

	for (int i = 0; i < 8; i++)
		cout << "x[" << i << "] = " << x[i] << '\n';
}

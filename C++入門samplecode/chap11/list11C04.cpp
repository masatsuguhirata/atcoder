// コンストラクタ初期化子の呼出し順序を確認

#include <iostream>

using namespace std;

class Int {
	int v;	// 値
public:
	Int(int val) : v(val) { cout << v << '\n'; }
};

class Abc {
	Int a;
	Int b;
	Int c;

public:
	Abc(int aa, int bb, int cc) : c(cc), b(bb), a(aa) { }	// コンストラクタ
};

int main()
{
	Abc x(1, 2, 3);
}

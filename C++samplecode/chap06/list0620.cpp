// 参照を返却する関数

#include <iostream>

using namespace std;

//--- xへの参照を返却 ---//
int& ref()
{
	static int x;	// 静的記憶域期間
	return x;
}

int main()
{
	ref() = 5;									// ref()に値を代入
	cout << "ref() = " << ref() << '\n';		// ref()の値を表示
}

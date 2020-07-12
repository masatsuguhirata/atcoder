// 二値の最大値を求める関数テンプレートと関数の呼び分け

#include <cstring>
#include <iostream>

using namespace std;

//--- 関数テンプレート ---//
template <class Type> Type maxof(Type a, Type b) { return a > b ? a : b; }

//--- 通常の関数（注意：動作確認のために小さいほうの値を返却）---//
int maxof(int a, int b) { return a < b ? a : b; }

int main()
{
	int a, b;

	cout << "整数a：";	  cin >> a;
	cout << "整数b：";	  cin >> b;

	cout << "大きいのは" << maxof(a, b)      << "です。\n";
	cout << "大きいのは" << maxof<int>(a, b) << "です。\n";
	cout << "大きいのは" << maxof<>(a, b)    << "です。\n";
}

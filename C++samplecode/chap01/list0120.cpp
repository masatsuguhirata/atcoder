// 文字列の初期化と代入

#include <string>
#include <iostream>

using namespace std;

int main()
{
	string s1 = "ABC";		// 初期化
	string s2 = "XYZ";		// 初期化
	s1 = "FBI";				// 代入（値を書きかえる）

	cout << "文字列s1は" << s1 << "です。\n";		// 表示
	cout << "文字列s2は" << s2 << "です。\n";		// 表示
}

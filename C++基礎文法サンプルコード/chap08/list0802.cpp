// 配列に文字列を格納して表示（代入）

#include <iostream>

using namespace std;

int main()
{
	char s[4];		// 文字列を格納する配列

	s[0] = 'A';		// 代入
	s[1] = 'B';		// 代入
	s[2] = 'C';		// 代入
	s[3] = '\0';	// 代入

	cout << "配列sに入っている文字列は\"" << s << "\"です。\n";		// 表示
}

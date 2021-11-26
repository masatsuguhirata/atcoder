// 文字を読み込んで表示

#include <iostream>

using namespace std;

int main()
{
	char c;		// 文字

	cout << "文字を入力してください：";		// 文字の入力を促す
	cin >> c;								// 文字を読み込む

	cout << "打ち込んだ文字は" << c << "です。\n";		// 表示
}

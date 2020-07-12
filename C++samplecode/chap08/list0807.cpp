// 受け取った文字列中の小文字を大文字に変換して表示

#include <cctype>
#include <iostream>

using namespace std;

//--- 文字列sを表示（小文字は大文字に変換）---//
void put_upper(const char s[])
{
	for (int i = 0; s[i]; i++)
		cout << static_cast<char>(toupper(s[i]));
}

int main()
{
	char str[36];

	cout << "文字列：";
	cin >> str;

	put_upper(str);
	cout << '\n';
}

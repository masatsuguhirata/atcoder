// 配列による文字列とポインタによる文字列

#include <iostream>

using namespace std;

int main()
{
	char  str[] = "ABC";		// 配列による文字列
	char* ptr   = "XYZ";		// ポインタによる文字列

	cout << "str = \"" << str << "\"\n";
	cout << "ptr = \"" << ptr << "\"\n";
}

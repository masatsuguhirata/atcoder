// 配列による文字列とポインタによる文字列

#include <iostream>

using namespace std;

int main()
{
	char a[][5] = {"LISP", "C", "Ada"};		// 配列による文字列の配列
	char* p[]   = {"PAUL", "X", "MAC"};		// ポインタによる文字列の配列

	for (int i = 0; i < 3; i++)
		cout << "a[" << i << "] = \"" << a[i] << "\"\n";

	for (int i = 0; i < 3; i++)
		cout << "p[" << i << "] = \"" << p[i] << "\"\n";
}

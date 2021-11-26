#include <iostream>

using namespace std;

//--- 文字列sを""で囲んで表示 ---//
void put_str(const char* s)
{
	cout << '\"';
	while (*s)
		cout << *s++;
	cout << '\"';
}

int main()
{
	char a[] = "CIA";	// 配列による文字列
	char* p  = "FBI";	// ポインタによる文字列
	char a2[][5] = {"LISP", "C", "Ada"};	// 配列による文字列の配列
	char* p2[]   = {"PAUL", "X", "MAC"};	// ポインタによる文字列の配列

	cout << "a = ";  put_str(a);  cout << '\n';
	cout << "p = ";  put_str(p);  cout << '\n';

	for (int i = 0; i < sizeof(a2) / sizeof(a2[0]); i++) {
		cout << "a2[" << i << "] = ";   put_str(a2[i]);   cout << '\n';
	}

	for (int i = 0; i < sizeof(p2) / sizeof(p2[0]); i++) {
		cout << "p2[" << i << "] = ";   put_str(p2[i]);   cout << '\n';
	}
}

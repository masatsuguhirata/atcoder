// ポインタの基本（アドレス演算子&と間接演算子*）

#include <iostream>

using namespace std;

int main()
{
	int n = 135;
	cout << "n   ：" <<  n << '\n';
	cout << "&n  ：" << &n << "番地\n";

	int* ptr = &n;		// ptrはnを指す
	cout << "ptr ：" <<  ptr << "番地\n";
	cout << "*ptr：" << *ptr << '\n';
}

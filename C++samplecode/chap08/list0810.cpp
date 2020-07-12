// ポインタによる文字列の書きかえ

#include <iostream>

using namespace std;

int main()
{
	char* p = "ABC";

	cout << "p = \"" << p << "\"\n";

	p = "XYZ";			// ＯＫ！

	cout << "p = \"" << p << "\"\n";
}

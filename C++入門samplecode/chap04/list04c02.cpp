// 単なる文字型の符号付き／符号無しを判定

#include <limits>
#include <iostream>

using namespace std;

int main()
{
	cout << "この処理系の単なる文字型は"
		 <<	(numeric_limits<char>::is_signed ? "符号付き" : "符号無し")
		 <<	"文字型です。\n";
}

// #if指令によるプログラムのコメントアウト

#include <iostream>

using namespace std;

#define	DEBUG	0

int main()
{
	int	a = 5;
	int	x = 7;

#if DEBUG == 1
	a = x;				// aにxを代入
#endif

	cout << "aの値は" << a << "です。\n";
}

// 配列の要素のアドレスを表示

#include <iostream>

using namespace std;

int main(void)
{
	int a[5] = {1, 2, 3, 4, 5};
	int* p = a;		// pはa[0]を指す

	for (int i = 0; i < 5; i++)			// 要素へのポインタを表示
		cout << "&a[" << i << "] = " << a + i << "  p+" << i << " = " << p + i << '\n';
}

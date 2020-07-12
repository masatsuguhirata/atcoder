// みんなが驚く（？）プログラム */

#include <iostream>

using namespace std;

int main(void)
{
	int a[4];

	0[a] = a[1] = *(a + 2) = *(3 + a) = 7;				// 全要素に7を代入

	for (int i = 0; i < 4; i++)
		cout << "a[" << i << "] = " << a[i] << '\n';	// a[i]の値を表示
}

// 配列の各要素に1, 2, 3, 4, 5を代入して表示（for文）

#include <iostream>

using namespace std;

int main()
{
	int a[5];		// 要素型がint型で要素数5の配列

	for (int i = 0; i < 5; i++)
		a[i] = i + 1;

	for (int i = 0; i < 5; i++)
		cout << "a[" << i << "] = " << a[i] << '\n';
}

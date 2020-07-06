#include <iostream>
#include <string>
using namespace std;

int main()
{
	int A, B, C;
	int money;
	int X;
	int cnt = 0;

	cin >> A >> B >> C >> X;

	for (int i = 0; i <= A; i++)
	{
		for (int j = 0; j <= B; j++)
		{
			for (int k = 0; k <= C; k++)
			{
				money = 500 * i + 100 * j + 50 * k;
				if (X == money)
				{
					cnt++;
				}
			}
		}
	}

	cout << cnt << endl;
}

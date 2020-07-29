#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;


int sumOfDigits(int num)
{
	int sum = 0;

	while (num > 0)
	{
		sum += num % 10;
		num = num / 10;
	}
	return sum;
}

void func(){
	int n;
	int a, b;
	cin >> n >> a >> b;

	int sum = 0;
	int tmp;
	rep1(i, n)
	{
		tmp = sumOfDigits(i);
		//cout << "i: " << i << "	,tmp: " << tmp << endl;
		if (tmp >= a && tmp <= b)
		{
			sum += i;
		}
	}

	cout << sum << endl;
}

int main()
{
	func();
}

#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
	ll ans=0;

	ll x,k,d;
	cin >> x >> k >> d;

	//xがd*k
	x=abs(x);
	if(double(x/d) > k)//d*kでかい
	{
		ans = x - d*k;
	}else{//xは正と負の場合
		int tmp = k-x/d;
		if(tmp%2==0)//偶数
		{
			ans=x%d;
		}else{//奇数
			ans=x%d - d;
		}

	}//xは負の場合

	cout << abs(ans) << endl;

}

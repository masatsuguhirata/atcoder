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

	ll n;
	cin >> n;

	ll a[n];
	rep(i,n) cin >> a[i];

	ll x;
	cin >> x;

	ll asum=0;
	rep(i,n) asum +=a[i];

	//まず x の中に配列Aが何個はいるか
	ans += (x/asum)*n;

	ll tmp=0,asum_tmp=0;
	tmp=x%asum;
	// rep(i,n){
	// 	if(tmp<asum_tmp){
	// 		ans +=i;
	// 		break;
	// 	}
	// 	asum_tmp+=a[i];
	// }

	rep(i,n){
		asum_tmp+=a[i];
		if(tmp<asum_tmp){
			ans +=i+1;
			break;
		}
	}


	cout << ans << endl;

}

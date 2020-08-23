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
	int n;
	cin >> n;

	ll a[n];
	rep(i,n) cin >> a[i];

	ll num[n];
	rep(i,n) num[i]=0;

	ll sum=0;

	//rep(i,n-1){
	for(int i=0;i<n;++i){
		if(a[i]>a[i+1]) {
			num[i+1]=a[i]-a[i+1];
			a[i+1]+=num[i+1];
			sum+=num[i+1];
		}
	}

	//rep(i,n)
	//	cout << num[i] << " " ;
	//cout << sum << " " ;
	cout << sum << endl;

}

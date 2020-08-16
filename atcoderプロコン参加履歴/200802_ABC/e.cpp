#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
	int ans=0;

	int n,k;
	cin >> n >> k;

	ll a[n];
	rep(i,n) cin >> a[i];

	ll l=0,mid,r=1e9;

	while(r-l>1){
		mid=(l+r)/2;
		int bunkatu=0;

		rep(i,n){
			bunkatu += (a[i]-1)/mid;
		}

		if(bunkatu <= k) r=mid;
		else l = mid;
	}

	cout << r << endl;
}

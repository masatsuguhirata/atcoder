//https://atcoder.jp/contests/abc088/tasks/abc088_b

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
	int n;
	cin >> n;
	int a[n];
	rep(i,n) cin >> a[i];

	sort(a,a+n,greater<int>());
	int alice=0,bob=0;
	for (int i=0; i<n; i=i+2) alice += a[i];
	for (int i=1; i<n; i=i+2) bob += a[i];

	int ans;
	ans = alice - bob;
	cout << ans << endl;
}

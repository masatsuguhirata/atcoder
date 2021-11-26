#include <bits/stdc++.h>
#define rep(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
	int n;
	cin >> n;

	int a[110];
	rep(i,n) cin >> a[i];

	int cnt = 0;

	rep (i,n){
		if ((i%2 == 1) && (a[i]%2 == 1)) {
			//cout << i << ", " << a[i] <<endl;
			cnt++;
		}
	}
	cout << cnt << endl;
}

//https://atcoder.jp/contests/abc087/tasks/abc087_b
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
	int a,b,c;
	int x;

	cin >> a >> b >> c >> x;

	int cnt=0;
	rep(i,a)
		rep(i,b)
			rep(i,c){
				if(x==a*500+b*100+c*50) cnt++;
			}

	cout << cnt << endl;
}

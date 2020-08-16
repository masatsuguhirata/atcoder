//https://atcoder.jp/contests/abc174/tasks/abc174_c

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
	int ans=1;

	int k;
	cin >> k;

	int num=7;

	//while(ans>pow(10,6)){
	while(ans<=pow(10,6)){
		if(num%k==0) break;

		//事後条件
		num= (num%k)*10+7;
		ans++;
	}

	if(ans <=1000000) cout << ans << endl;
	else cout << "-1" << endl;

}

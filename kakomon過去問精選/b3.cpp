//https://atcoder.jp/contests/abc081/tasks/abc081_b

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
	int n;
	cin >> n;
	int a[200];

	rep(i,n) cin >> a[i];

	bool EvenNumOfAll =true;//a[i]が全て偶数か判定する。
	int cnt = 0;

	while (true){
		//-- 奇数が見つかるまで、a[i]を1bitシフトし続ける
		rep(i,n){
			if(a[i]%2 == 0 && a[i]>0){
				a[i] = a[i] >> 1;
				//a[i] /= 2;
			}else{
				EvenNumOfAll =false;
				break;
			}
		}

		//rep(i,n) cout << a[i] << ",";
		//cout << endl;

		if(EvenNumOfAll ==true)cnt++;
		else break;
	}

	cout << cnt << endl;

}

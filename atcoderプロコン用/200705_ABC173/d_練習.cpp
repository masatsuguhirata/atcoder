#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
	int n;
	cin >> n;

	vector<int> a(n);
	rep(i,n) cin >> a[i];

	sort(a.begin(),a.end(),greater<int>());

	//a[i]+a[i-1]+a[i-1]+......の加算をn-1回
	int sum = 0;
	int tmp=1;
	rep(i,n-1){							//n-1加算する
		tmp = (i+1)/2;				//初回の配列のみ1回加算、次回以降は2回加算
		sum +=a[n-1-tmp];			//(n-1)番目の要素から加算し、次回以降はtmpを差し引いた値を加算
	}
	cout << sum << endl;
}

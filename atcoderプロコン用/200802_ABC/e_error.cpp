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

	long double a[n];
	rep(i,n) cin >> a[i];

	//丸太を長い順にソートする
	sort(a,a+n,greater<double>());

	//長い順に等分する数を求める
	int b[n];
	rep(i,n){
		b[i]=k/n+1;//e.g.2回切り取る場合は、3等分なので+1.
		if(k%n > i) b[i]++;
	}

	//長い順に切る数で按分する
	rep(i,n){
		cout << a[i];
		a[i]=ceil(a[i]/b[i]);
		cout << "　⇒　" << a[i]  << "		b : "<< b[i] << endl;
	}

	//切った丸太を長い順にソートしなおす
	sort(a,a+n,greater<double>());

	cout << a[0] << endl;
}

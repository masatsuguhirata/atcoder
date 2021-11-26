#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
	int n;
	cin >> n;
	int a[1081];
	rep1(i,n) cin >> a[i];
	a[n+1]=0;

	int money=1000;
	int kabu=0;

	rep1(i,n){
		if(a[i+1] > a[i]){
			kabu = kabu + money / a[i];
			//money = money - (money/a[i])*a[i];
			money %= a[i];
		}
		if(a[i+1] < a[i]){
			money = money + kabu * a[i];
			kabu=0;
		}
	}
	cout << money << endl;
}

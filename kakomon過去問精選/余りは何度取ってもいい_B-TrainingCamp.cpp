//簡単なので不要
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;


ll calc_kaijou(ll n){
	if (n==1) return 1;
	return ((n*calc_kaijou(n-1))%1000000007);
}

int main(){
	int n;
	ll power;
	cin >> n;
	power = calc_kaijou(n);
	cout << power << endl;
}


/*
普通にfor文で再帰使わなくてよかった
https://qiita.com/tell0120xxx/items/cbcc9cf28f9be8f76ba6
#include<iostream>
using namespace std;
int main() {
    long long N;
    cin >> N;
    long long ans = 1;
    for (int i = 1; i <= N; ++i) {
        ans =i*ans % (1000000007);
    }
    cout << ans << endl;
    return 0;
}
*/

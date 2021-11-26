
//#pragma GCC target("avx2")
//#pragma GCC optimize("O3")
//#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
	int ans=0;

	int a,b,c;
	cin >> a >> b >>c;
	//cin >> a,b,c;

	int tmp;
	for (int i=0;i<=1000;++i){
		tmp = c*i;
		if (tmp>=a and tmp<=b){
			cout << tmp << endl;
			break;
		}else if(i==1000){
			cout << -1 << endl;
		}
	}
}

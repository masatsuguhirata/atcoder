#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
	int ans=0;

	char n[3];
	cin >> n;

	int tmp;
	rep(i,3){
		if(n[i]=='R'){
			tmp++;
			if(tmp>ans) ans=tmp;
		}else{
			tmp=0;
		}

	}



	cout << ans << endl;

}

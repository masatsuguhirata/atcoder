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

	int a,b,k;
	cin >> k >> a >> b;
	int a10=0,b10=0;

	int cnt=0;
	while(a>0){
		a10=a10+(a%10)*(pow(k,cnt));
		a=a/10;
		cnt++;
	}

	cnt=0;
	while(b>0){
		b10=b10+(b%10)*(pow(k,cnt));
		b=b/10;
		cnt++;
	}

	ans=a10*b10;
	cout << ans << endl;
}

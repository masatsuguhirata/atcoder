#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

#define SIZE_OF_ARRAY(array)    (sizeof(array)/sizeof(array[0])
#include <stdlib.h>

int main() {
	int ans=0;

	//int n;
	//cin >> n;

	string n;
	cin >> n;
	char tmp[1];

	int nmax;
	nmax=n.length();

	//for(int i=nmax-1;i>-1;i--){
	for(int i=0;i<nmax;i++){
	//for(int i=0;i<10;i++){
		tmp[0]=n[i];
		ans+= atoi(tmp);
		//cout << ans << endl;
	}

	if(ans%9==0) cout << "Yes" << endl;
	else cout << "No" << endl;

}

//https://atcoder.jp/contests/abc174/tasks/abc174_d

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

#define SIZE_OF_ARRAY(array)    (sizeof(array)/sizeof(array[0]))

int getcount(char* a,int aend,char comparison){
	int numOfR=0;
	rep(i,aend){
		if(a[i]==comparison) numOfR++;
	}
	return numOfR;
}

int main() {
	int ans=0;

	int n;
	cin >> n;
	char a[n];
	rep(i,n) cin >> a[i];

	//敷居のため、Rの数を求める
	int devide = getcount(a,n,'R');

	//敷居より左側のWの数を求める
	ans = getcount(a,devide,'W');

	cout << ans << endl;
}

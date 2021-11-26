#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
	int n,k;
	cin >> n >> k;

	int a[200001];
	rep1(i,n) cin >> a[i];

	for(int i=1;i <= n-k;i++){
		if(a[i+k] > a[i]){
			cout << "Yes" << endl;
		}else{
			cout << "No" << endl;
		}
	}
}

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
	int a,b,c;
	cin >> a >> b >> c;
	int k;
	cin >> k;

	rep1(i,k){
		if(b <= a) b=b*2;
		else if(c <= b) c=c*2;
	}

	if ((b > a) && (c > b)) cout << "Yes" << endl;
	else cout << "No" << endl;
}

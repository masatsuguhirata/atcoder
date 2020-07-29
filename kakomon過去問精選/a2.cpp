#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
	string str;
	cin >> str;

	int cnt =0 ;

	rep(i,3) if(str[i] =='1') cnt++;

	rep(i,3){
		//if(str[i] =='1') cnt++;
	}
	cout << cnt << endl;

}

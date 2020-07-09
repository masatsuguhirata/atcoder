//簡単なのでいらない
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;


int main() {
	int a,b;
	int c,d;
	int start,end,time;

	cin >> a >> b >> c >> d;

	start = a > c? a : c;//startは大きい方を返す
	end = b > d? d : b;//endは小さい方を返す
	time = end - start;

	if (time > 0) cout << time << endl;
	else cout << "0" << endl;
}

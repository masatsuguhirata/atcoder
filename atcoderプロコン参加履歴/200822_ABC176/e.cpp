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

	int h,w,m;
	cin >> h >> w >> m;

	int ctny[h];
	int ctnx[w];
	rep(i,w) {
		ctnx[i]=0; 
	}
	rep(i,h){
		ctny[i]=0;
	}

	int x[m],y[m];
	int tmp;

	rep(i,m){
		cin >> x[i] >> y[i];
		tmp=x[i];
		ctnx[tmp] += 1;
		tmp=y[i];
		ctny[tmp] += 1;
	}

	int xmax=-1;
	int ymax=-1;
	rep(i,m){
		if(ctnx[i] > xmax) xmax=ctnx[i];
		if(ctny[i] > ymax) ymax=ctny[i];
	}

	ans = xmax+ymax;


	for(int y = 0; y < h; ++y) {
		for(int x = 0; x < w; ++x) {
		//	cin >> b[y][x];


		}
	}




	cout << ans << endl;

}

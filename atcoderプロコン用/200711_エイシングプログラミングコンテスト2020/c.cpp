#include <bits/stdc++.h>
#define rep(i, n) for (int i = 1; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {

	int n;
	cin >> n;

	int sum=0;
	int cnt=0;

	rep(ncnt,n+1){
	rep (i,100){
		rep(j,100){
			if (j > i) break;
			rep(k,100){
				if (k > j) break;
				sum = i*i+j*j+k*k+i*j+j*k+k*i;
				if(ncnt==sum)
				{
					//cout << i << "," << j << "," << k << "       ";
					if ((i == j) && (j== k)) cnt ++;
					else if ((i == j) or (j == k)) cnt += 3;
					else if ((i != j) or ( j != k)) cnt += 6;
					//else cout << "count　できていないものあり" << endl;
				}
			}
		}
	}
	//if (cnt > 0) cout << ncnt << ":cnt" << cnt <<  endl;
	cout << cnt <<  endl;
	cnt =0;
	}
}

/*
こっちの方がn倍ほど計算量が減る
// C - XYZ Triplets
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	vector<int> f(n);
	for(int x=1; x*x<n; ++x)
		for(int y=1; y*y<n; ++y)
			for(int z=1; z*z<n; ++z){
				int k = x*x + y*y + z*z + x*y + y*z + z*x;
				if(1<=k && k<=n) f[k]++;
			}
	for(int i=1; i<=n; ++i) cout<< f[i] <<endl;
}
*/

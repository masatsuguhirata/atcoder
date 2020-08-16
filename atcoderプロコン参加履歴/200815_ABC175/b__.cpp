#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 2; i <= (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;


int main() {

	int ans=0;
	int n;
	cin >> n;

	int tmp;
  std::vector<int> vec;
	rep(i,n) {
		cin >> tmp;
		vec.push_back(tmp);
	}
  std::sort(vec.begin(), vec.end());

	n=vec.size();
	for(int x=0;x<n-2;x++){
		for(int y=x+1;y<n-1;y++){
			for(int z=y+1;z<n;z++){
				if((vec[x] < vec[y]) && (vec[y] < vec[z]))//ここの条件
				{
				if(vec[x]+vec[y]>vec[z]) {
					ans++;
				}
				}
			}
		}
	}

	cout<< ans << endl;


}

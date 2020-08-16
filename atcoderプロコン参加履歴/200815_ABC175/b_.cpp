#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 2; i <= (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

#define SIZE_OF_ARRAY(array)    (sizeof(array)/sizeof(array[0]))


void printVec(std::vector<int> &vec) {
  std::cout << "";
  for (auto it = vec.begin(); it != vec.end(); ++it) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;
}

int main() {
//  std::vector<int> vec = {10,40,40,20,20,30,20,20,40};
//  std::sort(vec.begin(), vec.end());
//  vec.erase(std::unique(vec.begin(), vec.end()), vec.end());
//  printVec(vec);    // 10 20 30 40

	int ans=0;
	int n;
	cin >> n;

  //std::vector<int> vec = {10,40,40,20,20,30,20,20,40};
	int tmp;
  std::vector<int> vec;
	rep(i,n) {
		cin >> tmp;
		vec.push_back(tmp);
	}
  std::sort(vec.begin(), vec.end());
  //vec.erase(std::unique(vec.begin(), vec.end()), vec.end());
  //printVec(vec);    // 10 20 30 40

	n=vec.size();
	//cout << "vec" << n << endl;
	for(int x=0;x<n-2;x++){
		for(int y=x+1;y<n-1;y++){
			for(int z=y+1;z<n;z++){
				//cout << x << ","<< y << ","<< z << ",";
				if((vec[x] < vec[y]) && (vec[y] < vec[z]))
				{
				if(vec[x]+vec[y]>vec[z]) {
					ans++;
					//cout << "ans";
				}
				}
				//cout << endl;
			}
		}
	}



//	vector<int> l;
	//int l[n];
//	rep(i,n) cin >> l[i];
 // sort(l.begin(), l.end());
 // l.erase(std::unique(l.begin(), l.end()), l.end());
	cout << ans << endl;

}

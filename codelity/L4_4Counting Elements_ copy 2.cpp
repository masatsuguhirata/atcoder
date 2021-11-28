//url:
//
// Task Score: 100%
// Correctness: 100%
// Performance: 100%
//Detected time complexity:

#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;


int solution(int X, vector<int> &A) {
}

int main(){
	vector<int> B={1,3,1,4,2,3,5,4};
	cout << solution(5,B) << endl;
	vector<int> c={1,3,1,4,2,3,4};
	cout << solution(5,c) << endl;
	return 0;
}



//回答url:https://app.codility.com/demo/results/trainingJWW97V-4KF/
//
// Task Score: 50%
// Correctness: 100%
// Performance: 0%
//Detected time complexity:O(N ** 2) 直角三角形の面積分

// #pragma GCC target("avx2")
// #pragma GCC optimize("O3")
// #pragma GCC optimize("unroll-loops")
#define _GLIBCXX_DEBUG//配列外参照のデバッグ用

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

// 1<= int N <= 10^5
//int A[i] ={0,1}
int solution(vector<int> &A) {
	int ans=0;
	int Asize=A.size();

	rep(i,Asize){
		for (int j=i+1;j<Asize; j++){
			if (A[i]==1) break;
			if (A[i] != A[j]){
				//ans = 1000000000;
				ans++;
				if (ans > 1000000000) return -1;
			}
		}
	}
	return ans;
}

int main(){
	vector<int> B={0,1,0,1,1};
	cout << solution(B) << endl;

	vector<int> c={0,0};
	cout << solution(c) << endl;

	vector<int> d={0};
	cout << solution(d) << endl;

	return 0;
}


//問題文

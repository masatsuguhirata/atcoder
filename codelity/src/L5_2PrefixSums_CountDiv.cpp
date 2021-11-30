//回答url:https://app.codility.com/demo/results/training2SKSNG-2C6/
//
// Task Score: 100%
// Correctness: 100%
// Performance: 100%
//Detected time complexity:O(1)

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

// 0 <= int A,B;<=2*10^9 A<=B
// 1 <= int K;<=2*10^9
// 123,000,000
int solution(int A, int B, int K){
	int ans=0;

	//solution 1
	ans=B/K-A/K;
	if(A%K==0) ans++;

	//solution 2
	 //return ( B/K - A/K + !(A%K) );

	//time out error https://app.codility.com/demo/results/trainingP5K2KK-WRU/
	// for (int i=A; i<=B; i++){
	// 	if((i%K)==0) ans++;
	// }
	return ans;
}

int main(){
	vector<int> B={9,3,9,3,9,7,9};
	cout << solution(6,11,2) << endl;
	cout << solution(1,2000000000,2) << endl;
	return 0;
}


//問題文

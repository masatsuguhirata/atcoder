//回答url:https://app.codility.com/demo/results/trainingBBPJZ2-WCT/
//
// Task Score: 100%
// Correctness: 100%
// Performance: 100%
//Detected time complexity:O(N*log(N)) or O(N)

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

//【値の範囲】-10^6 <= int A[N] <= 10^6 0<=N<=10^5

//【解法検討】テーマのソート使わず、Set・vectorでもいい.sortしない方が早いが。ただ、配列の要素数が10^6もあるのも微妙。
//タイムアウト避けたいので、vectorでカウントする方向で進める
//sample側にソートの回答例をのこす

int solution(vector<int> &A) {
	vector<int> count(2'000'001,0);// -10^6 to 10^6 要素数と桁数に注意。
	// cout << count.size() << endl;
	int ans=0;//<= N 10^5
	int N=A.size();

	 for(int i=0;i<N;i++){
		count[A[i]+1'000'000]=1;
	}

	 for(int i=0;i<2'000'001;i++){//roopの回数に注意
		 if (count[i] > 0) {
			 ans++;
		 }
	}
	return ans;

}

int main(){
	vector<int> B={2,1,1,2,3,1};
	cout << solution(B) << endl;
	vector<int> c={-1'000'000,1,1,0,3,1'000'000};
	cout << solution(c) << endl;
	return 0;
}

//回答url:https://app.codility.com/demo/results/trainingF3TYUF-UQ8/
//
// Task Score: 100%
// Correctness: 100%
// Performance: 100%
//Detected time complexity:O(N)

#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
// #define _GLIBCXX_DEBUG//配列外参照のデバッグ用

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

// 1<= int N <= 10^5
//int A[i] ={0,1}
//0(east)の車があれば、一度にすれ違う車の数のカウントするため、cntを増やす
//1(west)の車があれば、cnt分だけカウントアップする
//ans が規定値を超えると-1を返す
int solution(vector<int> &A) {
	int ans=0;// llの方が適切ではある
	int Asize=A.size();
	int cnt=0;

	rep(i,Asize){
		if (A[i]==0){
			cnt++;
		}else{
			ans+=cnt;
			if (ans > 1000000000) return -1;
		}
	}
	if (ans > 1000000000) return -1;
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

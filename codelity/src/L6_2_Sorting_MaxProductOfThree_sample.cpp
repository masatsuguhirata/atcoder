//回答url:https://app.codility.com/demo/results/trainingEXUEFY-J98/
//
// Task Score: 100%
// Correctness: 100%
// Performance: 100%
//Detected time complexity:O(N * log(N))

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

//3<= intN <=10^5
// -1000 <= A[N] <=1000
//(0 ≤ P < Q < R < N).
int solution(vector<int> &A) {
	int ans=INT_MIN;//3積は10^9以内に収まる
	int Asize=A.size();

	sort(A.begin(),A.end());
	int P1 = A[Asize-1]*A[0]*A[1];
	int P2 = A[Asize-1]*A[Asize-2]*A[Asize-3];
	ans = max(P1,P2);

	return ans;
}

int main(){
	{vector<int> B={-3,1,2,-2,5,6};
	cout << solution(B) << endl;}
	{vector<int> B={-3,-1,-2,-2,5,6};
	cout << "ans36 :"<< solution(B) << endl;}
	{vector<int> B={-3,-1,-2,-2,-5,-6};
	cout << "ans-4 :"<< solution(B) << endl;}
	return 0;
}

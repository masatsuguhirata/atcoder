//回答url:https://app.codility.com/demo/results/trainingMDWG6W-T3R/
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
	sort(A.begin(),A.end());
	int Asize=A.size();
	int tmp;
	//ans>正、各要素いずれも正
	if(A[Asize-3]> 0) ans=A[Asize-1]*A[Asize-2]*A[Asize-3];
	//ans>正,一つの要素のみ正、それ以外、負で絶対値の大きなもの二つ
	if(A[Asize-1]> 0 && A[1]<0) {
		ans = max(A[Asize-1]*A[0]*A[1],ans);
	}
	//****以下のロジックは、上記のロジックに包含されている。
	//フィーチャー分析っぽい書き方をすると気づくはず。

	//ans<負(最小に抑えたい)0を含むケース,配列中に正の要素が二つしかない場合 ※負の値を２つ選択すれば正に変わる
	if(A[Asize-3] < 0 && A[Asize-2]>0) {
		ans=max(A[Asize-1]*A[Asize-2]*A[Asize-3],ans);
		if (Asize>=5){
			ans=max(A[Asize-3]*A[Asize-4]*A[Asize-5],ans);
		}
	}
	//ans<負(最小に抑えたい)0を含むケース,配列中に正の要素がひとつもない場合
	if(A[Asize-1] <= 0){
		ans = max(A[Asize-1]*A[Asize-2]*A[Asize-3],ans);
	}
	return ans;
}

int main(){
	{vector<int> B={-3,1,2,-2,5,6};
	cout << solution(B) << endl;}
	{vector<int> B={-3,-1,-2,-2,5,6};
	cout << "ans4 :"<< solution(B) << endl;}
	{vector<int> B={-3,-1,-2,-2,5,6};
	cout << "ans4 :"<< solution(B) << endl;}
	return 0;
}

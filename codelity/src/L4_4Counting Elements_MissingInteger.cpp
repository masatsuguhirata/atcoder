//url:https://app.codility.com/demo/results/trainingESMSRB-7GH/
//
// Task Score: 100%
// Correctness: 100%
// Performance: 100%
//Detected time complexity:O(N) or O(N * log(N))
//ソートを使った解き方より、sample側のカウンタを利用した方がすっきりしていて楽

#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#define _GLIBCXX_DEBUG//配列外参照のデバッグ用

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

void coutvec(vector<int> &A){
	 rep(i,A.size()) cout << A[i] << " ";
	 cout << endl;
}
// 1 <=int N <=10^5
//-10^6 <= intA[i]<=10^6
//0以上の最小値を出す
int solution(vector<int> &A){
	sort(A.begin(),A.end());
	//coutvec(A);

	int Asize=A.size();
	int cnt=0;
	rep(i,Asize){
		if (A[i]<1){
		}else if(cnt == A[i]){
		}else if(cnt == (A[i]-1)){
			cnt++;
		}else if(cnt < (A[i]-1)){
			return ++cnt;
		}else{
			cout << "error" << endl;
		}
	}
	return ++cnt;
}

int main(){
	//sample
	vector<int> B={1,3,6,4,1,2};
	cout << solution(B) << endl;
	vector<int> c={-1,-3};
	cout << solution(c) << endl;
	vector<int> d={1,3,2};
	cout << solution(d) << endl;
	return 0;
}

//回答url:
//
// Task Score: 100%
// Correctness: 100%
// Performance: 100%
//Detected time complexity:

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

//1 <= int N <= 10^5
//int A[i]:-10^6 to 10^6
int solution(vector<int> &A) {
	int ans=1;
	int Asize=A.size();
	sort(A.begin(),A.end());

	// rep(i,Asize){
	for(int i=0; i<Asize;i++){
		if(A[i] <= 0){

		}else if(A[i] == ans){
			ans++;
		}
	}
	return ans;
}

int main(){
	{vector<int> B={-1,1,3,6,4,1,2};
	cout << solution(B) << endl;}
	{vector<int> B={1,2,3};
	cout << solution(B) << endl;}
	{vector<int> B={-1,-3};
	cout << solution(B) << endl;}
	return 0;
}


//問題文

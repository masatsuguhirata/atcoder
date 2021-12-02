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
	int ans=0;
	int Asize=A.size();
	sort(A.begin(),A.end());

	//A[i]の最大値が0以下である場合は、1を返す。A={-1,-3}のケース;
	if(A[Asize-1]<=0) return 1;

	//A[]の最大値が1以上。A={-1,1,3,6,4,1,2};のケース
	for(int i=0; i<Asize;i++){
		if(ans>=A[i]){
		}else if((ans+1) ==A[i]){
			ans++;
		}else{
			return ++ans;
		}
	}

	//A={1,2,2,3}のケース
	return ++ans;
}

int main(){
	{vector<int> A={-1,1,3,6,4,1,2};
	cout << solution(A) << endl;}
	{vector<int> A={1,2,2,3};
	cout << solution(A) << endl;}
	{vector<int> A={-1,-3};
	cout << solution(A) << endl;}
	{vector<int> A={2};
	cout << solution(A) << endl;}
	return 0;
}


//問題文

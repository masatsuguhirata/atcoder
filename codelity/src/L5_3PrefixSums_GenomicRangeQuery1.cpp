//回答url:https://app.codility.com/demo/results/trainingE56MRR-2MJ/
//
// Task Score: 12%
//Detected time complexity:

// #pragma GCC target("avx2")
// #pragma GCC optimize("O3")
// #pragma GCC optimize("unroll-loops")
#define _GLIBCXX_DEBUG//配列外参照のデバッグ用

//sol1:単純に計算したのであればo(N^2/2)

//sol2_o(N):P-1の時点のACGTのそれぞれの数と、Qの時点のACGTを計算しておく。
//Qの時点-Pの時点のACGTで導出できる

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

// 1<= int N <= 10^5
// 1<= int M <= 0.5*10^5
// 0<= int P,Q<=N-1
// P[K]<=Q[K] , where 0 ≤ K < M;
// string s={A,C,G,T}
vector<int> solution(string &S, vector<int> &P, vector<int> &Q){
	int N=S.size();
	int M=P.size();//arrays P and Q,each consisting of M integer
	vector<int> ans(M,0);
	vector<int> A(N,0);//特定の地点でのAの文字の総数
	vector<int> C(N,0);
	vector<int> G(N,0);
	vector<int> T(N,0);

	//特定の地点でのACGTの文字数のカウント

	int Acnt=0,Ccnt=0,Gcnt=0,Tcnt=0;
	rep (i,N){
		if(S[i]=='A') A[i]=++Acnt;
		if(S[i]=='C') C[i]=++Ccnt;
		if(S[i]=='G') G[i]=++Gcnt;
		if(S[i]=='T') T[i]=++Tcnt;
	}

	//exception Q[i]とp[i]が同じ
	//Q[i]の文字列を代入
	rep(i,M){
		if(P[i]==0) {
			if(A[Q[i]]>0) ans[i]=1;
			if(C[Q[i]]>0) ans[i]=2;
			if(G[Q[i]]>0) ans[i]=3;
			if(T[Q[i]]>0) ans[i]=4;
		}else if((A[Q[i]]-A[P[i]-1])> 0){
			ans[i]=1;
		}else if((C[Q[i]]-C[P[i]-1])> 0){
			ans[i]=2;
		}else if((G[Q[i]]-G[P[i]-1])> 0){
			ans[i]=3;
		}else if((T[Q[i]]-T[P[i]-1])> 0){
			ans[i]=4;
		}
	}
	// coutvec(ans);
	return ans;
}


int main(){
	string S="CAGCCTA";
	vector<int> P={2,5,0};
	vector<int> Q={4,5,6};
	//coutvec(&solution(S,P,Q));
	vector<int> ans(solution(S,P,Q));//コピーコンストラクタ
	coutvec(ans);
	return 0;
}


//問題文

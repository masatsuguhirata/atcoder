//回答url:https://app.codility.com/demo/results/trainingCMY3XM-JGY/
//
// Task Score: 100%
// Correctness: 100%
// Performance: 100%
//Detected time complexity:O(N + M)

// #pragma GCC target("avx2")
// #pragma GCC optimize("O3")
// #pragma GCC optimize("unroll-loops")
#define _GLIBCXX_DEBUG//配列外参照のデバッグ用

//（不採用）sol1:単純に毎回PQ区間の要素を処理計算したのであればo(N^2/2)

//（採用）sol2_o(N):P-1の時点のACGTのそれぞれの数と、Qの時点のACGTを計算しておく。
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

	int Acnt=0,Ccnt=0,Gcnt=0,Tcnt=0;//NG:初期化に注意
	rep (i,N){
		if(S[i]=='A') ++Acnt;//NG:カウント方法の誤り。やっぱり、ちゃんと絵にかいてから解くべきだなあ。
		if(S[i]=='C') ++Ccnt;
		if(S[i]=='G') ++Gcnt;
		if(S[i]=='T') ++Tcnt;
		A[i]=Acnt;
		C[i]=Ccnt;
		G[i]=Gcnt;
		T[i]=Tcnt;
	}

	//exception Q[i]とp[i]が同じ
	//Q[i]の文字列を代入
	rep(i,M){
		if(P[i]==0) {
			if(A[Q[i]]>0) ans[i]=1;
			else if(C[Q[i]]>0) ans[i]=2;//NG:else if 記載漏れ,別ロジックとの対称性をチェックするべきだった
			else if(G[Q[i]]>0) ans[i]=3;
			else if(T[Q[i]]>0) ans[i]=4;
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

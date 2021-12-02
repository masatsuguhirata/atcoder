/*
You are given two non-empty arrays A and B consisting of N integers. Arrays A and B represent N voracious fish in a river, ordered downstream along the flow of the river.

The fish are numbered from 0 to N − 1. If P and Q are two fish and P < Q, then fish P is initially upstream of fish Q. Initially, each fish has a unique position.

Fish number P is represented by A[P] and B[P]. Array A contains the sizes of the fish. All its elements are unique. Array B contains the directions of the fish. It contains only 0s and/or 1s, where:

0 represents a fish flowing upstream,
1 represents a fish flowing downstream.
If two fish move in opposite directions and there are no other (living) fish between them, they will eventually meet each other. Then only one fish can stay alive − the larger fish eats the smaller one. More precisely, we say that two fish P and Q meet each other when P < Q, B[P] = 1 and B[Q] = 0, and there are no living fish between them. After they meet:

If A[P] > A[Q] then P eats Q, and P will still be flowing downstream,
If A[Q] > A[P] then Q eats P, and Q will still be flowing upstream.
We assume that all the fish are flowing at the same speed. That is, fish moving in the same direction never meet. The goal is to calculate the number of fish that will stay alive.

For example, consider arrays A and B such that:

  A[0] = 4    B[0] = 0
  A[1] = 3    B[1] = 1
  A[2] = 2    B[2] = 0
  A[3] = 1    B[3] = 0
  A[4] = 5    B[4] = 0
Initially all the fish are alive and all except fish number 1 are moving upstream. Fish number 1 meets fish number 2 and eats it, then it meets fish number 3 and eats it too. Finally, it meets fish number 4 and is eaten by it. The remaining two fish, number 0 and 4, never meet and therefore stay alive.

Write a function:

class Solution { public int solution(int[] A, int[] B); }

that, given two non-empty arrays A and B consisting of N integers, returns the number of fish that will stay alive.

For example, given the arrays shown above, the function should return 2, as explained above.

Write an efficient algorithm for the following assumptions:

N is an integer within the range [1..100,000];
each element of array A is an integer within the range [0..1,000,000,000];
each element of array B is an integer that can have one of the following values: 0, 1;
the elements of A are all distinct.
*/

//回答url:https://app.codility.com/demo/results/training52ZB5J-3P6/
//
// Task Score: 100%
// Correctness: 100%
// Performance: 100%
//Detected time complexity:O(N)

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

//問題文概要
//int N 1 to 10^5
//int A[N] 0 to 10^9 A[]の値は全て異なる。魚の大きさをあらわす
//int B[N]={0,1} 0は上流左端へ、1は下流右端へ向かう魚
//上流が左端 P and Q are two fish and P < Q, then fish P is initially upstream of fish Q
//Nが魚の総数
//fish number P:Pは魚の数ではなく、 A[P],B[P] 採番で初期位置。 P < Qの相対的な位置表現
//0<= P< Q < N
//出会った場合は、でかい方が小さい方を食べて、そのまま同じ方向B[PorQ]へ進む。同じ方向の魚とは出会わない
//生き残った魚の数を出力する

//再帰関数
void eat(vector<int> &v,int i,vector<int> &A,vector<int> &B){
	// cout << "1tes" << endl;
	// if(i-1>=0 && B[i-1]==1){//食べあう
	if(v.size() == 0){//1.一個前に捕食対象がいない場合は、魚の採番を積む
		 v.push_back(i);
	// }else if(B[v.size()-1]==1){//NG:Bの参照先は v.size()-1ではなく、v[v.size-1]である
	}else if(B[v[v.size()-1]]==1){//2.一個前に捕食対象がいる場合
		// if(A[i]>A[v.size()-1]){//NG：Aの参照先も同上
		if(A[i]>A[v[v.size()-1]]){//2_1.下流側の魚のサイズがでかい場合
			v.pop_back();//上流側（かつ下流方向に進む）の魚を取り除く
			eat(v,i,A,B);//もう一つ上流の魚を見にいく
		}
		else{											//2_2.下流側が小さい場合は、上流に食べられるため、詰まれない
			// v.push_back(i);
		}
	}
	else v.push_back(i);//3.下流に向かう魚がいない場合は、上流に向かう魚の採番を積む
	// cout << "2tes" << endl;
}

int solution(vector<int> &A, vector<int> &B){

	// rep i:0 to N.stackにB=0方向の魚が居たら積む.countせず、最後ansを出せば良い
	// rep i:0 to N.stackにB=1方向の魚を積む
	// B=0の魚が出た場合に、B=1と比較する
	// 	B=1がでかい場合は、次のiへ
	// 	B=0がでかい場合には、Pの魚をpop_back,
	// 		P-1かつB=1方向がいたら再び比較　再帰
	// 		P-1かつB=0であれば積む
	// i=N-1. B=1のみか,B=0の魚のみstackに積まれているので、それらのカウントをする
	// stackへのため方P/Qの情報。魚の採番

	int ans=0;
	vector<int> v;
	int N=A.size();

	rep(i,N){
		if(B[i]==1) v.push_back(i);//Qの魚を積む
		if(B[i]==0) {//一つ上流の魚の状態をみにいく
			eat(v,i,A,B);
		}
	}
	return v.size();
}

int main(){
	// {//sample
	// 	vector<int> A={4,3,2,1,5};
	// 	vector<int> B={0,1,0,0,0};
	// 	cout << "ans2:"<< solution(A,B) << endl;}
	// {//再帰関数,下流の魚に次々に食べられる
	// 	vector<int> A={4,3,2,1,5};
	// 	vector<int> B={0,1,1,1,0};
	// 	cout << "ans2:"<< solution(A,B) << endl;}
	// {//N=0
	// 	vector<int> A={};
	// 	vector<int> B={};
	// 	cout << "ans0:"<< solution(A,B) << endl;}
	// {//N=1
	// 	vector<int> A={4};
	// 	vector<int> B={0};
	// 	cout << "ans1:"<< solution(A,B) << endl;}
	// {//初期値1
	// 	vector<int> A={4,3,2,1,5};
	// 	vector<int> B={1,1,0,0,0};
	// 	cout << "ans1:"<< solution(A,B) << endl;}
	{//random
		vector<int> A={4,3,2,1,5,4,3,2,1,5};
		vector<int> B={1,1,0,0,0,1,1,0,0,0};
		cout << "ans2:"<< solution(A,B) << endl;}
	return 0;
}

//回答url:https://app.codility.com/demo/results/trainingD5SUH2-VPC/
//
// Task Score: 100%
// Correctness: 100%
// Performance: 100%
//Detected time complexity:

// #pragma GCC target("avx2")
// #pragma GCC optimize("O3")
// #pragma GCC optimize("unroll-loops")
// #define _GLIBCXX_DEBUG//配列外参照のデバッグ用

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

//2 <= int N <~10^6
//-10^5 <= int A[i] <=10^5
//Aはペア型ではなかった。 0 ≤ P < Q < N
	//A pair of integers (P, Q), such that 0 ≤ P < Q < N

//速度重視だと、こちらのコードの方が若干早いhttps://youtu.be/Xu_hTjFAauk=508
//解き方は、２つまたは３つの連続する配列の平均値を測る。
//４つ連続する場合においては、２つ連続または３つ連続の場合の方が必ず小さくなるため、平均値を確認する必要がない
int solution(vector<int> &A) {
	float min=INT_MAX;
	int mi=0;

	if (A.size()>2){
	for (int i=0; i<A.size()-2; i++){
		float v1 = (float)(A[i]+A[i+1]+A[i+2])/3.0;
		if(min > v1) {
			min=v1;
			mi=i;
		}
	}
	}
	for (int i=0; i<A.size()-1; i++){
		float v2 = (float)(A[i]+A[i+1])/2.0;
		//計算中の値が、（3平均のmin, miが0, 100で、2平均のmin,miが0,10の時など）最小値は同じだが、最小となるインデックスが異なる場合に事象が発生する。
		//・不正解コードだと、3平均だけを扱った場合にmi(最小のインデックス)が100で更新され、2平均のmiの10で更新されるべき箇所が、最小値が同じ0であるため更新されずにバグとなる。
		//if(min > v1) {//子のロジックだとNG、「3平均のmin, miが0, 100で、2平均のmin,miが0,10の時とか」に問題アリ
		if(((min==v2) && (mi>i)) || (min > v2)) { //NG:このロジックに要注意https://teratail.com/questions/371592?whotofollow=
			min=v2;
			mi=i;
		}
	}
	return mi;
}

int main(){
	vector<int> B={4,2,2,5,1,5,8};
	cout << solution(B) << endl;
	vector<int> c={-1,1,0,1,1,-1,-1};
	cout << solution(c) << endl;
	return 0;
}

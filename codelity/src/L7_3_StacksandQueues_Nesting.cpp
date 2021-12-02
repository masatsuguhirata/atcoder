//回答url:https://app.codility.com/demo/results/trainingDPZMZ2-QNX/
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

//stackはvectorで代用できるため、vectorで書いてみた
//lesson 7_1の劣化版なのでコピー

int solution(string &S){
	int Ssize=S.size();
	vector<char> v;

	if (Ssize==0) return 1;

	rep(i,Ssize){
			// v.push_back('a');
		switch(S[i]){
			case '(':
				v.push_back(S[i]);break;
			// case '{':
			// 	v.push_back(S[i]);break;
			// case '[':
			// 	v.push_back(S[i]);break;
			case ')':
				if (v.size()==0 || v[v.size()-1] != '(') return 0;//s[i]=)の場合にv[vsize-1]は逆括弧(の条件でなければならないことに注意
				else if(v[v.size()-1]=='(') v.pop_back();
				else cout << "error" << endl;
				break;
			// case '}':
			// 	if (v.size()==0 || v[v.size()-1] != '{') return 0;
			// 	else if(v[v.size()-1]=='{') v.pop_back();
			// 	else cout << "error" << endl;
			// 	break;
			// case ']':
			// 	if (v.size()==0 || v[v.size()-1] != '[') return 0;
			// 	else if(v[v.size()-1]=='[') v.pop_back();
			// 	else cout << "error" << endl;
			// 	break;
		}
	}
	if(v.size()==0) return 1;
	else return 0;
}

int main(){
	{//文字列が空
		string S = "";
		cout << solution(S) << endl;}
	{//括弧が揃う
		string S = "(()(())())";
		cout << solution(S) << endl;}
	{//最後に揃わない
		string S = "((()(())())";
		cout << solution(S) << endl;}
	return 0;
}

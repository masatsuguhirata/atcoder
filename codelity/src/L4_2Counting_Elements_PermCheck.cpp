//url:https://app.codility.com/demo/results/trainingR6XD4G-9C8/
//
// Task Score: 100%
// Correctness: 100%
// Performance: 100%
//Detected time complexity:

// #pragma GCC target("avx2")
// #pragma GCC optimize("O3")
// #pragma GCC optimize("unroll-loops")
#define _GLIBCXX_DEBUG

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

//1 <= int N <= 10^5 要素数
//1<= ll a[i]<=10^9 //non empty

//1. ソートして、順番に値があるか確認する o(NlogN) ※一応ソートでも時間内におわるらしい。　https://www.youtube.com/watch?v=TWGWmR6Ti9s
//2. vector にフラグたてて突っ込んで、全部あるか確認する oN
//今回は2を採用する

int max(std::vector<int> v)
{
    int maxVal = INT_MIN;       // 整数最小値
    for(int i = 0; i < (int)v.size(); ++i) {
        if( v[i] > maxVal )
            maxVal = v[i];
    }
    return maxVal;
}

int solution(vector<int> &A){
	int Asize=A.size();
	vector<int> track(Asize,0);
	int tracksize=track.size();

	for (int i=0;i<Asize;i++){
		// if (i<Asize){//double free or corruption (out) 配列外参照エラーの回避
			if(A[i]<=Asize)
				track[A[i]-1]=1;
	}

	//Aと同じ要素数
	int cnt=0;
	for (int i=0;i<Asize;i++){
		if(track[cnt]==1)
			cnt++;
	}

	// while((track[cnt]==1) and (cnt < Asize)){
	// 	cnt++;
	// }

	if(cnt==Asize){
		return 1;
	}else{
		return 0;
	}
}

//1 <= int N <= 10^5 要素数
//1<= ll a[i]<=10^9 //non empty
int main(){

	vector<int> a={4,1,3,2};
	cout << max(a) <<endl;
	cout << "ans1:" <<solution(a) << endl;
	vector<int> b={5,3,2,1};
	//vector<int> B={4,1,3,2,5};
	cout << max(b) << endl;
	cout << "ans0:" <<solution(b) << endl;
	vector<int> c={1};
	cout << max(c) <<endl;
	cout << "ans1:" <<solution(c) << endl;
	vector<int> d={2};
	cout << max(d) <<endl;
	cout << "ans0:" <<solution(d) << endl;

	vector<int> e={1000000000};
	cout << max(e) <<endl;
	cout << "ans0:" <<solution(e) << endl;

	vector<int> f;
	 for(int i=1;i<=100000;i++){
	 	f.push_back(i);
	 }
	cout << max(f) <<endl;
	cout << "ans1:" <<solution(f) << endl;


	f[10]=1;
	cout << max(f) <<endl;
	cout << "ans0;" <<solution(f) << endl;
	// vector<int> C;
	// for(ll i=rri<=1000000000;i++){
	// 	C.push_back(i);
	// 	if (i % 10000000==0){
	// 		cout << i << endl;
	// 	}
	// }
	// //vector<int> B={4,1,3,2,5};
	// cout << max(C) << endl;
	// cout << solution(C) << endl;
	return 0;
}

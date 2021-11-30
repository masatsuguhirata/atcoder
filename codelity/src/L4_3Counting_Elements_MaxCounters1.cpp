//url:https://app.codility.com/demo/results/trainingZ99AQB-AKH/
//
// Task Score: 66%
// Correctness: 100%
// Performance: 40%
//Detected time complexity:O(N*M)

// #pragma GCC target("avx2")
// #pragma GCC optimize("O3")
// #pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

//1<= int N,M <=10^5 intN=0
//1<= int a[i] <= N+1  i<M; A non-empty array A of M integers
// vecotr<int> counter[i]
// 1 <=int X <=N 要素なので X-1
// 0 <=int K <A.size() k回目の操作

int maxcounter(vector<int> &A){
	int max=INT_MIN;
	int Asize=A.size();
	rep(i,Asize){
		if(max<A[i]) max=A[i];
	}
	rep(i,Asize){
		A[i]=max;
	}
	return max;
}

void coutvec(vector<int> &A){
	//  rep(i,A.size()) cout << A[i] << " ";
	//  cout << endl;
}

vector<int> solution(int N, vector<int> &A){
	vector<int> counter(N,0);

	int Asize=A.size();

	for(int i=0;i<Asize;i++){
		if(A[i]<=N){
			counter[A[i]-1]++;
			coutvec(counter);
		}else if(A[i]==N+1){
			maxcounter(counter);
			coutvec(counter);
		}else{
			cout << "error" << endl;
		}
	}
	coutvec(counter);
	return counter;
}

//1<= int N,M <=10^5 intN=0
//1<= int a[i] <= N+1  i<M; A non-empty array A of M integers
// vecotr<int> counter[i]
// 1 <=int X <=N 要素なので X-1
// 0 <=int K <A.size() k回目の操作

int main(){
	// //test maxcounter
	// vector<int> B={1,3,1,4,2,3,5,4};
	// cout << maxcounter(B) << endl;
	// rep(i,B.size()) cout << B[i] << " ";
	// cout << endl;

	//test solution
	vector<int> B={3,4,4,6,1,4,4};
	solution(5,B);

	vector<int> c={3,4,4,6,1,4,4};
	solution(5,c);

	// cout << solution(5,B) << endl;
	// vector<int> c={1,3,1,4,2,3,4};
	// cout << solution(5,c) << endl;
	return 0;
}

// An array A consisting of N different integers is given. The array contains integers in the range [1..(N + 1)], which means that exactly one element is missing.
// Your goal is to find that missing element.
// Write a function:
// class Solution { public int solution(int[] A); }
// that, given an array A, returns the value of the missing element.
// For example, given array A such that:
//   A[0] = 2
//   A[1] = 3
//   A[2] = 1
//   A[3] = 5
// the function should return 4, as it is the missing element.
// Write an efficient algorithm for the following assumptions:
// N is an integer within the range [0..100,000];
// the elements of A are all distinct;
// each element of array A is an integer within the range [1..(N + 1)].
#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

// Task Score: 100%
// Correctness: 100%
// Performance: 100%
// Detected time complexity: O(N) or O(N * log(N))

// 0 < N < 10^5
// 1<a[i]<N+1
// Aの要素は異なる

int solution(vector<int> &A) {
	sort(A.begin(),A.end());
	for (int i=0;i<A.size();i++){
		if((i+1)==A[i]){
			//cout << i << endl;
			}
		else return i+1;
	}
	return A.size()+1;//暗黙の仕様として、配列が欠けていなかった場合、サイズ+1を出力する
}

int main(){
	vector<int> A(4);
	A[0] = 2;
	A[1] = 3;
	A[2] = 1;
	A[3] = 5;
	cout << solution(A) << endl;
	vector<int> B={5,3,2,1,4,6,7};
	cout << solution(B) << endl;
	vector<int> c={1};
	cout << solution(c) << endl;//expect null
	vector<int> d={};
	cout << solution(d) << endl;//expect null
	return 0;
}

// https://app.codility.com/programmers/lessons/3-time_complexity/perm_missing_elem/
//
// Task Score: 100%
// Correctness: 100%
// Performance: 100%
// Detected time complexity: O(N) or O(N * log(N))
//
// int solution(vector<int> &A) {

//     // N is size of the array
//     unsigned long long int N = A.size();
//     unsigned long long int sum = 0;

//     for (unsigned int i=0; i<N; i++) {
//         sum += A[i];
//     }

//     // Test the missing element could be 1 or N+1
//     double answer = (N+1)*(N+2)/2 - sum;

//     return answer;
// }

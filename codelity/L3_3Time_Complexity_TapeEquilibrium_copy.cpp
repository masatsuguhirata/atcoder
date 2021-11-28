#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;


//A[i]の範囲がマイナスを含むため、「sumを分割してその前後のP1,P2の2点においてのmindifを求める」は全体最小値にはならない可能性があるためNG。本スクリプトの回答は間違いである。

int solution(vector<int> &A) {
	ll sum = 0;
	ll ans;

	for(int i = 0;i<A.size();i++){
		sum+=A[i];
	}

	ll sumofarray=sum;
	double tmp=sum/2.0;
	ll p1,p2;
	ll tmp1,tmp2;
	tmp1=floor(tmp);
	tmp2=ceil(tmp);
	ll defference,mindefference=10000;

	sum=0;

	for(int i = 0;i<A.size();i++){
		sum+=A[i];

		if (i==p1 || i==p2){
		 	defference=abs(sumofarray-2*sum);
			if (defference < mindefference){
				mindefference = defference;
			}
		}
		return mindefference;
		// if(sum >= tmp){
		// 	defference=abs(sumofarray-2*sum);
		// }
	}
}

int main(){
	vector<int> B={3,1,2,4,3};
	//vector<int> B={3,1,2,4,4,7,9};
	cout << solution(B) << endl;
	return 0;
}


// // https://app.codility.com/programmers/lessons/3-time_complexity/tape_equilibrium/
// //
// // Task Score: 100%
// // Correctness: 100%
// // Performance: 100%
// // Detected time complexity: O(N)
// //
// #include <limits>
// #include <cmath>

// int solution(vector<int> &A) {
//     vector<long long> sums;
//     unsigned int N = A.size();

//     long long sum = 0;
//     // generate all of the possible sums
//     for (unsigned int i=0; i<N; i++) {
//       sum += A[i];
//       sums.push_back(sum);
//     }

//     // figure out which difference is the smallest
//     long long minDiff = std::numeric_limits<long long>::max();

//     // Can't do the entire array, have to stop at one less than the max
//     for (unsigned int i=0; i<(N-1); i++) {
//         // Simplifying this:
//         // sums[i] - (sums[i] - sum) = 2*sums[i]-sum;

//         long long diff = abs( 2*sums[i] - sum );
//         if ( diff < minDiff ) {
//             minDiff = diff;
//         }

//     }

//     return minDiff;
// }

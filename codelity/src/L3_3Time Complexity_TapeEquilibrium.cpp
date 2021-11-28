#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

// #include <limits>
// #include <cmath>

int solution(vector<int> &A) {
    vector<long long> sums;
    unsigned int N = A.size();

    long long sum = 0;
    // generate all of the possible sums
    for (unsigned int i=0; i<N; i++) {
      sum += A[i];
      sums.push_back(sum);
    }

    // figure out which difference is the smallest
    //long long minDiff;
    long long minDiff = std::numeric_limits<long long>::max();//mindiffを可能な限りでかい値をいれておく

    // Can't do the entire array, have to stop at one less than the max
    for (unsigned int i=0; i<(N-1); i++) {
        // Simplifying this:
        // sums[i] - (sums[i] - sum) = 2*sums[i]-sum;

        long long diff = abs( 2*sums[i] - sum );
        if ( diff < minDiff ) {
            minDiff = diff;
        }

    }

    return minDiff;
}






int main(){
	vector<int> B={9,3,9,3,9,7,9};
	assert(B[1]==3);
	assert(B[2]==3);
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

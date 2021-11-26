// A small frog wants to get to the other side of the road. The frog is currently located at position X and wants to get to a position greater than or equal to Y. The small frog always jumps a fixed distance, D.
// Count the minimal number of jumps that the small frog must perform to reach its target.
// Write a function:
// class Solution { public int solution(int X, int Y, int D); }
// that, given three integers X, Y and D, returns the minimal number of jumps from position X to a position equal to or greater than Y.
// For example, given:
//   X = 10
//   Y = 85
//   D = 30
// the function should return 3, because the frog will be positioned as follows:
// after the first jump, at position 10 + 30 = 40
// after the second jump, at position 10 + 30 + 30 = 70
// after the third jump, at position 10 + 30 + 30 + 30 = 100
// Write an efficient algorithm for the following assumptions:
// X, Y and D are integers within the range [1..1,000,000,000];
// X ≤ Y.
#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int solution(int X, int Y, int D){
	int ans;

	int tmp=Y-X;
	ans= ceil((double)tmp/(double)D);

	return ans;
}

int main(){
	int X = 10;
	int Y = 85;
	int D = 30;
	cout << solution(X,Y,D) << endl;
	cout << solution(10,50,20) << endl;
	return 0;
}

// // https://app.codility.com/programmers/lessons/3-time_complexity/frog_jmp/
// //
// // Task Score: 100%
// // Correctness: 100%
// // Performance: 100%
// // Detected time complexity: O(1)
// //
// #include <math.h>

// int solution(int X, int Y, int D) {
//     // Very simple solution, just make sure to not get caught by
//     // quantization
//     double numJumps = (( (double)Y)-( (double) X) )/ ((double)D);
//     return ( ceil(numJumps) );
// }

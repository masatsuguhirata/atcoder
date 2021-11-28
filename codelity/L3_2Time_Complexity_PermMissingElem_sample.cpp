// https://app.codility.com/programmers/lessons/3-time_complexity/perm_missing_elem/
//
// Task Score: 100%
// Correctness: 100%
// Performance: 100%
// Detected time complexity: O(N) or O(N * log(N))
//o
#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

//

int solution(vector<int> &A) {

    // N is size of the array
    unsigned long long int N = A.size();
    unsigned long long int sum = 0;

    for (unsigned int i=0; i<N; i++) {
        sum += A[i];
    }

    // Test the missing element could be 1 or N+1
    double answer = (N+1)*(N+2)/2 - sum;

    return answer;
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

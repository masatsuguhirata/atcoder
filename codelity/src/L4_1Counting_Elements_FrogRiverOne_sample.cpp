#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

#include <vector>

int solution(int X, vector<int> &A) {
    unsigned int N = A.size();

    // Create a vector of size N initialized to 0, we are done when
    // we have set X elements
    std::vector<char> track(N, 0);
    int numElements = 0;

    for (unsigned int i=0; i<N; i++) {
        if ( !track[A[i]-1] ) {
            numElements++;
            track[A[i]-1] = 1;
        } else {
        }
        if (numElements == X) {
            return i;
        }
    }

    // Didn't find anything
    return -1;
}

int main(){
	vector<int> B={1,3,1,4,2,3,5,4};//case1
	cout << solution(5,B) << endl;
	vector<int> c={1,3,1,4,2,3,4};//case2 例外
	cout << solution(5,c) << endl;
	return 0;
}


//ref

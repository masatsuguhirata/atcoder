// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

void dump(vector<int>& v)
{
				for(int i=0;i<v.size();i++){
                cout << v[i] << " ";
        }
				cout << endl;
}

int solution(vector<int> &A) {
	sort(A.begin(),A.end());
	int ans=-1;
	// dump (A);

	for(int i=0;i<A.size();i++){
		if(A[i]==A[i+1])
			i++;
		else{
			ans=A[i];
			break;
		}
	}
	return ans;

}

int main(){
	vector<int> A={2,2,5,3,3};
	cout << solution(A) << endl;
	vector<int> B={9,3,9,3,9,7,9};
	cout << solution(B) << endl;
	return 0;
}


//ref:https://www.javadrive.jp/cstart/ope/index6.html
//bit xor
// 0000000000001011  = 11
// 0000000000001110  = 14
// ----------------
// 0000000000000101  = 5

// A non-empty array A consisting of N integers is given. The array contains an odd number of elements, and each element of the array can be paired with another element that has the same value, except for one element that is left unpaired.

// For example, in array A such that:

//   A[0] = 9  A[1] = 3  A[2] = 9
//   A[3] = 3  A[4] = 9  A[5] = 7
//   A[6] = 9
// the elements at indexes 0 and 2 have value 9,
// the elements at indexes 1 and 3 have value 3,
// the elements at indexes 4 and 6 have value 9,
// the element at index 5 has value 7 and is unpaired.
// Write a function:

// int solution(vector<int> &A);

// that, given an array A consisting of N integers fulfilling the above conditions, returns the value of the unpaired element.

// For example, given array A such that:

//   A[0] = 9  A[1] = 3  A[2] = 9
//   A[3] = 3  A[4] = 9  A[5] = 7
//   A[6] = 9
// the function should return 7, as explained in the example above.

// Write an efficient algorithm for the following assumptions:

// N is an odd integer within the range [1..1,000,000];
// each element of array A is an integer within the range [1..1,000,000,000];
// all but one of the values in A occur an even number of times.
// Copyright 2009–2021 by Codility Limited. All Rights Reserved. Unauthorized copying, publicatio
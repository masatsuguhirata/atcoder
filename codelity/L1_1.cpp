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

#include <vector>


//int solution(int N) {
int main() {
		int N;
		cin >> N;
    vector<int> v;

    while(N>0){
        v.push_back(N%2);
        N=N/2;
    }

    int b=0,maxb=0;
    for(int i = v.size()-1;i>=0;i--){
        if(v[i]==0){
            b++;
        }else if(v[i]==1){
            maxb=max(maxb,b);
            b=0;
        }
        cout << maxb << endl;
    }
        return maxb;



}

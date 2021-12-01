//回答url:
//
// Task Score: 100%
// Correctness: 100%
// Performance: 100%
//Detected time complexity:

// #pragma GCC target("avx2")
// #pragma GCC optimize("O3")
// #pragma GCC optimize("unroll-loops")
#define _GLIBCXX_DEBUG//配列外参照のデバッグ用

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;


#include <algorithm>

int solution(vector<int> &v) {

    const int v_size = v.size();
    if(v_size < 3)
		return 0;
	std::sort(v.begin(), v.end());
    for (auto i = 2; i < v_size; ++i) {
        if (v[i - 2] > v[i] - v[i - 1]) {// 短＋中＞長が一番厳しい条件.これを満たせば他のケースも満たす。※intの上限ケア
            return 1;
        }
    }
    return 0;
}

int main(){
	{vector<int> B={10,2,5,1,8,20};
	cout << solution(B) << endl;}
	{vector<int> B={10,50,5,1};
	cout << solution(B) << endl;}
	return 0;
}


//問題文

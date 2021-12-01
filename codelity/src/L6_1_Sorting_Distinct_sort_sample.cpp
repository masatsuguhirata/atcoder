//url https://app.codility.com/c/close/trainingWSMAM6-X7H/?final_task_completed=1
//sortでもtimeout errorなく通った
#define _GLIBCXX_DEBUG//配列外参照のデバッグ用

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

#include<algorithm>

int solution(vector<int> &A) {

	if(A.empty()) return 0;
	sort(A.begin(),A.end());
	int ans=1;
	// rep(i,A.size()){
	for (int i=1; i<A.size(); ++i){
		if(A[i] != A[i-1]) ans++;
	}
    return ans;
}

// #include <unordered_set.h>

// int solution2(vector<int> &v) {
//     return std::unordered_set<int>(v.begin(), v.end()).size();
// }

int main(){
	vector<int> B={2,1,1,2,3,1};
	cout << solution(B) << endl;
	vector<int> c={-1'000'000,1,1,0,3,1'000'000};
	cout << solution(c) << endl;
	return 0;
}

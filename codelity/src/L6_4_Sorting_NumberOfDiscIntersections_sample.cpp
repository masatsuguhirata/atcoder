//回答url:https://app.codility.com/demo/results/trainingYNCQCN-85N/
//
// Task Score: 100%
// Correctness: 100%
// Performance: 100%
//Detected time complexity:O(N*log(N)) or O(N)

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

//Ndisk 0 to N-1 0<= int N <= 10^5
//0<= int A[0..N-1] <= INT_MAX / radiuses
	//J-th disc の中心点は(j,0) / A[J]

//参考：http://codility-lessons-jp.blogspot.com/2015/02/lesson-4-numberofdiscintersections.html
//上記記述の、生存者区間＋ソートで検討はしたが、ペアを取る考え方しか思い浮かばずオーダーを下げることができなかった。
//currentActiveを用いることで、計算量をO(N/2)だけ減らす。
//※補足：あまり使い先の思いつかない、有用でないアルゴリズムらしい。
#include <alloca.h>

int compare(const void* a, const void *b)
{
    long long l = *((long long*)a);
    long long r = *((long long*)b);

    if (l == r){
        return 0;
    }

    return l < r ? -1 : 1;
}

//int solution(int A[], int N) {
int solution(vector<int> &A){
		int N=A.size();
    int memsize = sizeof(long long) * N;
    long long* activate = (long long*)alloca(memsize);
    long long* deactivate = (long long*)alloca(memsize);

    long long i = 0;
    for (   ; i < N; i++){
        activate[i] = i - A[i];//radius左端
        deactivate[i] = i + A[i];//radius右端
    }

    qsort(activate, N, sizeof(long long), compare);
    qsort(deactivate, N, sizeof(long long), compare);

    long long total = 0;

    long long currentActive = 0;
    long long activatedIndex = 0;
    long long deactivatedIndex = 0;

    for (i = 0; i < N; i++){

				//現時点で最小の右端に対して、右端以下の値となる左端の数をカウントしていく。
				//左端の数の方が大きくなる、または配列上限の場合に終了
				//currentActive（現時点での右端より小さい左端の数）を記憶させておくことで、ペア総当たりのカウントを回避してオーダーを下げる仕組み
        while (activate[activatedIndex] <= deactivate[deactivatedIndex] &&
               activatedIndex < N){
            activatedIndex++;
            currentActive++;
        }

        currentActive--;//自分の区間のカウントだけはしないため、-1する。
        total += currentActive;
        if (total > 10000000){
            return -1;
        }
        deactivatedIndex++;
    }

    return total;
}




int main(){
	vector<int> B={1,5,2,1,4,0};
	cout << solution(B) << endl;
	return 0;
}


//問題文

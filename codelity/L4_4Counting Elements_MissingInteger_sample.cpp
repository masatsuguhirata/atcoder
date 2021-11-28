//url:
//
// Task Score: 100%
// Correctness: 100%
// Performance: 100%
//Detected time complexity:O(N) or O(N * log(N))
//ソートを使うより、sample側のカウンタを利用した方がすっきりしていて楽

int solution(vector<int> &A) {

    vector<bool> c(1'000'000 + 1, false);
    for(int i : A) {
        if(i>0)
            c[i] = true;
    }
    for(int i=1; i<=1'000'000; i++)
        if(c[i] == false)
            return i;
    return 1;
}

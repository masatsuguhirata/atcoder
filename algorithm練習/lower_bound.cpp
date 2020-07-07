#include <iostream>
#include <algorithm>
using namespace std;

//a[l] から a[r-1] までの中で初めて x 以上となるようなインデックスを返します
//2分探索できる？

//5
//5 4 3 2 1
//3
//0番目のアドレスが返される

//5
//1 2 3 4 5
//3
//2番目のアドレスが返される

int main() {
    // 例 1: a[i] < x となるような i が何個あるのかを O(log N) で計算する
    int N, a[100009];
    cin >> N;
    for (int i = 0; i < N; i++) cin >> a[i];
    //sort(a, a + N);

    int x;
    cin >> x;
    cout << lower_bound(a, a + N, x) - a << endl;
    cout << lower_bound(a, a + N, x) << " " << a << endl;
    return 0;
}

//https://qiita.com/drken/items/7c6ff2aa4d8fce1c9361#6-bit-%E5%85%A8%E6%8E%A2%E7%B4%A2
//https://drken1215.hatenablog.com/entry/2019/12/14/171657
#include <iostream>
#include <vector>
using namespace std;
#include <bitset>

int main() {

    int A = 0x2d;
    int B = 0x19;
    cout << A << " AND " << B << " = " << (A&B) << endl;
    cout << bitset<8>(A) << " AND " << bitset<8>(B) << " = " << bitset<8>(A&B) << endl;

    int n = 3;

    // {0, 1, ..., n-1} の部分集合の全探索
    for (int bit = 0; bit < (1<<n); ++bit) {
        vector<int> S;
        for (int i = 0; i < n; ++i) {
            if (bit & (1<<i)) { // 列挙に i が含まれるか
                S.push_back(i);
            }
        }

        cout << bit << ": {";
        for (int i = 0; i < (int)S.size(); ++i) {
            cout << S[i] << " ";
        }
        cout << "}" << endl;
    }
}

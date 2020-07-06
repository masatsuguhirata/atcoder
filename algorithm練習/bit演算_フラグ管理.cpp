//https://qiita.com/drken/items/7c6ff2aa4d8fce1c9361#3-%E3%83%93%E3%83%83%E3%83%88%E6%BC%94%E7%AE%97%E3%82%92%E7%94%A8%E3%81%84%E3%81%9F%E3%83%95%E3%83%A9%E3%82%B0%E7%AE%A1%E7%90%86

#include <iostream>
#include <bitset>
using namespace std;


const unsigned int BIT_FLAG_0 = (1 << 0); // 0000 0000 0000 0001
const unsigned int BIT_FLAG_1 = (1 << 1); // 0000 0000 0000 0010
const unsigned int BIT_FLAG_2 = (1 << 2); // 0000 0000 0000 0100
const unsigned int BIT_FLAG_3 = (1 << 3); // 0000 0000 0000 1000
const unsigned int BIT_FLAG_4 = (1 << 4); // 0000 0000 0001 0000
const unsigned int BIT_FLAG_5 = (1 << 5); // 0000 0000 0010 0000
const unsigned int BIT_FLAG_6 = (1 << 6); // 0000 0000 0100 0000
const unsigned int BIT_FLAG_7 = (1 << 7); // 0000 0000 1000 0000

int main() {
    // {1, 3, 5} にフラグの立ったビット
    unsigned int bit = BIT_FLAG_1 | BIT_FLAG_3 | BIT_FLAG_5;
    cout << "{1, 3, 5} = " << bitset<8>(bit) << endl;

    // ビット {1, 3, 5} について、3 番目のフラグが立っていること
    if (bit & BIT_FLAG_3) {
        cout << "3 is in     " << bitset<8>(bit) << endl;
    }

    // ビット {1, 3, 5} について、0 番目のフラグが立っていないこと
    int test = (bit+1) & BIT_FLAG_0;
    if (!(test)) {
    //if (!(bit & BIT_FLAG_0)) {
        cout << "0 is not in " << bitset<8>(bit) << endl;
    }

    // 新たなビット
    unsigned int bit2 = BIT_FLAG_0 | BIT_FLAG_3 | BIT_FLAG_4; // {0, 3, 4}
    cout << bitset<8>(bit) << " AND " << bitset<8>(bit2) << " = " << bitset<8>(bit & bit2) << endl; // {1, 3, 5} AND {0, 3, 4} = {3}
    cout << bitset<8>(bit) << " OR  " << bitset<8>(bit2) << " = " << bitset<8>(bit | bit2) << endl; // {1, 3, 5} OR {0, 3, 4} = {0, 1, 3, 4, 5}

    // bit に 6 番目のフラグを立てる
    cout << "before: " << bitset<8>(bit) << endl;
    bit |= BIT_FLAG_6;
    cout << "after : " << bitset<8>(bit) << " (6 included)" << endl;

		// チルダによる反転
		int test2;
		test2 = BIT_FLAG_3;
    cout << "test2: " << bitset<8>(test2) << endl;
		test2 = ~BIT_FLAG_3;
    cout << "test2: " << bitset<8>(test2) << endl;

    // bit2 から 3 番目のフラグを消す
    cout << "before: " << bitset<8>(bit2) << endl;
    bit2 &= ~BIT_FLAG_3;
    cout << "after : " << bitset<8>(bit2) << " (3 excluded)" << endl;

    return 0;
}

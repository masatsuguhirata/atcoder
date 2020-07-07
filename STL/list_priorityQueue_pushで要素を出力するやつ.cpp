//多くのpriority_queue実装は、
//実は真面目にソートせずヒープで済ませることで処理時間を抑えています。
//
//ひとつづつ取り出すことしかできないので、
//「その時点でいちばん大きい(小さい)ひとつだけが特定できればいい」
//ので、真面目にソートせんでもいいのです。

#include <iostream>
#include <queue>
#include <vector>
#include <functional>
using namespace std;

template <class _Ty, class _Container = vector<_Ty>, class _Pr = less<typename _Container::value_type>>
class my_priority_queue : public std::priority_queue<_Ty, _Container, _Pr> {
public:
  const _Container& guts() const {
    return this->c; // コレがハラワタ。protectedメンバなので導出クラスなら晒せる。
  }
};

// ハラワタをプリントする
template<typename C>
void print(const C& cont) {
  for ( const auto& item : cont ) {
    std::cout << item << ' ';
  }
  std::cout << std::endl;
}

int main() {
    // 例 1: Q に色々な操作を行う（x1 = 116, x2 = 110, x3 = 122, x4 = 2 となります）
    my_priority_queue<int, vector<int>, greater<int>> Q;
    Q.push(116); // この時点で、小さい順に {116}
    Q.push(145); // この時点で、小さい順に {116, 145}
    Q.push(122); // この時点で、小さい順に {116, 122, 145}
    print(Q.guts());
    int x1 = Q.top();
    Q.push(110); // この時点で、小さい順に {110, 116, 122, 145}
    int x2 = Q.top();
    print(Q.guts());
    Q.pop(); // この時点で、小さい順に {116, 122, 145}
    Q.pop(); // この時点で、小さい順に {122, 145}
    int x3 = Q.top();
    int x4 = Q.size();
    cout << "---------------\n";
    cout << x1 << " " << x2 << " " << x3 << " " << x4 << endl;
    return 0;
}

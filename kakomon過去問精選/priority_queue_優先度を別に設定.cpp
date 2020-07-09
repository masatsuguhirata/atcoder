#include <iostream>
#include <queue>

struct priority_compare {
  bool operator()(int x, int y) const {
    return x % 10 < y % 10;
  }
};

int main() {
  std::priority_queue<int,std::vector<int>,priority_compare> Q;

  // 10, 11, 12, ... 49 を Qに投げ込む
  for ( int i = 10; i < 50; ++i ) {
		Q.push(i);
		std::cout << endl;
	}
  // 優先度の高いものから取り出す
  while ( !Q.empty() ) {
    std::cout << Q.top() << ' ';
    Q.pop();
  }
}

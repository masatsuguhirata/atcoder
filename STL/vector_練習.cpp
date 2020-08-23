//https://cpprefjp.github.io/reference/set/set.html
//https://cpprefjp.github.io/reference/tuple.html

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
using T = pair<int, int>;

int main() {

	set<P> s;//重複を許さない順序付き集合

  int n = 10;
  vector<pair<int, int> > pairs(n);

  for (int i = 0; i < n; i++)
    pairs[i] = make_pair(i*i % 10, i);

  // firstが小さい順、secondが小さい順にソート
  sort(pairs.begin(), pairs.end());

  for (int i = 0; i < n; i++) {
    printf("(%d,%d) ", pairs[i].first, pairs[i].second);
  }
  puts(""); // => (0,0) (1,1) (1,9) (4,2) (4,8) (5,5) (6,4) (6,6) (9,3) (9,7)

  return 0;
}

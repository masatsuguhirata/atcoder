#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  rep(i,n) cin >> a[i];
  int l = 0, r = 1e9;

  while (r-l > 1) {
    int x = (l+r)/2;
    auto f = [&](int x) {
      ll now = 0;
      rep(i,n) now += (a[i]-1)/x;
      return now <= k;
    };
    if (f(x)) r = x; else l = x;
  }

  cout << r << endl;
  return 0;
}

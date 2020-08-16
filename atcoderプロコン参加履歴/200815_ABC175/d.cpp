//https://atcoder.jp/contests/abc175/submissions/15945829 からコピー

#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> p(n), c(n);
  rep(i,n) cin >> p[i];
  rep(i,n) cin >> c[i];
  rep(i,n) p[i]--;
  ll ans = -1e18;
  rep(si,n) {//開始位置si
    int x = si;
    vector<int> s;
    ll tot = 0;//tot : 周期の得点総和
    while (1) {//グラフの形成
      x = p[x];
      s.push_back(c[x]);//s[i] : 得点のリスト
      tot += c[x];//tot : 1周期でポイントが正になるか負になるか確認用
      if (x == si) break;//開始位置になった時、周期ができている
    }
    int l = s.size();//周期の長さ l
    ll t = 0;
    rep(i,l) {
      t += s[i];//s[i] : 得点のリスト
      ll now = t;//now : 地点i での得点の総和
      if (i+1 > k) break;//周期がない場合
      else if (tot > 0) {//周期があり、周期を回すことで得点が更に加算できる場合
        ll e = (k-(i+1))/l;//周期を回せる回数 e : k回加算できる -  (i-1)回しか移動しない.※一回移動して初めて得点するので-1回
        now += tot*e;
      }
      ans = max(ans, now);
    }
  }
  cout << ans << endl;
  return 0;
}

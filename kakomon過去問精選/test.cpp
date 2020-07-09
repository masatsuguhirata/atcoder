#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int h, w;
  cin >> h >> w;

  string G[h];
  for (int i = 0; i < h; i++) printf("%p \n",&G[i]);
  for (int i = 0; i < h; i++) cin >> G[i];
	cout << endl;
  for (int i = 0; i < h; i++) printf("%p \n",&G[i]);


  //for (int i = 0; i < h; i++) cin >> G[i];

  //入力の生成
  srand(time(NULL));
  for(int y = 0; y < h; ++y) {
    for(int x = 0; x < w; ++x) {
            if(rand()%10==0) G[x][y]='.';
            else G[x][y]='#';
    }
  }
    cout << endl;
    rep(i,h){
        rep(j,w) {cout << G[i][j];}
        cout << endl;
    }
}

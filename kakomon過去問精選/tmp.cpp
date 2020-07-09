#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
// 上下左右を表すための配列
const int dx[4]={1,0,-1,0};
const int dy[4]={0,1,0,-1};
const int HMAX=50;
const int WMAX=50;

int main() {
  int h, w; cin >> h >> w;
  char s[WMAX][HMAX];

	srand(time(NULL));
  for(int y = 0; y < h; ++y) {
    for(int x = 0; x < w; ++x) {
			if(rand()%10==0) s[x][y]='.';
			else s[x][y]='#';
    }
  }
	cout << endl;
	rep(i,h){
		rep(j,w) {cout << s[i][j];}
		cout << endl;
	}

  for(int y = 0; y < h; ++y) {
    for(int x = 0; x < w; ++x) {
      if(s[x][y] == '#') {
        int cnt = 0;
        for(int i = 0; i < 4; ++i) {
					if(x+dx[i] < 0 || x+dx[i] >=w) continue;
					if(x+dx[i] < 0 || x+dx[i] >=w) continue;
          if(s[x+dx[i]][y+dy[i]] == '#') cnt++;
        }
        if(cnt == 0) {
          cout << "No" << endl;
          return 0;
        }
      }
    }
  }
  cout << "Yes" << endl;

  return 0;
}

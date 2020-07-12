#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

//#include <iostream>
//#include <string>
//using namespace std;

int main()
{
	int h, w, k;
	cin >> h >> w >> k;
	vector<string> s(h);

	rep(i, h) cin >> s[i];

	cout << endl;
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			cout << s[i][j];
		}
		cout << endl;
	}
	int ans=0;

	rep(is, 1 << h){
		rep(js, 1 << w)
		{
			int cnt = 0;
			rep(i,h){
				rep(j,w){
					if ((is >> i) & 1) continue;
					if ((js >> j) & 1) continue;
					if (s[i][j]=='#') cnt++;
				}
			}
			if (cnt == k) ans++;
		}
	}
	cout << ans << endl;
	return 0;
}

/*
int main()
{
	int H, W, K;
	cin >> H >> W >> K;
	char s[6][6];

	for (int i = 0; i < H; i++)
	{
		for (int j = 0; j < W; j++)
		{
			cin >> s[i][j];
		}
	}

	cout << endl;
	for (int i = 0; i < H; i++)
	{
		for (int j = 0; j < W; j++)
		{
			cout << s[i][j];
		}
		cout << endl;
	}
}
*/

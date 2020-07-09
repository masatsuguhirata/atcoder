//https://abc065.contest.atcoder.jp/tasks/abc065_b
//ロジックの詳細は別ファイル（画像）参照
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

/*
こちらの方が、ごり押しだけどシンプルだった。
https://www.hamayanhamayan.com/entry/2017/06/25/013715

int N, A[101010];
void _main() {
    cin >> N;
    rep(i, 1, N + 1) cin >> A[i];

    int cur = 1;
    rep(i, 0, 101010) {
        cur = A[cur];
        if (cur == 2) {
            printf("%d\n", i + 1);
            return;
        }
    }
    printf("-1\n");
}
*/

int main(){
	int n;
	cin >> n;
	int a[n+1];
	rep(i,n) cin >> a[i];

	int ans=0;
	int key=2;

	int cnt=0;
	int roopcnt=0;
	while(!(key == 1) && !(ans == -1) && (roopcnt <= n)){
		rep(i,n) {
			if (a[i]==key){
				key=i;
				if(a[key] == key) ans = -1;
				cnt++;
				break;
			}
			else{
				continue;
				//cout << key << " " << i << "ヒットしない" << endl;
			}
		}
		roopcnt++;
	}
	if(roopcnt > n) ans = -1; //N回以上ループしていた場合には、解無し

	cout << endl;
	if (ans == -1) cout << ans << endl;
	else cout << cnt << endl;
}

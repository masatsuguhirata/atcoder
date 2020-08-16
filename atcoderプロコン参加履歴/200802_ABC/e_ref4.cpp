#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for (ll i = 0; i < n; i++)
#define REPR(i, n) for (ll i = n; i >= 0; i--)
#define FOR(i, m, n) for (ll i = m; i < n; i++)
#define FORR(i, m, n) for (ll i = m; i >= n; i--)
#define REPO(i, n) for (ll i = 1; i <= n; i++)
#define ll long long
#define INF (ll)1 << 60
#define MINF (-1 * INF)
#define ALL(n) n.begin(), n.end()
#define MOD 1000000007
#define P pair<ll, ll>

ll n, k;
vector<double> s;

bool solve(double index, double key) { //条件判定
    ll cnt = 0;
    REP(i, n){
        cnt += ceil(s[i] / index) - 1;
    }
    if (cnt <= k) return true; //ここに条件を入れる
    else return false;
}

double nibutan(ll key = 0) { //ちゃろー！

    double ng = 0; //最大値ならs.size()
    double ok = 1e11; // 最大値なら0

    REP(i, 300) {
        double mid = (ok + ng) / 2;

        if (solve(mid, key)) ok = mid;
        else ng = mid;
    }
    return ok; //満たさない最大ならng
}
int main() {
    cin >> n >> k;
    s.resize(n);
    REP(i, n){
        cin >> s[i];
    }
    //cout << nibutan() << endl;
    cout << (ll)ceil(nibutan()) << endl;
}

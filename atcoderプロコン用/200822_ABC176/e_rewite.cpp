//#pragma GCC target("avx2")
//#pragma GCC optimize("O3")
//#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;


int main() {
	int ans=0;

	int h,w,m;
	cin >> h>> w>>m;

	//vectorの配列定義は（）かっこで、実際に使う時は[]括弧のようだ
	vector<int> ctnx(h),ctny(w);//各行・各列にある爆弾の数
	//vector<int> ctnx,ctny;//要素数を定義しないとセグフォが起きる(NG)
  set<P> bomb;//各爆弾の座標

	int tmpx,tmpy;
	rep(i,m){
		cin >> tmpx >> tmpy;//配列要素数にも使うため、一旦変数として受け取る必要がある。
		--tmpx;--tmpy;
		ctnx[tmpx]+=1;
		ctny[tmpy]+=1;
    bomb.emplace(tmpx,tmpy);
	}

	//各行・列ごとに爆弾の最大個数を探す
	int max_ctnx=-1;
	int max_ctny=-1;
	rep(i,h){
		if(max_ctnx < ctnx[i]) max_ctnx=ctnx[i];
	}
	rep(i,w){
		if(max_ctny < ctny[i]) max_ctny=ctny[i];
	}

	//爆弾の最大個数と一致する、行・列を抽出
	vector<int> max_bombx,max_bomby;//要素数の最大は爆弾の個数M
	rep(i,h){
		if(max_ctnx == ctnx[i]) max_bombx.push_back(i);
	}
	rep(i,w){
		if(max_ctny == ctny[i]) max_bomby.push_back(i);
	}

	//行・列のうち、爆弾のない所が見つかればansは、max_ctnx+max_ctny個、そうでなければ1個を減らす
	ans = max_ctnx+max_ctny;
	rep(i,max_bombx.size())
		rep(j,max_bomby.size()){
			//cout << "i,j	" << i << ",	" << j <<endl;
			tmpx=max_bombx[i];
			tmpy=max_bomby[j];

			for(int k=0;k<bomb.size();k++){
				//if(bomb.first==tmpx) cout << "a";
			}
			if(bomb.count(P(tmpx,tmpy))) continue;
			cout << ans << endl;
			return 0;

	}

	//for (int i : max_bombx) for (int j : max_bomby) {//iはmaxbombxの要素を試す。
	//		cout << "i,j	" << i << ",	" << j <<endl;
	//		if(bomb.count(P(i,j))) continue;
	//		cout << ans << endl;
	//		return 0;
	//}

  --ans;
	//cout << "hoge:" <<ans << endl;
	cout <<ans << endl;
	return 0;
}

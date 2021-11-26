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
  int n = 10;
  vector<pair<int, int> > pairs(n);
  for (int i = 0; i < n; i++)
    pairs[i] = make_pair(i*i % 10, i);
  sort(pairs.begin(), pairs.end());

  for (int i = 0; i < n; i++)
    printf("(%d,%d) ", pairs[i].first, pairs[i].second);
  puts(""); // => (0,0) (1,1) (1,9) (4,2) (4,8) (5,5) (6,4) (6,6) (9,3) (9,7)

	//イテレーターの確認 : NG
//	for(auto r:pairs){
//		printf("%d\n",pairs);
//	}
//		printf("%p\n",pairs.begin());

	//count : vectorにある区間の要素の中に,P(1,1)が含まれる数を返す
	cout << count(pairs.begin(),pairs.end(),P(6,4)) << endl;
	cout << count(pairs.begin(),pairs.end(),P(99,4)) << endl;

	//find : vectorにある区間の要素の中に,P(1,1)が含まれる場合は、要素番号を返す.ない場合は、pairs.end()
	auto itr = find(pairs.begin(),pairs.end(),P(6,4));
	cout << (*itr).first << (*itr).second << endl;	printf("%d,%d,\n",(*itr).first,(*itr).second);
	itr = find(pairs.begin(),pairs.end(),P(99,4));	printf("%d,%d,\n",(*itr).first,(*itr).second);
	itr = pairs.end();															printf("%d,%d,\n",(*itr).first,(*itr).second);puts("");

	//size
	cout << pairs.size() << endl;puts("");

	//要素アクセス
	printf("(%d,%d)\n", pairs[1].first, pairs[1].second);
	printf("(%d,%d)\n", pairs.at(1).first, pairs.at(1).second);
	auto test=pairs.front();
	printf("(%d,%d)\n", test.first, test.second);puts("");

	//コンテナ変更
	pairs.push_back(P(5,5));//末尾へ要素追加
	pairs.pop_back();//末尾の要素削除
	pairs.emplace(pairs.begin(), 8, 8);//要素の直接構築による挿入
	pairs.insert(pairs.begin(), P(9,9));//要素の挿入
	pairs.erase(pairs.begin() + 2);//要素の削除
	//asigne　コンテナ代入
	//emplaceback 末尾へ直接構築
	//swap　コンテナ交換
	//clear 要素全削除


  return 0;
}

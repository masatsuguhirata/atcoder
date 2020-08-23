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
	//その値をキーにして、自動的に順序付けする

	set<P> s;//重複を許さない順序付き集合

	//要素自身がキーであり、重複を許さないことの確認
	s.emplace(3,3);
	s.emplace(3,2);
	s.emplace(1,2);
	s.emplace(3,2);//要素が重複するので追加されない
	s.insert(P(4,2));

	//各値を出力させる.要素数+1の箇所が,s.end()のようだ
	//auto itr=s.find(P(1,2));
	auto itr=s.begin();
	cout << typeid(itr).name() << endl;
	for(int i=0;i<=s.size();i++){
		cout << (*itr).first<< "," << (*itr).second <<endl;
		//cout << itr.first<< "," << itr.second <<endl;
		itr++;
	}
	cout << endl;
	for(auto p:s){
		cout << p.first << " " << p.second << endl;
		cout << typeid(p).name() << endl;
	}
	cout << endl;
	//出力	//1,2　//3,2　//3,3　//4,2 //4,0


	//count 指定したキーにマッチする要素の数を返す
	cout << s.count(P(1,2))<<endl;//1
	cout << s.count(P(10,3))<<endl;//0
	cout << s.count(P(4,0))<<endl;//0 s.end()の要素は含まれない
	cout << endl;

	//find 	指定したキーで要素を探す
  auto itr1 = s.find(P(1,2));
	cout << (*itr1).first<< "," << (*itr1).second <<endl;//1,2
  itr1 = s.find(P(20,3));
	cout << (*itr1).first<< "," << (*itr1).second <<endl;//4,0 見つからない場合、end()の未定義っぽい値を返す
	//cout << *(s.find(P(10,3)))<<endl;

	//contains
	//if(s.contains(P(1,2))) cout << "contains" << endl;
	cout << endl;

  std::set<int> se = {1, 2, 3};

  // キー2の要素が含まれているか
 // if (se.contains(2)) {
 //   std::cout << "contain" << std::endl;
 // }


//	//test
//	for(auto itr:s){
//		cout << (*itr).first<< "," << (*itr).second <<endl;
//	}

	return 0;
}

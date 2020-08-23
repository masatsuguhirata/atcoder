//https://cpprefjp.github.io/reference/set/set.html
//https://cpprefjp.github.io/reference/tuple.html

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;

int main() {
	set<T> s;//重複を許さない順序付き集合

	//要素自身がキーであり、重複を許さず、追加するたびにソートされることを確認
	s.insert(T(4,2,5));
	s.emplace(3,3,3);
	s.emplace(3,2,3);
	s.emplace(1,2,1);
	s.emplace(3,2,3);//要素が重複するので追加されない

	//各値を出力させる.要素数+1の箇所が,s.end()のようだ
	//auto itr=s.find(T(1,2));
	auto itr=s.begin();
	for(int i=0;i<=s.size();i++){
		cout << get<0>(*itr) << ","<< get<1>(*itr) << ","<< get<2>(*itr) << endl;
		itr++;
	}
	cout << typeid(itr).name() << endl;
	cout << typeid(*itr).name() << endl;
	cout << endl;
	for(auto &p:s){//&無くても動いた
		cout << get<0>(p) << ","<< get<1>(p) << ","<< get<2>(p) << endl;
		cout << typeid(p).name() << endl;
		cout << typeid(*p).name() << endl;
	}
	cout << endl;
	//出力	//1,2　//3,2　//3,3　//4,2 //4,0


	//count 指定したキーにマッチする要素の数を返す
	cout << s.count(T(1,2,1))<<endl;//1
	cout << s.count(T(10,3,4))<<endl;//0
	cout << s.count(T(4,0,0))<<endl;//0 s.end()の要素は含まれない
	cout << endl;

	//find 	指定したキーで要素を探す
  auto itr1 = s.find(T(1,2,1));
	cout << get<0>(*itr1) << ","<< get<1>(*itr1) << ","<< get<2>(*itr1) << endl;
  itr1 = s.find(T(20,3,4));
	cout << get<0>(*itr1) << ","<< get<1>(*itr1) << ","<< get<2>(*itr1) << endl;
	//cout << *(s.find(T(10,3)))<<endl;

	//contains
	//if(s.contains(T(1,2))) cout << "contains" << endl;
	cout << endl;


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

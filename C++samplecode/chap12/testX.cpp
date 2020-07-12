// 初期化と代入／値渡しと参照渡しの検証
// 代入演算子の引数をconst参照でなく値渡しに変更したもの

#include <iostream>

using namespace std;

//===== 検証用クラス =====//
class Test {
public:
	Test() {							// デフォルトコンストラクタ
		 cout << "初期化：Test()\n";
	}

	Test(const Test& t) {				// コピーコンストラクタ
		cout << "初期化：Test(const Test&)\n";
	}

	Test& operator=(Test t) {			// 代入演算子
		cout << "代　入：Test = Test\n"; return *this;
	}
};

//--- 値渡し ---//
void value(Test a) { }

//--- 参照渡し ---//
void reference(Test& a)  { }

int main()
{
	Test x;		  // デフォルトコンストラクタ
	Test y = x;	  // コピーコンストラクタ
	Test z(x);	  // コピーコンストラクタ
	y = x;		  // 代入演算子
	value(x);	  // 関数呼出し（値渡し）
	reference(x); // 関数呼出し（参照し）
}

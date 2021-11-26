#ifndef ___IntStack
#define ___IntStack

#include <iostream>

//--- 整数スタッククラス ---//
class IntStack {
	int nelem;		// スタックの容量（配列の要素数）
	int* stk;		// 先頭要素へのポインタ
	int ptr;		// スタックポインタ（現在積まれているデータ数）

public:
	//--- 明示的コンストラクタ ---//
	explicit IntStack(int sz) : nelem(sz), ptr(0) { stk = new int[nelem]; }

	IntStack(const IntStack& x) {			  //--- コピーコンストラクタ ---//
		nelem = x.nelem;						// 容量をxと同じにする
		ptr = x.ptr;							// スタックポインタを初期化
		stk = new int[nelem];					// 配列本体を確保
		for (int i = 0; i < nelem; i++)			// 全要素をコピー
			stk[i] = x.stk[i];
	}

	~IntStack() { delete[] stk; }			  //--- デストラクタ ---//

	int size() const { return nelem; }		  //--- 容量を返す ---//

	bool empty() const { return ptr == 0; }	  //--- スタックは空か？ ---//

	IntStack& operator=(const IntStack& x) {  //--- 代入演算子= ---//
		if (&x != this) {						// 代入元が自分自身でなければ…
			if (nelem != x.nelem) {				// 代入前後の要素数が異なれば…
				delete[] stk;					// もともと確保していた領域を解放
				nelem = x.nelem;				// 新しい容量
				ptr = x.ptr;					// 新しいスタックポインタ
				stk = new int[nelem];			// 新たに領域を確保
			}
			for (int i = 0; i < ptr; i++)		// 積まれている要素をコピー
				stk[i] = x.stk[i];
		}
		return *this;
	}

	//--- プッシュ：末尾にデータを積む ---//
	void push(int x) { if (ptr < nelem) stk[ptr++] = x; }

	//--- ポップ：末尾に積まれているデータを取り出す ---//
	int pop() { if (ptr > 0) return stk[--ptr]; }
};

#endif

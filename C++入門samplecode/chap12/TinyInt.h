#ifndef ___TinyInt
#define ___TinyInt

#include <climits>
#include <iostream>

//--- 豆整数クラス ---//
class TinyInt {
	int v;			// 値

public:
	TinyInt(int value = 0) : v(value) { }		//--- コンストラクタ ---//

	operator int() const { return v; }			//--- intへの変換関数  ---//

	bool operator!() const { return v == 0; }	//--- 論理否定演算子! ---//

	TinyInt& operator++() { 		//--- 前置増分演算子++ ---//
		if (v < INT_MAX) v++;			// 値の上限はINT_MAX
		return *this;					// 自分自身への参照を返却
	}

	TinyInt operator++(int) {		//--- 後置増分演算子++ ---//
		TinyInt x = *this;				// インクリメント前の値を保存
		if (v < INT_MAX) v++;			// 値の上限はINT_MAX
		return x;						// 保存していた値を返却
	}

	friend TinyInt operator+(const TinyInt& x, const TinyInt& y) {	// x + y
		return TinyInt(x.v + y.v);
	}

	//--- 複合代入演算子 += ---//
	TinyInt& operator+=(const TinyInt& x) { v += x.v; return *this; }

	friend bool operator==(const TinyInt& x, const TinyInt& y) { return x.v == y.v; }

	friend bool operator!=(const TinyInt& x, const TinyInt& y) { return x.v != y.v; }

	friend bool operator> (const TinyInt& x, const TinyInt& y) { return x.v >  y.v; }

	friend bool operator>=(const TinyInt& x, const TinyInt& y) { return x.v >= y.v; }

	friend bool operator< (const TinyInt& x, const TinyInt& y) { return x.v <  y.v; }

	friend bool operator<=(const TinyInt& x, const TinyInt& y) { return x.v <= y.v; }

	friend std::ostream& operator<<(std::ostream& s, const TinyInt& x) {
		return s << x.v;
	}
};

#endif

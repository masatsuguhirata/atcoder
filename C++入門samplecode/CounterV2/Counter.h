// カウンタクラスCounter（第２版）

#ifndef ___Class_Counter
#define ___Class_Counter

#include <climits>

//===== カウンタクラス =====//
class Counter {
	unsigned cnt;		// カウンタ

public:
	//--- コンストラクタ ---//
	Counter() : cnt(0) { }

	//--- unsigned型への変換関数  ---//
	operator unsigned() const { return cnt; }

	//--- 論理否定演算子! ---//
	bool operator!() const { return cnt == 0; }

	//--- 前置増分演算子++ ---//
	Counter& operator++() {
		if (cnt < UINT_MAX) cnt++;		// カウンタの上限はUINT_MAX
		return *this;					// 自分自身への参照を返却
	}

	//--- 後置増分演算子++ ---//
	Counter operator++(int) {
		Counter x = *this;				// インクリメント前の値を保存
		if (cnt < UINT_MAX) cnt++;		// カウンタの上限はUINT_MAX
		return x;						// 保存していた値を返却
	}

	//--- 前置減分演算子-- ---//
	Counter& operator--() {
		if (cnt > 0) cnt--;				// カウンタの下限は0
		return *this;					// 自分自身への参照を返却
	}

	//--- 後置減分演算子-- ---//
	Counter operator--(int) {
		Counter x = *this;				// デクリメント前の値を保存
		if (cnt > 0) cnt--;				// カウンタの下限は0
		return x;						// 保存していた値を返却
	}
};

#endif

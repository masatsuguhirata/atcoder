// カウンタクラスCounter（第１版）

#ifndef ___Class_Counter
#define ___Class_Counter

#include <climits>

//===== カウンタクラス =====//
class Counter {
	unsigned cnt;		// カウンタ

public:
	// コンストラクタ
	Counter() : cnt(0) { }

	// カウントアップ
	void increment() {
		if (cnt < UINT_MAX) cnt++;		// カウンタの上限はUINT_MAX
	}

	// カウントダウン
	void decrement() {
		if (cnt > 0) cnt--;				// カウンタの下限は0
	}

	// カウンタを返却
	unsigned value() {					// cntのゲッタ
		return cnt;
	}
};

#endif

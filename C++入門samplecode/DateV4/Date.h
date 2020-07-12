// 日付クラスDate（第４版：ヘッダ部）

#ifndef ___Class_Date
#define ___Class_Date

#include <string>
#include <iostream>

//===== 日付クラス =====//
class Date {
	int y;	// 西暦年
	int m;	// 月
	int d;	// 日
	static int dmax[];
	static int day_of_month(int y, int m);		// y年m月の日数

public:
	Date();										// デフォルトコンストラクタ
	Date(int yy, int mm = 1, int dd = 1);		// コンストラクタ

	// y年は閏年か？
	static bool leap_year(int year) {
		return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
	}

	int year()  const { return y; }			// 年を返却
	int month() const { return m; }			// 月を返却
	int day()   const { return d; }			// 日を返却
	bool leap_year() const { return leap_year(y); }		// 閏年か？
	Date preceding_day() const;				// 前日の日付を返却
	Date following_day() const;				// 翌日の日付を返却

	int day_of_year() const;				// 年内の経過日数を返却

	int day_of_week() const;				// 曜日を返却

	std::string to_string() const;			// 文字列表現を返却
};

std::ostream& operator<<(std::ostream& s, const Date& x);		// 挿入子

#endif

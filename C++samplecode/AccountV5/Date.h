// 日付クラスDate（第２版：ヘッダ部）

#include <string>
#include <iostream>

class Date {
	int y;		// 西暦年
	int m;		// 月
	int d;		// 日

public:
	Date();									// デフォルトコンストラクタ
	Date(int yy, int mm = 1, int dd = 1);	// コンストラクタ

	int year()  const { return y; }		// 年を返却
	int month() const { return m; }		// 月を返却
	int day()   const { return d; }		// 日を返却

	Date preceding_day() const;			// 前日の日付を返却（閏年に非対応）

	std::string to_string() const;		// 文字列表現を返却
};

std::ostream& operator<<(std::ostream& s, const Date& x);	// 挿入子

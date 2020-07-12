// 日付クラスDate（第１版：ヘッダ部）

class Date {
	int y;		// 西暦年
	int m;		// 月
	int d;		// 日

public:
	Date(int yy, int mm, int dd);	// コンストラクタ
	int year()  { return y; }		// 年を返却
	int month() { return m; }		// 月を返却
	int day()   { return d; }		// 日を返却
};

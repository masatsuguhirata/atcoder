// 日付クラスDate（第４版：ソース部）

#include <ctime>
#include <sstream>
#include <iostream>
#include "Date.h"

using namespace std;

// 平年の各月の日数
int Date::dmax[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

//--- y年m月の日数を求める ---//
int Date::day_of_month(int y, int m)
{
	return dmax[m - 1] + (leap_year(y) && m == 2);
}

//--- Dateのデフォルトコンストラクタ（今日の日付に設定）---//
Date::Date()
{
	time_t current = time(NULL);				// 現在の暦時刻を取得
	struct tm* local = localtime(&current);		// 要素別の時刻に変換

	y = local->tm_year + 1900;		// 年：tm_yearは西暦年-1900
	m = local->tm_mon + 1;			// 月：tm_monは0～11
	d = local->tm_mday;
}

//--- Dateのコンストラクタ（指定された年月日に設定）---//
Date::Date(int yy, int mm, int dd)
{
	y = yy;
	m = mm;
	d = dd;
}

//--- 年内の経過日数を返却 ---//
int Date::day_of_year() const
{
	int days = d;	// 年内の経過日数

	for (int i = 1; i < m; i++)			// 1月～(m-1)月の日数を加える
		days += day_of_month(y, i);
	return days;
}

//--- 前日の日付を返却 ---//
Date Date::preceding_day() const
{
	Date temp = *this;		// 同一の日付

	if (temp.d > 1)
		temp.d--;
	else {
		if (--temp.m < 1) {
			temp.y--;
			temp.m = 12;
		}
		temp.d = day_of_month(temp.y, temp.m);
	}
	return temp;
}

//--- 翌日の日付を返却 ---//
Date Date::following_day() const
{
	Date temp = *this;		// 同一の日付

	if (temp.d < day_of_month(temp.y, temp.m))
		temp.d++;
	else {
		if (++temp.m > 12) {
			temp.y++;
			temp.m = 1;
		}
		temp.d = 1;
	}
	return temp;
}

//--- 文字列表現を返却 ---//
string Date::to_string() const
{
	ostringstream s;
	s << y << "年" << m << "月" << d << "日";
	return s.str();
}

//--- 曜日を返却（日曜～土曜が0～6に対応）---//
int Date::day_of_week() const
{
	int yy = y;
	int mm = m;
	if (mm == 1 || mm == 2) {
		yy--;
		mm += 12;
	}
	return (yy + yy / 4 - yy / 100 + yy / 400 + (13 * mm + 8) / 5 + d) % 7;
}

//--- 出力ストリームsにxを挿入 ---//
ostream& operator<<(ostream& s, const Date& x)
{
	return s << x.to_string();
}

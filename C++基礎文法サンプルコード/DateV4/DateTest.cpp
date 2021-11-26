// 日付クラスDate（第４版）の利用例

#include <iostream>
#include "Date.h"

using namespace std;

int main()
{
	Date today;		// 今日

	cout << "今　日の日付：" << today << '\n';

	cout << "昨　日の日付：" << today.preceding_day() << '\n';
	cout << "一昨日の日付：" << today.preceding_day().preceding_day() << '\n';

	cout << "明　日の日付：" << today.following_day() << '\n';
	cout << "明後日の日付：" << today.following_day().following_day() << '\n';

	cout << "元旦から" << today.day_of_year() << "日経過しています。\n";

	cout << "今年は閏年"
		 << (today.leap_year() ? "です。" : "ではありません。") << '\n';

	int y, m, d;

	cout << "西暦年：";
	cin >> y;

	cout << "その年は閏年"
		 << (Date::leap_year(y) ? "です。" : "ではありません。") << '\n';
}

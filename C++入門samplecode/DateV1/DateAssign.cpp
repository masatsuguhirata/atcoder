// 日付クラスDate（第１版）と代入

#include <iostream>
#include "Date.h"

using namespace std;

int main()
{
	Date a(2015, 11, 18);
	Date b(1999, 12, 31);
	Date c(1999, 12, 31);

	b = a;						// 代入

	c = Date(2023, 12, 27);		// 代入

	cout << "a = " << a.year() << "年" << a.month() << "月" << a.day() << "日\n";
	cout << "b = " << b.year() << "年" << b.month() << "月" << b.day() << "日\n";
	cout << "c = " << c.year() << "年" << c.month() << "月" << c.day() << "日\n";
}

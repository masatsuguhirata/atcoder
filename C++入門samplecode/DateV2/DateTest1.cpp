// 日付クラスDate（第２版）の利用例（メンバ関数preceding_dayの働きを確認）

#include <iostream>
#include "Date.h"

using namespace std;

int main()
{
	Date today;		// 今日

	cout << "今日は" << today << "です。\n";
	cout << "昨日は" << today.preceding_day() << "です。\n";
}

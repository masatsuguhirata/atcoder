// 入力された月の季節を表示（好きなだけ繰り返せる）

#include <string>
#include <iostream>

using namespace std;

int main()
{
	string retry;		// もう一度？

	do {
		int month;
		cout << "季節を求めます。\n何月ですか：";
		cin >> month;

		if (month >= 3 && month <= 5)		// 3月・ 4月・ 5月
			cout << "それは春です。\n";
		else if (month >= 6 && month <= 8)	// 6月・ 7月・ 8月
			cout << "それは夏です。\n";
		else if (month >= 9 && month <= 11)	// 9月・10月・11月
			cout << "それは秋です。\n";
		else if (month == 12 || month == 1 || month == 2) // 12月・1月・2月
			cout << "それは冬です。\n";

		cout << "もう一度？ Y…Yes／N…No：";
		cin >> retry;
	} while (retry == "Y" || retry == "y");
}

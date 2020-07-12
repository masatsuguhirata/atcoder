// カウンタクラスCounter（第１版）の利用例

#include <iostream>
#include "Counter.h"

using namespace std;

int main()
{
	int no;
	Counter x;

	cout << "現在のカウンタ：" << x.value() << '\n';

	cout << "カウントアップ回数：";
	cin >> no;

	for (int i = 0; i < no; i++) {
		x.increment();					// カウントアップ
		cout << x.value() << '\n';
	}

	cout << "カウントダウン回数：";
	cin >> no;

	for (int i = 0; i < no; i++) {
		x.decrement();					// カウントダウン
		cout << x.value() << '\n';
	}
}

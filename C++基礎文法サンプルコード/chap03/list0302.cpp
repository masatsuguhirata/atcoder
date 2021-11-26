// 読み込んだ値に応じてジャンケンの手を表示（0, 1, 2のみを受け付ける）

#include <iostream>

using namespace std;

int main()
{
	int hand;

	do {
		cout << "手を選んでください（0…グー／1…チョキ／2…パー）：";
		cin >> hand;
	} while (hand < 0 || hand > 2);

	switch (hand) {
	 case 0: cout << "グー\n";	   break;
	 case 1: cout << "チョキ\n";   break;
	 case 2: cout << "パー\n";	   break;
	}
}

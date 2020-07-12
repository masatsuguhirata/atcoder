// 数当てゲーム（0～99を当てさせる）

#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	srand(time(NULL));		// 乱数の種を設定

	int no = rand() % 100;	// 当てるべき数：0～99の乱数を生成
	int x;					// キーボードから読み込んだ値

	cout << "数当てゲーム開始!!\n";
	cout << "0～99の数を当ててください。\n";

	do {
		cout << "いくつかな：";
		cin >> x;

		if (x > no)
			cout << "\aもっと小さな数だよ。\n";
		else if (x < no)
			cout << "\aもっと大きな数だよ。\n";
	} while (x != no);

	cout << "正解です。\n";
}

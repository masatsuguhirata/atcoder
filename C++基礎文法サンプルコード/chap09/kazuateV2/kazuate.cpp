// 数当てゲーム（第２版：メイン部）

#include <iostream>
#include "kazuate.h"

using namespace std;

int max_no = 9;			// 当てるべき数の最大値

int main()
{
	initialize();		// 初期化
	cout << "数当てゲーム開始！\n";

	do {
		gen_no();		// 問題（当てるべき数）の作成
		int hantei;
		do {
			hantei = judge(input());	// 解答の判定
			if (hantei == 1)
				cout << "\aもっと小さいですよ。\n";
			else if (hantei == 2)
				cout << "\aもっと大きいですよ。\n";
		} while (hantei != 0);
		cout << "正解です。\n";
	} while (confirm_retry());
}

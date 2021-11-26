// 数当てゲーム（第１版：メイン部）

#include <iostream>

using namespace std;

void initialize();			//【初期化】 乱数の種を現在の時刻に基づいて設定
void gen_no();				//【問題の作成】 0～max_noの値を乱数で生成
int judge(int cand);		//【解答の判定】 candが正解かどうかを判定
int input();				//【解答の入力】 0～max_noの値を入力させる
bool confirm_retry();		//【続行の確認】 再ゲームを行うかを確認

int max_no = 9;		// 当てるべき数の最大値

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
// 数当てゲーム（第１版：入出力部）

#include <iostream>

using namespace std;

extern int max_no;

//--- 入力を促す ---//
static void prompt()
{
	cout << "0～" << max_no << "の数：";
}

//--- 解答の入力 ---//
int input()
{
	int val;
	do {
		prompt();	// 入力を促す
		cin >> val;
	} while (val < 0 || val > max_no);
	return val;
}

//--- 続行の確認 ---//
bool confirm_retry()
{
	int cont;
	cout << "もう一度しますか？\n"
		 << "<Yes…1／No…0>：";
	cin >> cont;
	return static_cast<bool>(cont);
}

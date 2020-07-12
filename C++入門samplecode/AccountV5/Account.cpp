// 銀行口座クラス（第５版：ソース部）

#include <string>
#include <iostream>
#include "Account.h"

using namespace std;

//--- コンストラクタ ---//
Account::Account(string name, string num, long amnt, int y, int m, int d)
														 : open(y, m, d)
{
	full_name = name;		// 名義氏名
	number = num;			// 口座番号
	crnt_balance = amnt;	// 預金残高
}

//--- 預ける ---//
void Account::deposit(long amnt)
{
	crnt_balance += amnt;
}

//--- おろす ---//
void Account::withdraw(long amnt)
{
	crnt_balance -= amnt;
}

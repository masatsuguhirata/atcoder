// 銀行口座クラス（第６版：ソース部）

#include <string>
#include <iostream>
#include "Account.h"

using namespace std;

//--- コンストラクタ ---//
Account::Account(string name, string num, long amnt, const Date& op) :
				 full_name(name), number(num), crnt_balance(amnt), open(op)
{
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
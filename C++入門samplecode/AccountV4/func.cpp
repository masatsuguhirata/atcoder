// func.cpp

#include "Account.h"

void func(void)
{
	Account x("Mr.X", "99999999", 100);
	long b = x.balance();
	x.deposit(100);
}
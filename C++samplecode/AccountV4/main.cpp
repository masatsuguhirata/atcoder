// main.cpp

#include "Account.h"

void func(void);

int main(void)
{
	func();
	Account y("Mr.Y", "88888888", 300);
	long c = y.balance();
	y.deposit(100);
}
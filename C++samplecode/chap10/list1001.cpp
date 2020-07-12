// 鈴木君と武田君の銀行口座

#include <string>
#include <iostream>

using namespace std;

int main()
{
	string suzuki_name    = "鈴木龍一";		// 鈴木君の名義氏名
	string suzuki_number  = "12345678";		// 　〃　の口座番号
	long   suzuki_balance = 1000;			// 　〃　の預金残高

	string takeda_name    = "武田浩文";		// 武田君の名義氏名
	string takeda_number  = "87654321";		// 　〃　の口座番号
	long   takeda_balance = 200;			// 　〃　の預金残高

	suzuki_balance -= 200;					// 鈴木君が200円おろす
	takeda_balance += 100;					// 武田君が100円預ける

	cout << "■鈴木君の口座：\"" << suzuki_name << "\" (" << suzuki_number
		 << ") " << suzuki_balance << "円\n";

	cout << "■武田君の口座：\"" << takeda_name << "\" (" << takeda_number
		 << ") " << takeda_balance << "円\n";
}

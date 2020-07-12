// 銀行口座クラス（第１版）とその利用例

#include <string>
#include <iostream>

using namespace std;

class Account {
public:
	string name;	// 名義氏名
	string number;	// 口座番号
	long balance;	// 預金残高
};

int main()
{
	Account suzuki;		// 鈴木君の口座
	Account takeda;		// 武田君の口座

	suzuki.name    = "鈴木龍一";	// 鈴木君の名義氏名
	suzuki.number  = "12345678";	// 　〃　の口座番号
	suzuki.balance = 1000;			// 　〃　の預金残高

	takeda.name    = "武田浩文";	// 武田君の名義氏名
	takeda.number  = "87654321";	// 　〃　の口座番号
	takeda.balance = 200;			// 　〃　の預金残高

	suzuki.balance -= 200;			// 鈴木君が200円おろす
	takeda.balance += 100;			// 武田君が100円預ける

	cout << "■鈴木君の口座：\"" << suzuki.name << "\" (" << suzuki.number
		 << ") " << suzuki.balance << "円\n";

	cout << "■武田君の口座：\"" << takeda.name << "\" (" << takeda.number
		 << ") " << takeda.balance << "円\n";
}

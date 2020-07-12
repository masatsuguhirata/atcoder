// 暗算トレーニング

#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

//--- 続行の確認 ---//
bool confirm_retry()
{
	int retry;
	do {
		cout << "もう一度？<Yes…1／No…0>：";
		cin >> retry;
	} while (retry != 0 && retry != 1);
	return static_cast<bool>(retry);		// bool型にキャストした値を返却
}

int main()
{
	srand(time(NULL));
	cout << "暗算トレーニング開始!!\n";

	do {
		int x = rand() % 900 + 100;		// 3桁の数
		int y = rand() % 900 + 100;		// 3桁の数
		int z = rand() % 900 + 100;		// 3桁の数

		while (true) {
			int k;						// 読み込んだ値
			cout << x << " + " << y << " + " << z << " = ";
			cin >> k;
			if (k == x + y + z)			// 正解
				break;
			cout << "\a違いますよ!!\n";
		}
	} while (confirm_retry());
}

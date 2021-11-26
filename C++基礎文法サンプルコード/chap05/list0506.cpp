// ５人の点数を読み込んで合計点・平均点を表示

#include <iostream>

using namespace std;

int main()
{
	int tensu[5];		// ５人の点数
	int sum = 0;		// 合計

	cout << "5人の点数の合計点と平均点を求めます。\n";
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << "番の点数：";
		cin >> tensu[i];		// tensu[i]を読み込んで
		sum += tensu[i];		// sumにtensu[i]を加える
	}

	cout << "合計は" << sum << "点です。\n";
	cout << "平均は" << static_cast<double>(sum) / 5 << "点です。\n";
}

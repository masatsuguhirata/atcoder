// 配列オブジェクトを繰り返し動的に生成（例外処理）

#include <new>
#include <iostream>

using namespace std;

int main()
{
	cout << "要素数30000のdouble型配列を繰り返し生成します。\n";

	while (true) {
		try {
			double* a = new double[30000];	// 生成
		}
		catch (bad_alloc) {
			cout << "配列の生成に失敗しましたのでプログラムを中断します。\n";
			return 1;
		}
	}
}

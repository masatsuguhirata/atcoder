// 検証用・識別番号クラスIdNoの利用例

#include <iostream>
#include "VerId.h"

using namespace std;

int main()
{
	VerId a;		// 識別番号1番
	VerId b;		// 識別番号2番

	cout << "aの識別番号：" << a.id() << '\n';
	cout << "bの識別番号：" << b.id() << '\n';
	cout << "生成されたオブジェクトの数：" << VerId::counter << '\n';
	cout << "生成されたオブジェクトの数：" << a.counter << '\n';
	cout << "生成されたオブジェクトの数：" << b.counter << '\n';
}

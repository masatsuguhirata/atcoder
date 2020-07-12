//--- 会員クラスの利用例 ---//

#include <iostream>
#include "Member.h"

using namespace std;

void print(Member* p)
{
	p->print();			// メンバ関数printの呼出し
}

int main()
{	
	Member kaneko("金子真二", 15, 4);			// コンストラクタの呼出し
	kaneko.set_rank(kaneko.get_rank() + 1);		// ランクを１だけアップする
	print(&kaneko);								// 表示
}

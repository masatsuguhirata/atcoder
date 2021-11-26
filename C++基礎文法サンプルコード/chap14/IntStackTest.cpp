#include <iostream>
#include "IntStack.h"

using namespace std;

int main()
{
	IntStack s1(5);		// 容量5のスタック
	s1.push(15);		// s1 = {15}
	s1.push(31);		// s1 = {15, 31}

	IntStack s2(1);		// 容量1のスタック
	s2 = s1;			// s2にs1がコピーされる（s2の容量は5に変更される）
	s2.push(88);		// s2 = {15, 31, 88}

	IntStack s3 = s2;	// s3はs2のコピー
	s3.push(99);		// s3 = {15, 31, 88, 99}

	cout << "スタックs3に積まれているデータをすべてポップします。\n";
	while (!s3.empty())					// 空でないあいだ
		cout << s3.pop() << '\n';		// ポップして表示
}

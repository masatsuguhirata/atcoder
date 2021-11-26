// 文字列からの抽出

#include <sstream>
#include <iostream>

using namespace std;

int main()
{
	string s = "2125/12/18";
	istringstream is(s);	// 文字列sに接続された文字列入力ストリーム
	int y, m, d;
	char ch;
	is >> y >> ch >> m >> ch >> d;
	cout << y << "年" << m << "月" << d << "日\n";
}

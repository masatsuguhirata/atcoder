// 正方形と長方形を表示

#include <iostream>

using namespace std;

//--- 文字cをn個連続表示 ---//
void put_nchar(int n, char c)
{
	while (n-- > 0)
		cout << c;
}

//--- 文字cを並べて一辺の長さnの正方形を表示 ---//
void put_square(int n, char c)
{
	for (int i = 1; i <= n; i++) {		// 全部でn行
		put_nchar(n, c);				// 文字cをn個表示して
		cout << '\n';					// 改行する
	}
}

//--- 文字cを並べて高さがhで横幅がwの長方形を表示 ---//
void put_rectangle(int h, int w, char c)
{
	for (int i = 1; i <= h; i++) {		// 全部でh行
		put_nchar(w, c);				// 文字cをw個表示して
		cout << '\n';					// 改行する
	}
}

int main()
{
	int n, h, w;

	cout << "正方形を表示します。\n";
	cout << "一辺は：";   cin >> n;

	put_square(n, '*');			// 一辺nの正方形を'*'で表示

	cout << "長方形を表示します。\n";
	cout << "高さは：";   cin >> h;
	cout << "横幅は：";   cin >> w;

	put_rectangle(h, w, '+');	// 高さがhで横幅がwの長方形を'+'で表示
}

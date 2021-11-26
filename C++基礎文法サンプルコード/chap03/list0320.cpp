// 拡張表記\'と\"の利用例

#include <iostream>

using namespace std;

int main()
{
	cout << "文字列リテラルと文字リテラルについて。\n";

	cout << "二重引用符";
	cout << '"';											// \"でも可
	cout << "で囲まれた\"ABC\"は文字列リテラルです。\n";	// " は不可

	cout << "単一引用符";
	cout << '\'';											// ' は不可
	cout << "で囲まれた'A'は文字リテラルです。\n";			// \'でも可
}

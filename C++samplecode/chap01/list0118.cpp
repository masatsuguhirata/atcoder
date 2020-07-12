// 名前を読み込んで挨拶する

#include <string>
#include <iostream>

using namespace std;

int main()
{
	string name;	// 名前

	cout << "お名前は：";		// 名前の入力を促す
	cin >> name;				// 名前を読み込む（スペースは無視）

	cout << "こんにちは" << name << "さん。\n";		// 挨拶する
}

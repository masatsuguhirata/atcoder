// stringクラスの利用例

#include <string>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
	string s1 = "ABC";
	string s2 = "HIJKLMN";
	string digits = "0123456789";

	s1 += "DEF";							// s1の末尾に"DEF"を連結
	s1 += 'G';								// s1の末尾に'G'を連結
	s1 += s2;								// s1の末尾に"HIJKLMN"を連結
	s1.insert(6, digits.substr(5, 3));		// s1[6]に"567"を挿入

	s2.replace(3, 2, "kl");					// s2[3]～s2[4]を"kl"に置換
	s2.erase(6);							// s2[6]を削除

	cout << "s1 = ";
	for (int i = 0; i < s1.length(); i++)
		cout << s1[i];
	cout << '\n';
	cout << "s2 = " << s2 << '\n';
}

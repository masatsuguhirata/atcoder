// strcpy関数とstrncpy関数の利用例

#include <cstring>
#include <iostream>

using namespace std;

int main(void)
{
	char tmp[16];
	char s1[16], s2[16], s3[16];

	cout << "文字列を入力してください：";
	cin >> tmp;

	strcpy(s1, strcpy(s2, tmp));	// s2にコピーした文字列をs1にもコピー

	cout << "文字列s1は\"" << s1 << "\"です。\n";
	cout << "文字列s2は\"" << s2 << "\"です。\n";
	cout << "文字列s3は\"" << strcpy(s3, tmp) << "\"です。\n";

	char* x = "XXXXXXXXX";			// 9個の'X'とナル文字 */

	strcpy(s3, x); strncpy(s3, "12345", 3);		 cout << "s3 = " << s3 << '\n';
	strcpy(s3, x); strncpy(s3, "12345", 5);		 cout << "s3 = " << s3 << '\n';
	strcpy(s3, x); strncpy(s3, "12345", 7);		 cout << "s3 = " << s3 << '\n';
	strcpy(s3, x); strncpy(s3, "1234567890", 9); cout << "s3 = " << s3 << '\n';
}

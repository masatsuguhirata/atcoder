// strcat関数とstrncat関数の利用例

#include <cstring>
#include <iostream>

using namespace std;

int main(void)
{
	char s[10];
	char* x = "ABC";

	strcpy(s, "QWE");	// sは"QWE"となる
	strcat(s, "RTY");	// sは"QWERTY"となる
	cout << "s = " << s << '\n';

	strcpy(s, x);	strncat(s, "123", 1);		cout << "s = " << s << '\n';

	strcpy(s, x);	strncat(s, "123", 3);		cout << "s = " << s << '\n';

	strcpy(s, x);	strncat(s, "123", 5);		cout << "s = " << s << '\n';

	strcpy(s, x);	strncat(s, "12345", 5);		cout << "s = " << s << '\n';

	strcpy(s, x);	strncat(s, "123456789", 5);	cout << "s = " << s << '\n';
}

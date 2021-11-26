// ポインタ→整数への型変換

#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "nの番地：" << hex << reinterpret_cast<unsigned long>(&n) << '\n';
}

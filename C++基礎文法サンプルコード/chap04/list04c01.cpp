// 整数型で表現できる値を表示

#include <limits>
#include <iostream>

using namespace std;

int main()
{
	cout << "この処理系の整数型で表現できる値\n";

	cout << "char         ："
						  << int(numeric_limits<char>::min()) << "～" 
						  << int(numeric_limits<char>::max()) << '\n';
	cout << "signed char  ："
						  << int(numeric_limits<signed char>::min()) << "～" 
						  << int(numeric_limits<signed char>::max()) << '\n';
	cout << "unsigned char："
						  << int(numeric_limits<unsigned char>::min()) << "～" 
						  << int(numeric_limits<unsigned char>::max()) << '\n';

	cout << "short int：" << numeric_limits<short>::min() << "～" 
						  << numeric_limits<short>::max() << '\n';
	cout << "int      ：" << numeric_limits<int>::min()   << "～" 
						  << numeric_limits<int>::max()   << '\n';
	cout << "long int ：" << numeric_limits<long>::min()  << "～" 
						  << numeric_limits<long>::max()  << '\n';

	cout << "unsigned short int："
						  << numeric_limits<unsigned short>::min() << "～" 
						  << numeric_limits<unsigned short>::max() << '\n';
	cout << "unsigned int      ："
						  << numeric_limits<unsigned>::min() << "～" 
						  << numeric_limits<unsigned>::max() << '\n';
	cout << "unsigned long int ："
						  << numeric_limits<unsigned long>::min() << "～" 
						  << numeric_limits<unsigned long>::max() << '\n';
}

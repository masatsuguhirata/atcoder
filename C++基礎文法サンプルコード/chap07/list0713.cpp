// n行3列の２次元配列を受け取る仮引数の型をtypeid演算子によって表示

#include <iostream>
#include <typeinfo>

using namespace std;

//---“intを要素型とする要素数3の配列”を要素型とする配列 ---//
void func(int a[][3])
{
	cout << "仮引数aの型：" << typeid(a).name() << '\n';
}

int main(void)
{
	int x[2][3];   // int[3]を要素型とする要素数2の配列
	int y[4][3];   // int[3]を要素型とする要素数4の配列

	cout << "実引数xの型：" << typeid(x).name() << '\n';
	func(x);

	cout << "実引数yの型：" << typeid(y).name() << '\n';
	func(y);
}

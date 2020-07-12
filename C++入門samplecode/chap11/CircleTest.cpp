#include <iostream>
#include "Point2D.h"
#include "Circle.h"

using namespace std;

int main()
{
	Point2D origin(0, 0);			// 原点
	Circle c1(Point2D(3, 5), 7);	// 中心座標(3, 5) 半径7の円
	Circle c2(Point2D(), 8);		// 中心座標(0, 0) 半径8の円
	Circle c3(origin, 9);			// 中心座標(0, 0) 半径9の円

	cout << "c1 = ";   c1.print();   cout << '\n';
	cout << "c2 = ";   c2.print();   cout << '\n';
	cout << "c3 = ";   c3.print();   cout << '\n';
}

#ifndef ___Circle
#define ___Circle

#include "Point2D.h"

//--- 円クラス ---//
class Circle {
	Point2D center;		// 中心座標
	int radius;			// 半径

public:
	Circle(const Point2D& c, int r) : center(c), radius(r) { }

	Point2D get_center() const { return center; }	// 中心座標

	int get_radius() const { return radius; }		// 半径

	void print() const {							// 表示
		std::cout << "半径[" << radius << "] 中心座標";  center.print();
	}
};

#endif

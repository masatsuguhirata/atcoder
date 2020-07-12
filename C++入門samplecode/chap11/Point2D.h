#ifndef ___Point2D
#define ___Point2D

//--- ２次元座標クラス ---//
class Point2D {
	int xp, yp;		// Ｘ座標とＹ座標

public:
	Point2D(int x = 0, int y = 0) : xp(x), yp(y) { }

	int x() const { return xp; }				// Ｘ座標
	int y() const { return yp; }				// Ｙ座標

	void print() const { std::cout << "(" << xp << "," << yp << ")"; } // 表示
};

#endif

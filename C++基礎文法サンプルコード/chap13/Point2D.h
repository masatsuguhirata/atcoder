#ifndef ___Point2D
#define ___Point2D

#include <iostream>

//--- 識別番号付き２次元座標クラス ---//
class Point2D {
	int xp, yp;					// Ｘ座標とＹ座標
	int id_no;					// 識別番号
	static int counter;			// 何番までの識別番号を与えたか【宣言】

public:
	Point2D(int x = 0, int y = 0);		// コンストラクタ【宣言】

	int id() const { return id_no; }	// 識別番号

	void print() const {				// 座標の表示
		std::cout << "(" << xp << "," << yp << ")";
	}

	static int get_max_id();			// 識別番号の最大値を返却【宣言】
};

#endif

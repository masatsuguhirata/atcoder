#include "Point2D.h"

int Point2D::counter = 0;		// 何番までの識別番号を与えたか【定義】

//--- コンストラクタ【定義】---//
Point2D::Point2D(int x, int y) : xp(x), yp(y) {
	id_no = ++counter;		// 識別番号を与える
}

//--- 識別番号の最大値を調べる【定義】---//
int Point2D::get_max_id() {
	return counter;			// 識別番号の最大値を返却
}

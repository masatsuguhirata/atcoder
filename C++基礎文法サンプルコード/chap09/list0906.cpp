// べき乗値を返却する関数

//--- xのn乗を返す ---//
double power(double x, int n)
{
	double tmp = 1.0;

	for (int i = 1; i <= n; i++)
		tmp *= x;	// tmpにxを掛ける
	return tmp;
}

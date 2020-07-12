// double型の特性を表示

#include <limits>
#include <iostream>

using namespace std;

int main()
{
	cout << "最小値：" << numeric_limits<double>::min() << '\n';
	cout << "最大値：" << numeric_limits<double>::max() << '\n';
	cout << "仮数部：" << numeric_limits<double>::radix  << "進数で"
					   << numeric_limits<double>::digits << "桁\n";
	cout << "桁　数：" << numeric_limits<double>::digits10 << '\n';
	cout << "機械ε：" << numeric_limits<double>::epsilon()<< '\n';
	cout << "最大の丸め誤差：" << numeric_limits<double>::round_error() << '\n';
	cout << "丸め様式：";

	switch (numeric_limits<double>::round_style) {
	 case round_indeterminate:
						cout << "決定できない。\n"; break;
	 case round_toward_zero:
						cout << "ゼロに向かって丸める。\n"; break;
	 case round_to_nearest:
						cout << "表現可能な最も近い値に丸める。\n"; break;
	 case round_toward_infinity:
						cout << "無限大に向かって丸める。\n"; break;
	 case round_toward_neg_infinity:
						cout << "負の無限大に向かって丸める。\n"; break;
	}
}

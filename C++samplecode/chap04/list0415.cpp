// 0.0から1.0まで0.001単位で増やして合計を表示（繰返しをfloatで制御）

#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	float sum = 0.0F;
	cout << fixed << setprecision(6);
	for (float x = 0.0F; x <= 1.0F; x += 0.001F) {
		cout << "x = " << x << '\n';
		sum += x;
	}
	cout << "sum = " << sum << '\n';
}

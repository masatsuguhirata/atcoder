// 複素数クラスComplex

#ifndef ___Class_Complex
#define ___Class_Complex

#include <iostream>

//===== 複素数クラス =====//
class Complex {
	double re;		// 実部
	double im;		// 虚部

public:
	Complex(double r = 0, double i = 0) : re(r), im(i) { }	 // コンストラクタ

	double real() const { return re; }		// 実部を返す
	double imag() const { return im; }		// 虚部を返す

	Complex operator+() const { return *this; }				 // 単項+演算子
	Complex operator-() const { return Complex(-re, -im); }	 // 単項-演算子

	//--- 複合代入演算子+= ---//
	Complex& operator+=(const Complex& x) {
		re += x.re;
		im += x.im;
		return *this;
	}

	//--- 複合代入演算子-= ---//
	Complex& operator-=(const Complex& x) {
		re -= x.re;
		im -= x.im;
		return *this;
	}

	//--- 等価演算子== ---//
	friend bool operator==(const Complex& x, const Complex& y) {
		return x.re == y.re && x.im == y.im;
	}

	//--- 等価演算子!= ---//
	friend bool operator!=(const Complex& x, const Complex& y) {
		return !(x == y);
	}

	//--- ２項+演算子（Complex + Complex）---//
	friend Complex operator+(const Complex& x, const Complex& y) {
		return Complex(x.re + y.re, x.im + y.im);
	}

	//--- ２項+演算子（double + Complex）---//
	friend Complex operator+(double x, const Complex& y) {
		return Complex(x + y.re, y.im);
	}

	//--- ２項+演算子（Complex + double）---//
	friend Complex operator+(const Complex& x, double y) {
		return Complex(x.re + y, x.im);
	}
};

//--- 出力ストリームsにxを挿入 ---//
inline std::ostream& operator<<(std::ostream& s, const Complex& x)
{
	return s << '(' << x.real() << ", " << x.imag() << ')';
}

#endif

// 整数配列クラスIntArray（第４版：ヘッダ部）

#ifndef ___Class_IntArray
#define ___Class_IntArray

//===== 整数配列クラス ======//
class IntArray {
	int nelem;		// 配列の要素数
	int* vec;		// 先頭要素へのポインタ

public:
	//----- 添字範囲エラー -----//
	class IdxRngErr {
	private:
		IntArray* ident;
		int idx;
	public:
		IdxRngErr(IntArray* p, int i) : ident(p), idx(i) { }
		int index() { return idx; }
	};

	//--- 明示的コンストラクタ ---//
	explicit IntArray(int size) : nelem(size) { vec = new int[nelem]; }

	//--- コピーコンストラクタ ---//
	IntArray(const IntArray& x);

	//--- デストラクタ ---//
	~IntArray() { delete[] vec; }

	//--- 要素数を返す ---//
	int size() const { return nelem; }

	//--- 代入演算子= ---//
	IntArray& operator=(const IntArray& x);

	//--- 添字演算子[] ---//
	int& operator[](int i) {
		if (i < 0 || i >= nelem)
			throw IdxRngErr(this, i);				// 添字範囲エラー送出
		return vec[i];
	}
};

#endif

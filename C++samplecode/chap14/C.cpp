// Column 14-1

class C {
public:
	explicit C()    { /* …中略… */ }	// デフォルトコンストラクタ
	explicit C(int) { /* …中略… */ }	// 変換コンストラクタではない
	// ...
};

int main()
{
	C a; 						// ＯＫ
	C a1 = 1;					// エラー: 暗黙の変換がない。
	C a2 = C(1);				// ＯＫ
	C a3(1);					// ＯＫ
	C* p = new C(1);			// ＯＫ
	C a4 = (C)1;				// ＯＫ（キャスト）
	C a5 = static_cast<C>(1);	// ＯＫ（キャスト）
}
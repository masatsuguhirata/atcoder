// 識別番号クラスIdNo（第１版：ヘッダ部）

#ifndef ___Class_IdNo
#define ___Class_IdNo

//===== 識別番号クラス =====//
class IdNo {
	static int counter;		// 何番までの識別番号を与えたのか
	int id_no;				// 識別番号

public:
	IdNo();					// コンストラクタ

	int id() const;			// 識別番号を調べる
};

#endif

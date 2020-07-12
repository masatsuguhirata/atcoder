// 検証用・識別番号クラスVerId（ヘッダ部）

#ifndef ___Class_VerId
#define ___Class_VerId

//===== 識別番号クラス =====//
class VerId {
	int id_no;				// 識別番号

public:
	static int counter;		// 何番までの識別番号を与えたのか

	VerId();				// コンストラクタ

	int id() const;			// 識別番号を調べる
};

#endif

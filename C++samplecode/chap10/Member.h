//--- 会員クラス（ヘッダ部）---//

#include <string>

class Member {
	std::string full_name;	// 氏名
	int			no;			// 会員番号
	int			rank;		// 会員ランク

public:
	// コンストラクタ【宣言】
	Member(std::string name, int number, int grade);

	// ランク取得（ゲッタ）
	int get_rank() { return rank; }

	// ランク設定（セッタ）
	void set_rank(int grade) { rank = grade; }

	// 表示【宣言】
	void print();
};

// 数当てゲーム（第２版：ヘッダ部）

void initialize();			//【初期化】 乱数の種を現在の時刻に基づいて設定
void gen_no();				//【問題の作成】 0～max_noの値を乱数で生成
int judge(int cand);		//【解答の判定】 candが正解かどうかを判定
int input();				//【解答の入力】 0～max_noの値を入力させる
bool confirm_retry();		//【続行の確認】 再ゲームを行うかを確認

extern int max_no;			// 当てるべき数の最大値

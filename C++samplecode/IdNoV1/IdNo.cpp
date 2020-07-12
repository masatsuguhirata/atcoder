// 識別番号クラスIdNo（第１版：ソース部）

#include "IdNo.h"

int IdNo::counter = 0;		// 何番までの識別番号を与えたのか

//--- コンストラクタ ---//
IdNo::IdNo()
{
	id_no = ++counter;		// 識別番号を与える
}

//--- 識別番号を調べる ---//
int IdNo::id() const
{
	return id_no;			// 識別番号を返却
}

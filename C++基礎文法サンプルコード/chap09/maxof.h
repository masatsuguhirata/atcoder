// 二値の最大値を求める関数テンプレートと明示的な特殊化

#include <cstring>

//--- a, bの大きいほうの値を求める ---//	 
template <class Type> Type maxof(Type a, Type b)
{
	return a > b ? a : b;
}

//--- a, bの大きいほうの値を求める（const char*型の特殊化）---//
template <> const char* maxof<const char*>(const char* a, const char* b)
{
	return std::strcmp(a, b) > 0 ? a : b;
}
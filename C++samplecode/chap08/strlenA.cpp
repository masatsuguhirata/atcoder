//--- strlenの実現例Ａ ---//

#include <cstddef>

size_t strlen(const char* s)
{
	size_t len = 0;		// 長さ

	while (*s++)
		len++;
	return len;
}

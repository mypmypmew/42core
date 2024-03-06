#include <stddef.h>

int ft_memcmp(const void* p1, const void* p2, size_t len)
{
	const unsigned char* a = p1;
	const unsigned char* b = p2;

	while (len--)
	{
		if (*a != *b)
			return (*a - *b);
		a++;
		b++;
	}
	return 0;
}
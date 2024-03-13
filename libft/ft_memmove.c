//header
#include "libft.h"
//#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*char_dest;
	char		*char_src;

	if (dest == NULL && src == NULL)
		return (NULL);
	char_dest = (char *)dest;
	char_src = (char *)src;
	if (char_dest < char_src)
		ft_memcpy(dest, src, n);
	else
	{
		while (n > 0)
		{
			char_dest[n - 1] = char_src[n - 1];
			n--;
		}
	}
	return (dest);
}

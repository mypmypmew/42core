//header
#include "libft.h"
//#include <stdio.h>

char	*ft_strchr(const char *str, int c)
{
	char	a;

	a = c;
	if (*str == '\0' && a == '\0')
		return ((char *) str);
	if (*str == '\0')
	{
		if (a >= '0' && a <= 127)
			return (NULL);
		return ((char *)str);
	}
	while (*str != '\0')
	{
		if (*str == a)
			return ((char *)str);
		str++;
	}
	if ((*str == a))
		return ((char *)str);
	return (NULL);
}

#include <unistd.h>

char    *ft_strnstr(char *str, char *to_find, size_t len)
{
	unsigned int    i;
	unsigned int    j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				if (i + j < len)
					return (str + i);
				else
					return (NULL);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

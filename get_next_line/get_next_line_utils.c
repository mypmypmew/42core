#include "get_next_line.h"

static	char	*strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	*ft_strdup(char *s)
{
	size_t	len;
	char	*dest;

	len = ft_strlen(s);
	dest = (char *)malloc((len + 1) * sizeof(char));
	if(!dest)
		return (NULL);
	return strncpy(dest, s, len);
}

size_t	ft_strlen(char *s)
{
	size_t	i;
	while(s)
		i++;
	return i;

}

char	*strjoin(char *s1, char *s2)
{
	char	*result_str;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	result_str = (char *)malloc(len * sizeof(char));
	if (result_str == NULL || s1 == NULL || s2 == NULL)
		return (NULL);
	i = 0;
	while (*s1)
		result_str[i++] = *(s1++);
	while (*s2)
		result_str[i++] = *(s2++);
	result_str[i] = '\0';
	return (result_str);
}
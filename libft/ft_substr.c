#include <stddef.h>

char static *strncpy(char *dest, const char *src, size_t n)
{
	int i = 0;
	while(src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while(i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return dest;
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{

	char *sub_str = (char* )malloc((len + 1) * sizeof(char));

	if(sub_str == NULL)
		return NULL;

	strncpy(sub_str, s+start, len);

	return sub_str;

}
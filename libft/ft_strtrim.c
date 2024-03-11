#include <stdlib.h>
#include <stdio.h>

int static strlen (char const *str)
{
	int i = 0;
	while(str[i])
		i++;
	return i;
}

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

int is_included(char const *str, const char c)
{
	while(*str && c != *str)
		str++;
	return (c == *str);
}

char *ft_strtrim(char const *s1, char const *set)
{
	int start = 0;
	int end = strlen(s1) - 1;

	while(is_included(set, s1[start]))
		start++;
	while(is_included(set, s1[end]))
		end--;

	char *trimmed_str = ft_substr(s1, start, (end-start + 1));

	return trimmed_str;
}


int main()
{
	char *str = "*****test*******";

	char *str2 = ft_strtrim(str, "*t");

	printf("%s\n", str2);
}
#include <stdio.h>

int static ft_str_len(const char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return i;
}


char *ft_strjoin(char const *s1, char const *s2)
{
	char *result_str;
	int len = ft_str_len(s1) + ft_str_len(s2) + 1;
	int i = 0;

	result_str = (char *)malloc(len * sizeof(char));

	if(result_str == NULL)
		return NULL;

	while(*s1)
	{
		result_str[i] = *s1;
		s1++;
		i++;
	}
	while(*s2)
	{
		result_str[i] = *s2;
		s2++;
		i++;
	}
	result_str[i] = '\0';

	return result_str;
}
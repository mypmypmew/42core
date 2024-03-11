#include <stdlib.h>

int str_len(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return i;
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i;
	char *output_str;

	output_str = (char *)malloc(sizeof(char) * (str_len(s) + 1));

	if(output_str == NULL)
		return NULL;
	i = 0;
	while(s[i])
	{
		output_str[i] = f(i, s[i]);
		i++;
	}
	output_str[i] = '\0';
	return output_str;
}
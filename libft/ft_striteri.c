#include <stdlib.h>

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	if(s == NULL || f == NULL)
		return ;
	int i = 0;
	while(s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
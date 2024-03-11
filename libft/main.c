#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

int main()
{
	char *str = "Hello ";
	char *str2 = "World!";
	char *dest = ft_strjoin(str, str2);

	printf("%s\n", dest);

	return 0;
}
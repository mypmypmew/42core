//header
#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	const char	*last_occurrence;
	const char	*end_of_str;
	char		a;

	a = c;
	last_occurrence = NULL;
	end_of_str = str;
	while (*end_of_str != '\0')
		end_of_str++;
	while (end_of_str >= str)
	{
		if (*end_of_str == a)
		{
			last_occurrence = end_of_str;
			return ((char *)last_occurrence);
		}
		end_of_str--;
	}
	return ((char *)last_occurrence);
}

//  int main () {
//     const char str[] = "tripouille";
//     char *result;

//    	result = ft_strrchr(str, 't' + 256);
//     printf("String after a character is %s\n", result);
//     return(0);
//  }

//header
#include "libft.h"
//#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	total_size;
	size_t	i;
	size_t	src_len;
	size_t	dest_len;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	total_size = dest_len + src_len;
	if (size <= dest_len)
		return (src_len + size);
	while (*dest)
		dest++;
	i = 0;
	while ((i < size - (total_size - src_len) - 1) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (total_size);
}

// int main() {
// 	// Test buffers
// 	char dest[15] = "Hello, ";
// 	char src[] = "World!";

// 	// Concatenate src to dest using your custom strlcat function
// 	int result = ft_strlcat(dest, src, sizeof(dest));

// 	// Print the concatenated string and the result
// 	printf("Concatenated string: %s\n", dest);
// 	printf("Result of strlcat: %d\n", result);

// 	return 0;
// }

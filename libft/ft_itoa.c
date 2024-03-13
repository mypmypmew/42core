//header
#include "libft.h"
//#include <stdio.h>

static int	digit_counter(int n)
{
	int	digits;

	digits = 0;
	while (n)
	{
		n = n / 10;
		digits++;
	}
	return (digits);
}

static char	*putnb_to_str(char *str, int n, int sign, int len)
{
	if (sign < 0)
	{
		str[0] = '-';
		str[len--] = n % 10 + '0';
		n = n / 10;
	}
	while (n)
	{
		str[len--] = n % 10 + '0';
		n = n / 10;
	}
	return (str);
}

static char	*min_int(char *dest)
{
	int		i;
	char	*str;

	i = 0;
	str = "-2147483648";
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	while (dest[i])
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

static char	*zero(char *dest)
{
	int	i;

	i = 2;
	dest[0] = '0';
	dest[1] = '\0';
	while (dest[i])
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	*ft_itoa(int n)
{
	char	*str_num;
	int		sign;
	int		len;

	sign = 1;
	len = digit_counter(n);
	str_num = (char *)malloc(11 * sizeof(char) + 1);
	if (n == 0)
		return (zero(str_num));
	if (n == -2147483648)
		return (min_int(str_num));
	free(str_num);
	if (n < 0)
	{
		sign = -1;
		len += 1;
		n = -n;
	}
	str_num = (char *)malloc((len + 1) * sizeof(char));
	if (str_num == NULL)
		return (NULL);
	str_num[len--] = '\0';
	str_num = putnb_to_str(str_num, n, sign, len);
	return (str_num);
}

// int main()
// {
// 	char *str = ft_itoa(-2147483648);
// 	printf("The string is: %s", str);
// 	return 0;
// }
#include <stdio.h>
#include <stdlib.h>

int digit_counter(int n)
{
	int digits = 0;

	while(n)
	{
		n = n/10;
		digits++;
	}

	return digits;
}

char *ft_itoa(int n)
{
	char *str_num;

	int sign = 1;
	if(n == -2147483648)
	{
		str_num = "-2147483648";
		return str_num;
	}
	if (n < 0)
		sign = -1;
	int digits = digit_counter(n);
	int len;
	if(sign < 0)
	{
		len = digits + 1;
		n = -1 * n;
	}
	else
		len = digits;

	str_num = (char *)malloc((len + 1) * sizeof(char)); // Allocate space for the null terminator
	if(str_num == NULL)
		return NULL;
	str_num[len--] = '\0'; // Set the null terminator at the end of the string
	if(sign < 0)
	{
		str_num[0] = '-';
		str_num[len--] = n % 10 + '0'; // Convert the digit to character and store it
		n = n / 10;
	}
	while(n)
	{
		str_num[len--] = n % 10 + '0'; // Convert the digit to character and store it
		n = n / 10;
	}

	return str_num;
}
int main()
{

	char *str = ft_itoa(-2147483648);
	printf("The string is: %s", str);
	return 0;
}
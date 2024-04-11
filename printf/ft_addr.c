#include "ft_printf.h"

int	print_address(unsigned long n, int *l)
{
	int		counter;
	char	*symbols;

	symbols = "0123456789abcdef";

	if( n < 16)
		return ft_print_char(symbols[n]);
	else
	{
		counter = print_address(n / 16, l);
		return counter + print_address(n % 16, l);
	}
}

int	print_add(unsigned long n)
{
	int counter;
	counter = 0;

	if((counter += write(1, "0x", 2)) < 0)
		return -1;
	counter += print_address(n, &counter);

	if(counter > 0)
		return counter;
	return -1;
}

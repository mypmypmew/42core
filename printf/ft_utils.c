
#include "ft_printf.h"

int	ft_print_char(char c)
{
	return write(1, &c, 1);
}

int ft_print_str(char *str)
{
	int	counter;
	int s;

	counter = -1;
	if(str)
	{
		while(str[++counter]);

		s = write(1, str, counter);
		if(s < counter)
			return (-1);
		return (counter);
	}
	else
	{
		counter = write(1, "(null)", 6);
		if(counter == 6)
			return (6);
		else
			return (-1);
	}
}


void	print_digit(long n, int base, int reg, int *l)
{
	char	*symbols;

	if(reg == 'x' || reg == 'p')
		symbols = "0123456789abcdef";
	else
		symbols = "0123456789ABCDEF";

	if(n < 0 && (reg != 'u' || reg != 'p'))
	{
		if((ft_print_char('-')) < 0)
			return ;

		(*l)++;
		n = -n;
	}
	if(n >= (long)base)
	{
		print_digit(n / base, base, reg, l);
		if(*l == -1)
			return;
	}

	if((ft_print_char(symbols[n%base])) < 0)
	{
		*l = -1;
		return ;
	}
	(*l)++;
}

int	print_int(long n, int reg)
{
	int	counter;
	int	base;

	if(reg == 'd' || reg == 'i' || reg == 'u')
		base = 10;
	if(reg == 'x' || reg == 'X')
		base = 16;

	counter = 0;

	print_digit(n, base, reg, &counter);
	if(counter <= 0)
		return -1;
	return counter;

}
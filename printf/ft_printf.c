// header
#include "ft_printf.h"

void handle_specifier(char id, va_list ap, int *counter)
{
	if (id == 'c')
		*counter += ft_print_char(va_arg(ap, int));
	else if (id == 's')
		*counter += ft_print_str(va_arg(ap, char *));
	else if (id == 'd' || id == 'i')
		*counter += print_int((long)va_arg(ap, int), id);
	else if (id == 'x' || id == 'X' || id == 'u')
		*counter += print_int((long)va_arg(ap, unsigned int), id);
	else if (id == '%')
		*counter += ft_print_char('%');
	else if (id == 'p')
		*counter += print_add((unsigned long)va_arg(ap, void *));
}


int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		counter;
	char	id;

	va_start(ap, str);
	counter = 0;
	while (*str)
	{
		if (*str == '%')
		{
			id = *(str + 1);
			// if (id == 'c')
			// 	counter += ft_print_char(va_arg(ap, int));
			// else if (id == 's')
			// 	counter += ft_print_str(va_arg(ap, char *));
			// else if (id == 'd' || id == 'i')
			// 	counter += print_int((long)va_arg(ap, int), id);
			// else if (id == 'x' || id == 'X' || id == 'u')
			// 	counter += print_int((long)va_arg(ap, unsigned int), id);
			// else if (id == '%')
			// 	counter += ft_print_char('%');
			// else if (id == 'p')
			// 	counter += print_add((unsigned long)va_arg(ap, void *));
			handle_specifier(id, ap, &counter);
			str++;
		}
		else
			counter += write(1, str, 1);
		str++;
		if (counter == -1)
			return (-1);
	}
	va_end(ap);
	return (counter);
}

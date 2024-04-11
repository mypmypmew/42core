
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int	ft_print_char(char c);
int ft_print_str(char *str);
void	print_digit(long n, int base, int reg, int *l);
int	ft_printf(const char *str, ...);
int	print_address(unsigned long n, int *l);
int	print_add(unsigned long n);
int	print_int(long n, int reg);

#endif

#include "ft_printf.h"

void ft_print_char(va_list args, int *print)
{
	char c = va_arg(args,int);
	write(1, &c, 1);
	*print += 1;
}

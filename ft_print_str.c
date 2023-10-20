#include "ft_printf.h"

void ft_print_str(va_list args, int *print)
{
	char *str;

	str = va_arg(args,char *);
	if(str == NULL)
	{
		write(1, "(null)", 6);
		*print += 6;
		return ;
	}
	while (*str)
	{
		write(1, &*str++, 1);
		*print += 1;
	}
}
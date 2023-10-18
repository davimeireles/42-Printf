#include "ft_printf.h"

int ft_print_char(char arg)
{
	write(1, &arg, 1);
	return 1;
}

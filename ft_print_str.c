#include "ft_printf.h"

int ft_print_str(char *str)
{
	int count;

	count = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return 6;
	}
	while (str[count])
		write(1, &str[count++], 1);
	return count;
}
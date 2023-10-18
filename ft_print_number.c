#include "ft_printf.h"

int ft_print_number(int num)
{
	int count;

	count = 0;
	if (num == -2147483648)
	{
		write(1, "-2147483648", 11);
		return 11;
	} else if (num < 0)
	{
		num = num * -1;
		write(1, "-", 1);
		count += 1;
		ft_print_number(num);
	} else if (num < 10)
	{
		ft_putchar(num + '0');
		count += 1;
	}
	else
	{
		ft_print_number(num / 10);
		ft_print_number(num % 10);
	}
	return count;
}
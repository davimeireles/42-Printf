#include "ft_printf.h"

static int ft_count_digits(int nbr)
{
	int i;

	i = 0;
	if(nbr == 0)
		return 1;
	if(nbr < 0)
	{
		i++;
		nbr = -nbr;
	}
	while(nbr != 0)
	{
		nbr /= 10;
		i++;
	}
	return i;
}

static char *ft_nbr_to_string(int nbr, int *print, int str_len)
{
	char *str;

	if (nbr == INT_MIN)
	{
		write(1, "-2147483648", 11);
		*print += 11;
		return;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
		*print += 1;
	}
	*print += str_len;
	str[str_len] = '\0';
	while (str_len >= 0)
	{
		str_len--;
		str[str_len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return str;
}

/*static void *ft_unbr_to_string(unsigned int nbr, int *print)
{

}*/

void ft_print_nbr(const char format, va_list args, int *print)
{
	int nbr;
	int str_len;
	char *str;

	str_len = 0;
	nbr = va_arg(args,int);
	str_len = ft_count_digits(nbr);
	ft_nbr_to_string(int nbr,int *print,int str_len);
	str = ft_nbr_to_string(nbr,print,str_len);
		while(*str)
			write(1, &*str++, 1);
}
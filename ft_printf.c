/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <dmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:51:32 by dmeirele          #+#    #+#             */
/*   Updated: 2023/10/18 12:06:38 by dmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void check_flags(const char *format, va_list args, int *print)
{
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
				ft_print_char(args, print);
			if (*format == 's')
				ft_print_str(args,print);
			if (*format == 'd' || *format == 'i' || *format == 'u')
				ft_print_nbr(args,print,*format);
		}
		else
		{
			write(1, format, 1);
			*print += 1;
		}
		format++;
	}
}

int ft_printf(const char *format, ...)
{
	int print;
	va_list args;

	print = 0;
	va_start(args, format);
	check_flags(format, args, &print);
	va_end(args);
	return print;
}

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
#include <stdio.h>

int ft_printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);
	int print;
	print = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 's')
				print += ft_print_str(va_arg(args, char *));
			if (*format == 'i' || *format == 'd')
				print += ft_print_number(va_arg(args, int));
			if (*format == 'c')
				print += ft_print_char(va_arg(args, int));
		} else
			print += ft_print_char(*format);
		format++;
	}
	va_end(args);
	return print;
}

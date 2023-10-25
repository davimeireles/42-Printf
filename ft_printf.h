/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <dmeirele@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:14:38 by dmeirele          #+#    #+#             */
/*   Updated: 2023/10/17 15:19:53 by dmeirele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
void	ft_print_char(va_list args, int *print);
void	ft_print_str(va_list args, int *print);
void	ft_print_nbr(va_list args, int *print, char format);
void	ft_print_hex(va_list args, int *print, char format);
void	ft_put_char(char c, int *print);

#endif
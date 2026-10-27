/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaradat <sjaradat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 18:40:36 by sjaradat          #+#    #+#             */
/*   Updated: 2026/10/20 18:09:21 by sjaradat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_printf_format(char c, va_list args)
{
	if (c == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (c == 's')
		return (ft_print_string(va_arg(args, char *)));
	else if (c == 'd' || c == 'i')
		return (ft_print_numbers(va_arg(args, int)));
	else if (c == 'p')
		return (ft_print_pointer(va_arg(args, void *)));
	else if (c == 'u')
		return (ft_print_unsigned(va_arg(args, unsigned int)));
	else if (c == 'x')
		return (ft_print_lower_hexa(va_arg(args, unsigned int)));
	else if (c == 'X')
		return (ft_print_upper_hexa(va_arg(args, unsigned int)));
	else if (c == '%')
		return (ft_print_percent());
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (!format)
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			count += ft_printf_format(format[i], args);
		}
		else
			count += ft_print_char(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}

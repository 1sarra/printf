/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaradat <sjaradat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 18:21:00 by sjaradat          #+#    #+#             */
/*   Updated: 2026/10/18 18:27:21 by sjaradat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_numbers(int n)
{
	char	c;
	int		count;

	count = 0;
	if (n == -2147483648)
		return (ft_print_string("-2147483648"));
	if (n < 0)
	{
		count += ft_print_char('-');
		n = -n;
	}
	if (n >= 10)
		count += ft_print_numbers(n / 10);
	c = (n % 10) + '0';
	count += ft_print_char(c);
	return (count);
}

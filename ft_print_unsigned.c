/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaradat <sjaradat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 19:11:45 by sjaradat          #+#    #+#             */
/*   Updated: 2026/10/18 19:12:48 by sjaradat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int n)
{
	char	c;
	int		count;

	count = 0;
	if (n >= 10)
		count += ft_print_unsigned(n / 10);
	c = (n % 10) + '0';
	count += ft_print_char(c);
	return (count);
}

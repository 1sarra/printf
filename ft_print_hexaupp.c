/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexaupp.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaradat <sjaradat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 18:19:20 by sjaradat          #+#    #+#             */
/*   Updated: 2026/10/18 18:20:27 by sjaradat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_upper_hexa(unsigned int n)
{
	char	*base;
	int		count;
	char	c;

	base = "0123456789ABCDEF";
	count = 0;
	if (n >= 16)
		count += ft_print_upper_hexa(n / 16);
	c = base[n % 16];
	count += ft_print_char(c);
	return (count);
}

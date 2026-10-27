/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaradat <sjaradat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 18:43:47 by sjaradat          #+#    #+#             */
/*   Updated: 2026/10/20 17:26:16 by sjaradat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned long n)
{
	char	*base;
	int		count;

	base = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count += ft_puthexa(n / 16);
	write(1, &base[n % 16], 1);
	return (count + 1);
}

int	ft_print_pointer(void *ptr)
{
	unsigned long	address;
	int				count;

	if (!ptr)
		return (write(1, "(nil)", 5));
	address = (unsigned long)ptr;
	count = 0;
	count += write(1, "0x", 2);
	count += ft_puthexa(address);
	return (count);
}



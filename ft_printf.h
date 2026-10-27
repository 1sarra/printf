/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjaradat <sjaradat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 18:37:16 by sjaradat          #+#    #+#             */
/*   Updated: 2026/10/18 17:18:19 by sjaradat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);

int	ft_print_char(int c);
int	ft_print_string(char *s);
int	ft_print_numbers(int n);
int	ft_print_pointer(void *ptr);
int	ft_print_lower_hexa(unsigned int n);
int	ft_print_upper_hexa(unsigned int n);
int	ft_print_unsigned(unsigned int n);

int	ft_print_percent(void);

#endif

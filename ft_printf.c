/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumigue <brumigue@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 23:58:44 by brumigue          #+#    #+#             */
/*   Updated: 2024/08/28 11:43:53 by brumigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	pf_check(char format, va_list ap)
{
	int	count;

	count = 0;
	if (format == '%')
		count += pf_putchar('%');
	else if (format == 'c')
		count += pf_putchar(va_arg(ap, int));
	else if (format == 's')
		count += pf_putstr(va_arg(ap, char *));
	else if (format == 'd' || format == 'i')
		count += pf_putnbr(va_arg(ap, int));
	else if (format == 'u')
		count += pf_put_unsigned_nbr(va_arg(ap, unsigned int));
	else if (format == 'x')
		count += pf_print_hexa(va_arg(ap, unsigned int), 1);
	else if (format == 'X')
		count += pf_print_hexa(va_arg(ap, unsigned int), 0);
	else if (format == 'p')
		count += pf_print_ptr(va_arg(ap, void *));
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		count;

	count = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%')
			count += pf_check(*(++str), ap);
		else
			count += pf_putchar(*str);
		str++;
	}
	va_end(ap);
	return (count);
}
